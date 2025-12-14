/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212630
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                var_10 |= ((/* implicit */signed char) ((long long int) max((((var_8) ? (var_1) : (((/* implicit */int) var_8)))), (((/* implicit */int) arr_0 [i_1 + 2] [i_1])))));
                /* LoopSeq 3 */
                for (int i_2 = 4; i_2 < 22; i_2 += 1) 
                {
                    arr_7 [(_Bool)1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 5268421096776985748ULL)) ? (((/* implicit */unsigned long long int) max((1894067809U), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-14658)) != (var_1))))))) : (max((var_7), (((/* implicit */unsigned long long int) ((_Bool) var_8)))))));
                    arr_8 [i_0] = ((/* implicit */unsigned char) ((long long int) (((-(5268421096776985748ULL))) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0]))))))));
                }
                /* vectorizable */
                for (unsigned short i_3 = 2; i_3 < 22; i_3 += 1) 
                {
                    var_11 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 0U)) > (5268421096776985748ULL)));
                    var_12 *= ((/* implicit */short) arr_2 [(short)21]);
                    var_13 += ((((/* implicit */long long int) 994442444)) != (-1012416311086894539LL));
                    arr_11 [i_0] [i_3] = ((/* implicit */short) ((unsigned long long int) ((long long int) var_3)));
                    var_14 = ((/* implicit */_Bool) max((var_14), (((((/* implicit */int) ((short) arr_3 [i_0]))) > (((/* implicit */int) var_8))))));
                }
                for (unsigned long long int i_4 = 4; i_4 < 21; i_4 += 1) 
                {
                    arr_15 [i_0] = ((/* implicit */unsigned int) ((((long long int) var_4)) > (((/* implicit */long long int) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_8)))))));
                    arr_16 [5ULL] [i_0] [1LL] = ((/* implicit */long long int) var_5);
                }
                var_15 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_6 [i_1] [i_1 - 1] [i_1 + 2])) ? (((/* implicit */int) var_2)) : (var_4))), (((/* implicit */int) ((((/* implicit */int) var_2)) > (var_5))))));
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) 5268421096776985748ULL))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) 397776420U);
}
