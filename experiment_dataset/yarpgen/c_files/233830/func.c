/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233830
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
    var_16 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (-(((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_12))))))), (((unsigned int) var_11))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_17 ^= ((int) ((((/* implicit */_Bool) ((var_15) + (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) var_5)) : (var_2)));
                var_18 = ((/* implicit */unsigned int) arr_4 [i_0]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 2; i_2 < 9; i_2 += 2) 
                {
                    var_19 = ((/* implicit */int) arr_3 [i_0]);
                    arr_9 [i_2] = ((((((/* implicit */int) var_13)) + (((/* implicit */int) (short)30667)))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))));
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0]))));
                    var_21 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (((/* implicit */int) (short)-30652)) : (((/* implicit */int) (_Bool)1))))));
                }
                arr_12 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((arr_7 [i_0] [i_0] [i_0]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))))) ? (((/* implicit */int) ((var_2) == (max((var_8), (((/* implicit */int) var_12))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) 270384462)) | (arr_3 [i_0])))))))));
                arr_13 [i_0] [i_0] [i_0] |= ((/* implicit */long long int) min((arr_6 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))))));
            }
        } 
    } 
    var_22 |= ((unsigned char) (-(((/* implicit */int) min((var_13), (var_13))))));
}
