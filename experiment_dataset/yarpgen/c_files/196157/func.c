/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196157
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_0] = ((/* implicit */int) arr_0 [i_0] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            arr_13 [i_2] [i_0] = max((var_10), (max((5789836489509691828ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_12)) : (arr_6 [i_0] [i_1 - 1] [i_2])))))));
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) -1706973032))) ? (max((((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) arr_11 [i_3] [i_2] [i_1] [i_0])) : (arr_6 [i_1] [i_1] [i_1]))))) : (((((/* implicit */_Bool) max((12656907584199859788ULL), (13236511704269178616ULL)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9)))))))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_1] [i_1] = ((/* implicit */short) max((((((/* implicit */int) arr_12 [i_1 - 1])) << (((((((var_3) ? (((/* implicit */int) var_8)) : (arr_6 [i_0] [i_0] [i_1]))) + (101))) - (11))))), (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1 - 1])) ? (((/* implicit */int) var_13)) : (arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
                arr_15 [i_0] [i_1] = ((((/* implicit */_Bool) max(((-(var_5))), (((/* implicit */unsigned long long int) ((long long int) var_0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1 - 1] [i_0]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31907)) ? (var_7) : (((/* implicit */long long int) arr_3 [i_1 - 1]))))) ? (min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_1 - 1])), (var_14))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) arr_3 [i_1])) : (12697910983647770885ULL))))));
                arr_16 [i_1] [i_0] [i_0] = arr_10 [i_0] [i_0] [i_0] [i_0] [i_1];
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) var_13);
}
