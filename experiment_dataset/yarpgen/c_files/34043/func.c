/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34043
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
    var_15 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -120629449)) ? (var_2) : (((/* implicit */int) var_8))))) ? ((~(var_1))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)0)) : (var_2))))) / (((/* implicit */int) (short)9420))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) min(((+(((/* implicit */int) var_3)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)26733))))))))));
                    /* LoopSeq 4 */
                    for (signed char i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */long long int) (short)21967);
                        var_18 = ((/* implicit */short) min((((/* implicit */long long int) (!((!(((/* implicit */_Bool) (short)-6430))))))), (min(((~(-4750657399355994060LL))), (((/* implicit */long long int) (_Bool)1))))));
                        arr_13 [i_0 + 2] [i_0 + 2] [i_0] [i_1] [i_0 + 2] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0 + 1] [(signed char)9] [i_0]))))) ? (((/* implicit */int) max(((unsigned short)26750), (((/* implicit */unsigned short) arr_7 [i_3] [i_0]))))) : (((/* implicit */int) min((arr_11 [i_2] [i_3 + 2]), (arr_9 [i_0] [3ULL] [i_2] [i_2])))))));
                        var_19 = ((/* implicit */int) min((var_19), (((var_13) | (((/* implicit */int) var_0))))));
                        arr_14 [i_0] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))));
                    }
                    for (short i_4 = 0; i_4 < 14; i_4 += 4) /* same iter space */
                    {
                        arr_19 [i_0 - 1] [i_1] [i_1] [i_0] [i_0 - 1] [i_2] = var_14;
                        arr_20 [i_0] [i_0 + 1] [i_4] [i_1] [i_2] [(short)12] |= ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-24715)) ? (((/* implicit */int) (unsigned short)0)) : (602421564)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26748))) : (var_11))))));
                        arr_21 [i_0] [i_0] [i_0 + 2] [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) ((short) 1719659052))) ? (((var_6) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))) : ((~(((/* implicit */int) arr_12 [i_0])))))));
                    }
                    for (short i_5 = 0; i_5 < 14; i_5 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (short i_6 = 3; i_6 < 10; i_6 += 3) 
                        {
                            var_20 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((0LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))))))));
                            arr_27 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [(unsigned char)2] [i_2 + 2])) && (((arr_10 [i_6] [i_0] [(signed char)1] [i_6] [i_6 - 2] [(short)6]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))))));
                        }
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_31 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 2] = ((/* implicit */unsigned int) ((arr_29 [i_0 + 2]) <= (((((/* implicit */int) var_4)) * (((/* implicit */int) (unsigned char)92))))));
                            var_21 = ((/* implicit */_Bool) (signed char)-44);
                            arr_32 [i_0] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_7 [i_2 - 2] [i_0 - 1]))));
                            arr_33 [i_0] [i_1] [i_1] [i_5] [i_7] = ((/* implicit */long long int) ((signed char) arr_3 [i_0 + 1] [i_0 + 2] [i_0]));
                        }
                        /* vectorizable */
                        for (long long int i_8 = 0; i_8 < 14; i_8 += 3) 
                        {
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (+((-(var_11))))))));
                            arr_36 [i_0 + 1] [i_0 + 1] [i_0] [i_1] [i_8] [i_0 + 1] [i_8] = ((/* implicit */_Bool) var_10);
                        }
                        var_23 ^= max((((((((/* implicit */_Bool) (signed char)-105)) || (((/* implicit */_Bool) 4029541333736608131ULL)))) ? ((+(((/* implicit */int) arr_16 [i_0])))) : (((/* implicit */int) arr_35 [i_5] [i_2] [(short)8] [i_0 + 2] [i_0])))), (((/* implicit */int) min((arr_5 [i_0 - 1] [i_2 + 2]), (arr_5 [i_0 + 2] [i_2 + 1])))));
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned short)65535)))) - (((/* implicit */int) (unsigned short)0))))) || (((/* implicit */_Bool) min(((-(((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) (signed char)-111))))))))));
                    }
                    for (short i_9 = 0; i_9 < 14; i_9 += 4) /* same iter space */
                    {
                        arr_40 [i_0] [i_1] [i_2] [i_1] [(_Bool)1] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_5)))) ? (max((max((var_5), (((/* implicit */unsigned long long int) arr_25 [i_9] [(short)13] [i_2 + 2] [i_0] [i_0])))), (arr_0 [i_0] [i_0 + 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)56)) + (((/* implicit */int) (short)-21023)))))));
                        arr_41 [i_0] [i_0] [i_2 - 2] [(_Bool)1] [i_9] [i_9] = ((((/* implicit */long long int) var_13)) * (max((arr_28 [i_9] [(signed char)4] [i_9] [i_2 + 1] [2] [i_0 + 1]), (((/* implicit */long long int) var_14)))));
                        var_25 = ((((/* implicit */int) (unsigned short)2)) * (((((/* implicit */_Bool) (short)3227)) ? (((/* implicit */int) (unsigned char)87)) : (((/* implicit */int) var_12)))));
                    }
                    var_26 = ((/* implicit */signed char) ((var_7) ? (min((4029541333736608131ULL), (((/* implicit */unsigned long long int) 8343565492943160304LL)))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_6)) + (((/* implicit */int) var_10)))))))));
                    arr_42 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) || (var_3))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */signed char) (_Bool)1);
    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_3))))) ? (0LL) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_11)))))) ? (6849897956038498635ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))) > (((/* implicit */int) (_Bool)1)))))))))));
    var_29 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) - (((((((/* implicit */long long int) ((/* implicit */int) var_6))) == (var_11))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)127)) + (((/* implicit */int) (signed char)77))))) : (min((((/* implicit */unsigned long long int) (short)-17574)), (2305843009213693952ULL)))))));
}
