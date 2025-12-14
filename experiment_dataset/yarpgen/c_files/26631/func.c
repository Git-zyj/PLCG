/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26631
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
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((unsigned char) ((((/* implicit */_Bool) max(((unsigned char)195), ((unsigned char)140)))) ? (((/* implicit */int) (unsigned char)195)) : (((/* implicit */int) max((arr_0 [i_0]), ((unsigned char)71))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) max(((unsigned char)253), (((/* implicit */unsigned char) arr_11 [i_0] [6LL] [i_3] [(unsigned char)1] [i_1] [i_0]))))) ? (max((((/* implicit */unsigned int) arr_10 [i_0] [i_2] [i_0])), (var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) arr_15 [i_0])))))))), (((/* implicit */unsigned int) var_0))));
                                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((signed char) arr_6 [8] [i_2 + 1] [i_4 - 2])))));
                                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [6LL] [6LL] [i_0])) << (((((/* implicit */int) arr_10 [i_0] [i_1] [i_3 + 2])) - (223)))))) ? (max((((1045168131U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_8))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) - (((/* implicit */int) (short)32742))))) ? (((/* implicit */int) arr_10 [i_0] [i_3 + 2] [i_4])) : (((/* implicit */int) ((short) arr_0 [4U]))))))));
                                arr_17 [i_4 - 1] [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */int) min((arr_15 [i_0]), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)71)) || (((/* implicit */_Bool) var_1)))))))) - (((((/* implicit */int) arr_8 [i_3 + 2] [i_3 + 2] [i_2 + 1])) >> (((((/* implicit */int) arr_13 [i_3 - 3] [i_3] [i_2 + 1])) - (66)))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))), (((/* implicit */int) arr_3 [i_0 - 2]))))) && ((!(((/* implicit */_Bool) (+(((/* implicit */int) var_9)))))))));
                    /* LoopSeq 3 */
                    for (int i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        arr_21 [i_0] [i_0] [i_2 - 1] [i_2 - 1] = ((/* implicit */unsigned char) (~(((/* implicit */int) max(((short)-24482), (arr_4 [i_0 - 1]))))));
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((1045168131U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)97)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0]))))) : (((/* implicit */int) arr_7 [i_0] [i_1] [(short)0] [i_0]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((short) var_8)))));
                        arr_22 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_10)) ? (max((((/* implicit */unsigned int) arr_2 [i_1] [i_5])), (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)203))))), (max((((/* implicit */unsigned int) min((arr_3 [i_1]), (((/* implicit */short) arr_6 [i_0] [(short)6] [(short)6]))))), (var_5)))));
                    }
                    for (signed char i_6 = 3; i_6 < 14; i_6 += 4) 
                    {
                        arr_26 [i_2 + 1] [i_2 + 1] [i_0] [i_6 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [(unsigned char)2])) ? ((+(min((((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0])), (var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)87), (((/* implicit */signed char) arr_7 [i_6] [i_6] [(unsigned char)14] [i_0]))))))));
                        arr_27 [i_0] [i_0] [i_6] = ((/* implicit */short) (unsigned char)3);
                        var_21 = var_4;
                        arr_28 [i_0] [i_0] [i_0] [i_2 + 1] [i_2 - 1] [(unsigned char)0] &= ((/* implicit */unsigned int) (_Bool)1);
                    }
                    for (short i_7 = 2; i_7 < 14; i_7 += 4) 
                    {
                        var_22 = (i_0 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))))))) != (((((/* implicit */int) min((((/* implicit */short) (unsigned char)1)), (arr_3 [i_0])))) / (((/* implicit */int) ((((/* implicit */int) arr_30 [i_0] [(unsigned char)0] [(unsigned char)0] [(unsigned char)2] [i_0] [i_2])) <= (((/* implicit */int) var_6)))))))))) : (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))))))) != (((((/* implicit */int) min((((/* implicit */short) (unsigned char)1)), (arr_3 [i_0])))) * (((/* implicit */int) ((((/* implicit */int) arr_30 [i_0] [(unsigned char)0] [(unsigned char)0] [(unsigned char)2] [i_0] [i_2])) <= (((/* implicit */int) var_6))))))))));
                        arr_32 [i_1] [(_Bool)1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? ((-(((/* implicit */int) arr_4 [i_0 + 1])))) : (((((/* implicit */_Bool) arr_4 [i_2 + 1])) ? (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_29 [i_0]))))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((2718681130U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) * (((((/* implicit */int) var_6)) / (((/* implicit */int) (signed char)-119))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-108))) : (621822424U)))) ? (((/* implicit */int) arr_10 [i_0] [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) arr_12 [i_2] [i_0] [i_2 + 1] [13U] [13LL] [i_2 + 1] [i_7 - 2])))) : (((/* implicit */int) max((arr_31 [i_2 - 1] [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 2]), (arr_31 [i_2 + 1] [(unsigned char)13] [i_0] [(unsigned char)3] [(unsigned char)1]))))));
                        var_24 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)23153)) : (((/* implicit */int) arr_6 [i_7] [i_1] [i_1]))));
                    }
                }
            } 
        } 
        arr_33 [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) max((arr_23 [i_0 + 1] [i_0 + 1] [i_0] [i_0]), (((/* implicit */unsigned short) var_2))))))) ? (3249799155U) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) 1045168140U)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)-13248)))), (((/* implicit */int) (!(arr_20 [i_0] [i_0])))))))));
        var_25 = ((/* implicit */signed char) var_4);
        var_26 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((((arr_7 [i_0] [(short)13] [i_0 + 1] [i_0]) ? (((/* implicit */int) arr_11 [(_Bool)1] [(unsigned char)4] [i_0 + 1] [i_0 + 1] [(signed char)3] [(short)8])) : (((/* implicit */int) var_4)))), (((/* implicit */int) (short)-24482))))), (((var_5) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0])))))));
    }
    for (short i_8 = 0; i_8 < 17; i_8 += 2) 
    {
        var_27 = ((/* implicit */unsigned char) var_12);
        var_28 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)16301)) || (((/* implicit */_Bool) arr_35 [i_8] [(signed char)13])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */int) (unsigned short)27195)) : (((/* implicit */int) (unsigned char)2))))) : (((((/* implicit */_Bool) (signed char)61)) ? (3249799151U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))));
        arr_37 [i_8] = ((/* implicit */short) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_8] [i_8]))) | (var_11)))));
        arr_38 [i_8] = ((/* implicit */short) ((((((/* implicit */_Bool) min((arr_35 [i_8] [i_8]), ((unsigned char)232)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_35 [i_8] [i_8])))) % (((/* implicit */int) (unsigned short)4094))));
    }
    var_29 &= ((/* implicit */short) (+(((/* implicit */int) (unsigned char)240))));
    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-4581811445315421546LL)));
}
