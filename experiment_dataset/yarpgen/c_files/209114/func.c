/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209114
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
    var_18 = ((/* implicit */unsigned short) max(((-(((((/* implicit */int) var_16)) * (((/* implicit */int) var_3)))))), ((~((-(((/* implicit */int) var_2))))))));
    var_19 *= max((((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-78)) + (2147483647))) << (((((((/* implicit */int) var_12)) + (73))) - (11)))))), (var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    var_20 = ((/* implicit */_Bool) var_7);
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [i_0])) > (arr_5 [i_2])))), (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned long long int) ((var_9) % (var_6)))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2])) ? (((/* implicit */unsigned long long int) var_4)) : (0ULL))))))))));
                }
                var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) arr_0 [i_0] [i_1])))));
            }
        } 
    } 
}
