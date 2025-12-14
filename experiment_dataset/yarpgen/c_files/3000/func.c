/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3000
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */short) arr_3 [i_1]);
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */short) (-((+(arr_0 [i_1] [i_1])))));
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) var_1);
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    var_11 *= ((/* implicit */short) var_3);
                    arr_9 [13U] [i_1] [i_1] [i_2] = ((/* implicit */short) max((120259084288ULL), (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)19)), ((-(((/* implicit */int) (unsigned char)237)))))))));
                }
                var_12 += ((((/* implicit */_Bool) (~(min((arr_3 [i_0]), (((/* implicit */long long int) arr_2 [i_0]))))))) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [2ULL] [i_1] [i_1]))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (~(((/* implicit */int) ((short) var_0))))))));
    var_14 = ((/* implicit */unsigned char) var_3);
    var_15 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) var_1)))));
}
