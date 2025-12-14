/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221532
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
    var_20 = (-(min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned char)0)))), ((((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (var_15))))));
    var_21 = ((/* implicit */unsigned char) 4066451116U);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_22 = ((/* implicit */int) 9755508486549301015ULL);
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0]))));
            var_24 = ((/* implicit */unsigned char) min((var_24), (var_19)));
            arr_4 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) : (var_2)));
        }
        for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    {
                        var_25 += ((/* implicit */unsigned long long int) var_4);
                        var_26 |= ((((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) | (var_11));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_4])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)384)))))) ? (arr_9 [i_0] [i_0] [i_0]) : (((unsigned long long int) var_11))));
                    }
                } 
            } 
            var_28 = ((/* implicit */unsigned short) arr_0 [i_0]);
        }
        var_29 = ((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned char i_8 = 1; i_8 < 20; i_8 += 4) 
                {
                    {
                        var_30 = ((/* implicit */unsigned int) (((_Bool)1) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1838253088)) ? (((/* implicit */int) (unsigned char)184)) : (((/* implicit */int) (_Bool)1)))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_9 = 2; i_9 < 21; i_9 += 2) /* same iter space */
                        {
                            var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_15 [i_5]))) ? (((((/* implicit */int) (unsigned short)1948)) * (((/* implicit */int) arr_20 [i_5] [i_5])))) : (((/* implicit */int) (_Bool)1))))) ? (max((((((/* implicit */_Bool) arr_21 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_15 [i_5])) : (((/* implicit */int) (unsigned short)65024)))), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65152))))));
                            var_32 = ((/* implicit */unsigned char) arr_22 [i_6]);
                            var_33 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_5] [i_6])) ? (((/* implicit */int) (signed char)-38)) : (((/* implicit */int) (signed char)22))));
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 228769964U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_5] [i_9 - 2] [i_7] [i_8] [i_9] [i_8]))) : (min((arr_16 [(signed char)4] [i_9 - 1]), (arr_16 [(unsigned char)11] [i_9 + 1])))));
                            var_35 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_2)));
                        }
                        for (unsigned long long int i_10 = 2; i_10 < 21; i_10 += 2) /* same iter space */
                        {
                            var_36 = ((/* implicit */unsigned short) var_2);
                            var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)384)) ? (((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */int) arr_30 [i_5] [i_5] [i_5] [i_7] [i_8] [i_10]))))) : (((((/* implicit */_Bool) -544687423)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11429714116746545758ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (arr_18 [i_6] [i_7] [i_8 + 2])))) ? (((/* implicit */int) arr_27 [i_5] [i_6] [i_7] [i_8] [i_10])) : (((((/* implicit */_Bool) arr_22 [i_8])) ? (((/* implicit */int) arr_26 [i_8] [14ULL])) : (arr_31 [i_5] [(signed char)2] [i_7] [i_8] [i_10]))))))));
                            var_38 = ((unsigned short) var_1);
                            var_39 = ((/* implicit */_Bool) min((var_39), ((_Bool)1)));
                        }
                        for (unsigned short i_11 = 1; i_11 < 20; i_11 += 4) 
                        {
                            var_40 = ((/* implicit */unsigned long long int) (unsigned short)32131);
                            var_41 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_20 [i_5] [i_7]))));
                        }
                        var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((((_Bool)1) ? (0ULL) : (var_18)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_15 [i_7]))))) : (((unsigned long long int) ((var_13) <= (arr_16 [i_6] [i_8]))))));
                        var_43 = ((/* implicit */unsigned int) (((_Bool)1) ? ((-2147483647 - 1)) : (((((/* implicit */_Bool) max(((unsigned short)32131), ((unsigned short)47648)))) ? (((/* implicit */int) arr_26 [i_5] [i_5])) : (((arr_30 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_15 [i_5]))))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_12 = 2; i_12 < 21; i_12 += 4) 
                        {
                            var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)34668)) ? (((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) var_14))))));
                            var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) 0ULL))));
                            var_46 = ((/* implicit */unsigned long long int) arr_17 [i_7] [i_12]);
                            var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)56969)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_22 [i_12 + 2]), (arr_22 [i_12 + 2]))))) : (630817080U)));
                            var_48 = arr_20 [i_5] [i_6];
                        }
                        /* vectorizable */
                        for (signed char i_13 = 1; i_13 < 21; i_13 += 1) 
                        {
                            var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_5] [8U] [i_8 - 1] [i_8] [i_13 + 2] [i_5])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_21 [i_5] [i_5] [i_7] [i_8]))))) ? (((/* implicit */int) arr_27 [i_8 + 2] [i_8] [i_13] [i_13] [i_13 + 1])) : (((((/* implicit */_Bool) arr_19 [i_7] [i_7])) ? (0) : (((/* implicit */int) (_Bool)1))))));
                            var_50 = ((/* implicit */int) max((var_50), (((arr_30 [i_8 - 1] [i_8 + 3] [i_8 + 1] [i_8] [19U] [i_8 + 2]) ? (((/* implicit */int) arr_30 [i_8 - 1] [i_8 + 1] [i_8] [i_8] [i_8] [i_8 - 1])) : (((/* implicit */int) arr_30 [i_8 + 3] [i_8 - 1] [i_8] [i_8 + 2] [(_Bool)1] [i_8 - 1]))))));
                            var_51 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_29 [i_5] [i_6] [i_8 + 1])))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41154))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)0)))))));
                            var_52 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)8))));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_53 = ((/* implicit */unsigned long long int) max((var_53), (((/* implicit */unsigned long long int) (_Bool)1))));
                            var_54 = ((/* implicit */long long int) min((arr_24 [i_8 + 2] [i_8 + 2] [i_8 + 3] [i_8 - 1]), (max((arr_24 [i_8 + 1] [i_8 + 1] [i_8 + 2] [i_8 + 1]), (arr_24 [i_8 - 1] [i_8 + 2] [i_8 + 2] [i_8 - 1])))));
                            arr_43 [i_8] [i_8 + 2] [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) var_4);
                        }
                        for (unsigned short i_15 = 0; i_15 < 23; i_15 += 4) 
                        {
                            var_55 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) arr_25 [i_5])), (max((var_18), (((/* implicit */unsigned long long int) arr_24 [i_5] [i_5] [i_5] [i_5])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1026484879)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (630817080U))))));
                            var_56 = arr_39 [i_5] [i_5] [i_7] [i_8] [i_15] [i_6];
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_16 = 0; i_16 < 23; i_16 += 1) 
        {
            for (unsigned int i_17 = 1; i_17 < 19; i_17 += 2) 
            {
                {
                    var_57 = ((/* implicit */int) max((var_57), (((/* implicit */int) var_5))));
                    arr_50 [i_5] [i_16] [i_17 + 3] = ((/* implicit */unsigned char) (-2147483647 - 1));
                }
            } 
        } 
        var_58 = ((/* implicit */_Bool) arr_46 [i_5] [i_5] [i_5]);
    }
    var_59 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (var_2) : (var_8)));
}
