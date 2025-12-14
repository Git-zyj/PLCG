/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233978
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
    var_18 &= ((/* implicit */short) ((signed char) ((3200550758U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) /* same iter space */
                {
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((0U) == (((/* implicit */unsigned int) (-2147483647 - 1))))))));
                    arr_8 [i_0] [i_1 + 3] [i_0] [i_2] = ((/* implicit */signed char) (!(var_8)));
                    var_20 += ((/* implicit */_Bool) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1])))) : (((/* implicit */int) var_14)))), (((((/* implicit */_Bool) (short)28309)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (signed char)3))))));
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) /* same iter space */
                {
                    arr_13 [i_0] [i_3] [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 + 2] [i_1 - 1] [19U])) || (((/* implicit */_Bool) arr_6 [i_1 + 2] [i_1 + 3] [i_1 + 2] [i_1]))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                        {
                            {
                                arr_20 [i_0] [11U] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) arr_9 [i_3] [i_4] [i_3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_17)))) : (((/* implicit */int) var_3))));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_0] [i_0 - 1])) + (((/* implicit */int) arr_7 [i_0] [i_0 + 4]))));
                                var_22 -= ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_0 + 2] [i_1 - 2])) % (((/* implicit */int) arr_7 [i_0 + 3] [i_1 - 2]))));
                                arr_21 [i_0] [i_1] [i_3] [i_3] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_7 [i_3] [i_5])) : (arr_6 [i_5] [i_4] [2U] [i_0])))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_3])) || (((/* implicit */_Bool) var_16))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_11))));
                }
                for (unsigned int i_6 = 0; i_6 < 21; i_6 += 3) /* same iter space */
                {
                    arr_26 [i_1] [i_1 - 1] = ((/* implicit */unsigned int) var_5);
                    arr_27 [i_0 + 4] [i_0 + 4] [(short)13] = ((/* implicit */short) ((((((/* implicit */_Bool) var_17)) ? ((~(((/* implicit */int) arr_23 [i_0] [i_1] [i_6])))) : (((/* implicit */int) ((signed char) arr_19 [i_1 - 2] [i_1 - 2] [i_1] [i_0] [i_1] [i_1]))))) + (((/* implicit */int) var_0))));
                    arr_28 [i_0] [i_0] [i_6] = ((/* implicit */long long int) (((-(((/* implicit */int) arr_7 [i_0 - 1] [i_1 - 1])))) * ((((+(((/* implicit */int) var_0)))) * (((((/* implicit */int) var_9)) / (((/* implicit */int) var_17))))))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_24 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) ((_Bool) arr_14 [i_0 + 3] [i_0 + 3] [i_1] [(short)15] [i_0 + 3]))))));
                    var_25 = ((/* implicit */_Bool) ((signed char) ((((var_7) && (((/* implicit */_Bool) var_16)))) ? (((/* implicit */int) min((((/* implicit */short) var_12)), (arr_15 [i_0] [i_0] [i_0] [i_0] [i_7])))) : (((/* implicit */int) var_4)))));
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) arr_12 [i_0 + 4] [i_0] [i_1 - 1]))));
                    var_27 -= (+(((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_8)), (arr_5 [i_7]))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_30 [(signed char)1] [(unsigned short)2] [i_7]))) % (var_16))))));
                    arr_31 [(signed char)8] [i_7] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0 + 4] [i_0 - 1] [i_1 + 1])))) ? (((/* implicit */int) min((max((var_2), (((/* implicit */unsigned short) var_4)))), (((/* implicit */unsigned short) ((signed char) arr_29 [i_0] [i_0] [i_0 + 3])))))) : (max((((/* implicit */int) arr_0 [i_0])), (arr_24 [i_0])))));
                }
                var_28 = ((/* implicit */signed char) arr_2 [i_0]);
                var_29 += ((/* implicit */unsigned int) (~(min((((((/* implicit */int) var_0)) % (arr_17 [(_Bool)1] [i_1] [i_0 + 3] [i_0] [i_0]))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))))));
                /* LoopSeq 3 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_30 |= ((/* implicit */signed char) ((long long int) ((((((/* implicit */int) (unsigned short)58024)) == (((/* implicit */int) (signed char)-28)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_15))));
                    arr_34 [i_1] = ((/* implicit */unsigned int) var_17);
                    /* LoopSeq 3 */
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 1) /* same iter space */
                    {
                        var_31 = ((/* implicit */short) ((max((((/* implicit */long long int) (signed char)37)), (5263404539161765434LL))) & (((/* implicit */long long int) ((((/* implicit */int) arr_23 [i_8] [i_1 + 2] [i_0 + 3])) + (((/* implicit */int) arr_7 [i_1 + 2] [i_0 + 3])))))));
                        arr_38 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1448095634))));
                        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) (((+(((/* implicit */int) var_4)))) / (((/* implicit */int) var_11)))))));
                        arr_39 [i_0 + 4] [i_0 + 4] [i_8] [i_9] = ((/* implicit */long long int) (((((!(((/* implicit */_Bool) arr_33 [i_9] [i_8] [i_1] [i_0 - 2])))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))))) ^ (((/* implicit */int) var_7))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 21; i_10 += 1) /* same iter space */
                    {
                        arr_44 [i_0] [i_0] [i_0] [i_0] [i_10] [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_9 [(signed char)16] [(_Bool)0] [i_8]), (arr_9 [i_0 + 2] [i_0 + 2] [i_10])))) ? ((-(((/* implicit */int) (signed char)122)))) : (((((/* implicit */int) var_2)) + (((/* implicit */int) arr_9 [i_0 + 3] [i_1 + 1] [i_8]))))));
                        var_33 -= ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-122)))));
                    }
                    for (short i_11 = 4; i_11 < 20; i_11 += 2) 
                    {
                        arr_48 [(short)7] [i_1] = ((/* implicit */signed char) (+((-(((((/* implicit */int) (signed char)(-127 - 1))) ^ (arr_36 [i_0] [i_0] [i_0] [i_0])))))));
                        var_34 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) max((arr_15 [i_0] [i_1] [i_8] [i_11 - 2] [i_11]), (arr_46 [i_0 + 2] [i_1] [i_1] [i_11])))))))));
                    }
                }
                for (int i_12 = 1; i_12 < 18; i_12 += 2) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_35 ^= var_16;
                        arr_54 [i_0] [i_0] [i_0] [i_0] [i_0] [i_12] = ((int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))));
                        arr_55 [i_0] [i_0] [i_1 - 2] [3U] [i_12] [i_13] = ((/* implicit */long long int) ((arr_42 [i_0] [i_1 + 3] [i_12 + 1]) - (((/* implicit */int) var_4))));
                    }
                    for (signed char i_14 = 2; i_14 < 18; i_14 += 3) 
                    {
                        arr_58 [i_12] = ((/* implicit */unsigned short) ((long long int) var_6));
                        var_36 = ((/* implicit */short) var_7);
                        var_37 &= var_4;
                    }
                    arr_59 [i_0] [(_Bool)1] [i_12] = (~(((/* implicit */int) max((var_7), (((_Bool) (signed char)(-127 - 1)))))));
                }
                for (unsigned int i_15 = 0; i_15 < 21; i_15 += 2) 
                {
                    var_38 = ((/* implicit */unsigned int) arr_25 [(unsigned short)13]);
                    arr_62 [i_0] [i_1 + 2] [(short)4] = ((/* implicit */signed char) (-((((!(var_3))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) arr_60 [i_1] [i_15]))))));
                    var_39 &= ((/* implicit */unsigned int) (((+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))))) & (min((((/* implicit */int) var_14)), (((arr_45 [i_0] [i_0] [i_1] [11]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_46 [i_0] [i_1 + 3] [i_0] [i_15]))))))));
                    var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) / (((/* implicit */int) ((short) arr_23 [i_1] [i_1 - 1] [(short)7]))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) << (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_0))))) : (((/* implicit */int) max((var_8), (var_7)))))))))));
                }
                var_41 = ((/* implicit */unsigned short) ((((arr_17 [i_0] [i_1 - 1] [i_1] [(signed char)2] [i_1 + 1]) / (arr_17 [19] [i_1 - 2] [i_1 + 2] [i_1 - 2] [i_1 + 1]))) + ((~(((/* implicit */int) (short)24437))))));
            }
        } 
    } 
    var_42 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 3 */
    for (signed char i_16 = 0; i_16 < 21; i_16 += 3) 
    {
        for (long long int i_17 = 3; i_17 < 20; i_17 += 2) 
        {
            for (long long int i_18 = 0; i_18 < 21; i_18 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_19 = 0; i_19 < 21; i_19 += 2) 
                    {
                        for (unsigned int i_20 = 0; i_20 < 21; i_20 += 2) 
                        {
                            {
                                arr_76 [i_17] [i_17] [i_17] = min((((/* implicit */unsigned int) var_1)), (((unsigned int) arr_41 [19U] [i_19] [i_17] [i_16])));
                                var_43 *= ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_0)))));
                            }
                        } 
                    } 
                    var_44 *= ((/* implicit */signed char) arr_18 [i_16] [(short)8] [i_17] [i_18] [i_16]);
                    var_45 = ((/* implicit */long long int) var_2);
                    var_46 = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_50 [i_17 - 3] [i_17 + 1] [i_17 + 1]))) / (var_16))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */signed char) var_7))))) ? (((/* implicit */int) arr_5 [i_16])) : (((((/* implicit */_Bool) arr_57 [i_17] [i_17] [i_16])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_10)))))))));
                }
            } 
        } 
    } 
    var_47 = ((/* implicit */int) ((signed char) ((((/* implicit */int) var_12)) >> ((((~(((/* implicit */int) var_12)))) + (26))))));
}
