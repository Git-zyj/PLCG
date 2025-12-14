/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189619
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
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        arr_14 [i_0] [14] [(signed char)7] [19U] = ((/* implicit */short) arr_10 [i_0] [i_0] [i_2] [i_3] [i_3]);
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 2; i_4 < 20; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */_Bool) var_9);
                            var_18 = ((/* implicit */int) 422957357U);
                            arr_17 [i_0] [(unsigned char)17] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((3872009939U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)75)))));
                            var_19 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_0] [i_1]))) * (262841819U)))) ? (((((((/* implicit */int) var_5)) + (2147483647))) >> (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [18U])))) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_2])));
                        }
                        for (short i_5 = 0; i_5 < 21; i_5 += 4) 
                        {
                            arr_20 [i_3] [i_0] [10U] [i_2] [i_3] [i_3] |= ((/* implicit */unsigned int) arr_12 [i_0] [i_1 + 2] [i_5] [i_3]);
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_16 [i_1] [i_1 + 2] [i_1 - 1] [i_1 + 1] [i_1] [i_1 - 2])), (var_12)))) ? (((unsigned int) arr_16 [i_1] [i_1 + 2] [i_1 - 1] [i_1 + 1] [i_1] [i_1 - 2])) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_0] [i_1 + 2] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 - 2])) / (((/* implicit */int) arr_16 [i_0] [i_1 + 2] [i_1 - 1] [i_1 + 1] [(unsigned char)20] [i_1 - 2]))))))))));
                            arr_21 [i_0] [i_0] [i_0] [(unsigned short)7] [(unsigned short)7] [i_3] [i_0] = max((((/* implicit */unsigned int) ((262841812U) > (var_12)))), (((((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))) - (((((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_0])) / (293963125U))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            arr_26 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_12);
                            var_21 = ((/* implicit */_Bool) var_5);
                        }
                        arr_27 [i_0] [i_1] = ((arr_2 [(unsigned short)9] [i_1 - 1]) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (short)7202)))));
                        var_22 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((short) 262841830U))), (min((((/* implicit */unsigned int) arr_24 [i_1 - 2])), (262841822U)))));
                    }
                    for (unsigned int i_7 = 2; i_7 < 17; i_7 += 4) 
                    {
                        var_23 = ((/* implicit */signed char) max(((unsigned short)65524), (arr_9 [i_2] [i_2] [i_2] [i_2])));
                        arr_30 [i_0] [(_Bool)1] [i_2] [i_0] = ((/* implicit */short) 1810704201U);
                    }
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (-(arr_19 [(unsigned char)16] [(unsigned char)16] [i_1] [(unsigned char)16] [i_0]))))));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 21; i_9 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((((/* implicit */int) var_11)) % (((/* implicit */int) (unsigned short)12))))))) | (((arr_12 [i_1] [i_1 + 2] [i_0] [i_1]) ? (8U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_0] [i_1])))))));
                                var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_1 + 1]))));
                                var_27 |= arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1];
                                arr_37 [i_9] [i_0] [i_0] [i_0] = (-((-(arr_34 [i_1] [i_1] [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1] [i_0]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) > (max((((/* implicit */unsigned int) (unsigned short)39902)), (293963140U)))))) >= (((/* implicit */int) (short)-1689))));
    var_29 = ((/* implicit */_Bool) var_2);
}
