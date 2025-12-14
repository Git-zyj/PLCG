/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42873
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) ((unsigned char) (!((!(((/* implicit */_Bool) var_7)))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    arr_8 [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)46685)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))));
                    var_18 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (17203668088734845213ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))));
                    arr_9 [i_1] [i_2] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_5 [i_1]) : (arr_5 [i_2])))));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((var_7), (((/* implicit */unsigned int) (unsigned short)14))));
}
