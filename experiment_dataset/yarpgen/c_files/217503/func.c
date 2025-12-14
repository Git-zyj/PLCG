/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217503
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        var_20 -= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) 1556034217U)) : (var_17))));
                        arr_11 [i_3] [i_0] [i_0] [i_0] = (+(min((arr_9 [i_1 - 1] [(short)12] [(short)12] [i_0]), (((/* implicit */unsigned long long int) var_3)))));
                        var_21 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) 8955522526153682739LL)))));
                        var_22 = ((/* implicit */unsigned char) ((short) ((-8955522526153682726LL) ^ (((/* implicit */long long int) ((unsigned int) 786970827U))))));
                        arr_12 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((long long int) arr_4 [i_0] [i_1 + 1] [i_1]));
                    }
                    for (unsigned char i_4 = 1; i_4 < 12; i_4 += 4) 
                    {
                        arr_16 [i_0] [i_0] [i_0] [2U] = var_4;
                        var_23 -= (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (-2344382889647946791LL) : (var_17)))) ? (((/* implicit */long long int) ((/* implicit */int) min(((short)15), (((/* implicit */short) var_11)))))) : (arr_8 [i_4] [i_2] [i_2 + 1] [i_0] [i_2] [i_0]))));
                        arr_17 [4ULL] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2 - 1] [i_2 - 1] [i_4 + 2] [i_0])) ? (((/* implicit */long long int) 4117116067U)) : (-8955522526153682740LL)))) ? (max((((/* implicit */unsigned long long int) arr_7 [i_2 - 1] [i_0] [i_4 - 1] [i_1 + 2])), (var_15))) : (((((/* implicit */_Bool) arr_13 [i_2 + 1] [0ULL] [i_4 + 4] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2 + 1] [i_1] [i_4 - 1] [i_0]))) : (16187827352396837968ULL)))));
                    }
                    for (unsigned char i_5 = 2; i_5 < 15; i_5 += 4) 
                    {
                        var_24 = ((/* implicit */int) ((long long int) max(((~(var_17))), (var_8))));
                        var_25 += ((/* implicit */signed char) min((max((8955522526153682720LL), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) var_9))))))))));
                    }
                    arr_21 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) arr_8 [i_0] [i_0] [i_1 + 2] [i_1] [i_2 + 1] [i_2 - 1])))));
                    arr_22 [i_0] [15ULL] [15ULL] [i_0] = ((/* implicit */unsigned char) (~(min((arr_9 [7ULL] [(signed char)9] [i_1 - 1] [i_0]), (16187827352396837968ULL)))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (~(min((((/* implicit */long long int) (unsigned short)57765)), (-8955522526153682740LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (min((((((/* implicit */_Bool) -8955522526153682746LL)) ? (-8955522526153682720LL) : (8955522526153682746LL))), (((/* implicit */long long int) ((short) var_6)))))));
    var_27 -= ((/* implicit */_Bool) max((((/* implicit */long long int) var_14)), (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) 8955522526153682752LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-8955522526153682746LL))) : (((/* implicit */long long int) max((var_14), (((/* implicit */unsigned int) -1799630330)))))))));
    var_28 &= ((/* implicit */long long int) (-((~(((/* implicit */int) var_18))))));
}
