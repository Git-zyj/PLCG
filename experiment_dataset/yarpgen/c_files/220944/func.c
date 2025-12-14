/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220944
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
    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) | (var_4))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (1902322971U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_12)))))) : (max((var_15), (((/* implicit */unsigned int) var_5)))))), (var_8))))));
    var_22 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((var_1), (var_8))), (((/* implicit */unsigned int) var_5))))) ? (((((/* implicit */int) var_5)) / (var_7))) : (min(((-(((/* implicit */int) var_10)))), (((var_6) * (((/* implicit */int) (_Bool)0))))))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 14; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) ((((min((((/* implicit */unsigned int) arr_1 [i_0])), (arr_4 [i_0] [i_1]))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (var_6))))))) ? (((min((arr_0 [i_0]), (((/* implicit */long long int) var_2)))) + (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_0 + 4] [i_0] [i_0 + 4])), (var_14))))))) : (((/* implicit */long long int) min((max((((/* implicit */unsigned int) arr_3 [i_0])), (arr_5 [i_0] [i_1]))), (arr_5 [i_2 - 1] [i_0 + 3]))))));
                    var_24 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_2]))) < (((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_0 + 1])) ? (arr_4 [i_2 - 1] [i_0 + 1]) : (arr_4 [i_2 - 1] [i_0 - 1]))));
                    var_25 = ((/* implicit */unsigned int) min((var_25), (var_15)));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_26 += ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_0] [(unsigned short)2] [i_3])), (var_9))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4 - 2]))) - (arr_9 [i_4] [i_4 - 1] [i_4] [i_4])))));
                                var_27 = ((/* implicit */unsigned char) arr_8 [i_2] [i_3] [i_2 - 1] [i_1] [i_2]);
                                var_28 *= ((/* implicit */unsigned int) ((max((((/* implicit */int) min((var_9), (var_19)))), ((-(((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3 - 1] [i_4 + 1])))))) & (((/* implicit */int) (short)-28983))));
                                var_29 *= ((((/* implicit */_Bool) min((((var_8) - (((/* implicit */unsigned int) ((/* implicit */int) var_14))))), (((((/* implicit */_Bool) arr_5 [i_0] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4] [(signed char)2] [i_2] [i_4]))) : (arr_4 [i_0 + 2] [i_2 + 1])))))) ? (var_15) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_4] [i_3] [i_3] [i_3 - 1] [i_3 - 1])) ? (((((/* implicit */int) arr_3 [i_4 + 1])) >> (((var_1) - (2482405886U))))) : (((/* implicit */int) var_16))))));
                                var_30 -= ((/* implicit */unsigned short) ((var_12) ? (-715910960) : (max((((((/* implicit */_Bool) arr_13 [i_0 + 2] [i_1] [i_0 + 2])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_3 [(_Bool)1])))), (((((/* implicit */int) var_14)) >> (((var_17) - (447972019)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_31 = ((/* implicit */short) arr_0 [(unsigned short)1]);
    }
    for (int i_5 = 2; i_5 < 14; i_5 += 4) /* same iter space */
    {
        arr_16 [i_5] = var_14;
        var_32 = ((/* implicit */_Bool) var_17);
    }
}
