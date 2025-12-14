/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197825
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
    for (unsigned char i_0 = 3; i_0 < 24; i_0 += 1) 
    {
        var_20 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 18446744073709551605ULL)) ? (11ULL) : (11ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_7)) == (12949855259816159424ULL))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551605ULL)))))) : (((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (max((arr_0 [(unsigned char)6] [i_0 - 3]), (((/* implicit */unsigned long long int) (unsigned char)51)))))));
        var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)112)) ? (min((5496888813893392192ULL), (((/* implicit */unsigned long long int) 0U)))) : (((/* implicit */unsigned long long int) ((4146901808988561147LL) | (-8685783557895419862LL)))))) >> (((2101066010565307091ULL) - (2101066010565307041ULL)))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            var_22 = ((/* implicit */unsigned int) ((unsigned char) arr_5 [i_2] [i_1]));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                for (long long int i_4 = 1; i_4 < 11; i_4 += 4) 
                {
                    {
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_2] [(signed char)3] [i_4 + 1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) & (5496888813893392201ULL))) : (((((/* implicit */_Bool) (unsigned short)33405)) ? (5496888813893392192ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)67))))))))));
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_12) >= (910078666U))))) % (arr_0 [i_4 - 1] [i_4]))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    {
                        arr_16 [i_1] = ((/* implicit */unsigned int) 5496888813893392192ULL);
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 1; i_7 < 10; i_7 += 3) 
                        {
                            var_25 ^= ((/* implicit */unsigned short) ((2026866888472822786ULL) != (arr_3 [i_1] [i_6])));
                            var_26 = ((/* implicit */unsigned short) (-(arr_17 [i_7] [i_7 - 1] [i_7 + 1] [i_7 - 1] [(signed char)0] [i_7 - 1])));
                            var_27 -= ((/* implicit */_Bool) arr_0 [i_5] [i_1]);
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_28 = (!(((/* implicit */_Bool) var_10)));
                            arr_22 [i_1] [i_8] [i_2] [i_8] [i_6] [i_8] = ((/* implicit */long long int) arr_8 [i_1] [i_6] [i_1]);
                            arr_23 [i_1] [i_8] [8LL] [i_1] [8LL] [i_1] [8LL] = ((((/* implicit */_Bool) var_17)) ? (arr_13 [i_1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 6324620749189494564ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)32131))))));
                        }
                        var_29 = ((/* implicit */unsigned int) arr_4 [i_1] [i_2] [i_6]);
                    }
                } 
            } 
            var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) >= (arr_19 [i_1] [i_2] [i_1] [11U] [i_2]))))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 3) 
        {
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                {
                    var_31 = arr_26 [i_1] [i_1];
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 3; i_11 < 9; i_11 += 1) 
                    {
                        arr_32 [i_1] [i_10] [i_9] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_10))));
                        var_32 = ((/* implicit */unsigned char) ((((long long int) arr_28 [i_10 - 1] [i_9] [i_1])) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)79)))));
                        arr_33 [i_11] [i_11] [i_10 - 1] = ((/* implicit */unsigned short) 3384888621U);
                        arr_34 [i_11 + 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_1 [i_10 - 1])))) ? (arr_12 [i_10 - 1] [i_10] [i_10]) : (arr_12 [i_10] [i_10] [(unsigned char)6])));
                        var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_20 [i_1] [(unsigned char)6] [i_10] [i_1] [i_10 - 1] [i_11 + 3])))))));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_12 = 4; i_12 < 8; i_12 += 1) 
        {
            for (unsigned short i_13 = 1; i_13 < 10; i_13 += 4) 
            {
                for (unsigned int i_14 = 0; i_14 < 12; i_14 += 4) 
                {
                    {
                        var_34 = ((/* implicit */unsigned char) arr_17 [i_13 + 2] [(unsigned char)8] [i_13] [8U] [i_13] [i_13]);
                        arr_43 [i_1] [i_1] [i_13] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-87)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_13] [(unsigned char)9]))) : (910078666U)))) ? (((/* implicit */int) arr_15 [i_1] [i_12] [i_1])) : (((/* implicit */int) ((arr_12 [i_1] [i_13] [7ULL]) != (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_15 = 0; i_15 < 12; i_15 += 3) 
        {
            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [5U] [i_15])) ? (((/* implicit */int) arr_4 [8LL] [8LL] [i_1])) : (((/* implicit */int) ((arr_8 [i_1] [(unsigned char)10] [2U]) == (((/* implicit */unsigned long long int) var_16)))))));
            /* LoopSeq 2 */
            for (signed char i_16 = 0; i_16 < 12; i_16 += 2) /* same iter space */
            {
                var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) (signed char)88))))) * (((((/* implicit */int) arr_18 [i_1] [i_1] [i_1])) >> (((arr_10 [i_1] [i_15] [(_Bool)1] [(unsigned char)0]) - (14225683322494353863ULL))))))))));
                var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_1] [i_15] [i_1])) ? (((/* implicit */int) arr_15 [i_1] [i_15] [i_16])) : (((/* implicit */int) arr_15 [i_16] [i_15] [i_1]))));
            }
            for (signed char i_17 = 0; i_17 < 12; i_17 += 2) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned int i_18 = 0; i_18 < 12; i_18 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_19 = 3; i_19 < 11; i_19 += 2) 
                    {
                        var_38 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_48 [i_19 - 3] [10LL] [i_19 - 3])) * (((/* implicit */int) ((arr_13 [i_17]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_15]))))))));
                        var_39 = ((/* implicit */unsigned char) ((arr_49 [i_19 - 2] [i_19 - 1] [i_19 - 2]) * (((arr_4 [i_1] [i_1] [i_1]) ? (5496888813893392184ULL) : (((/* implicit */unsigned long long int) arr_24 [i_1] [i_1] [i_1]))))));
                        var_40 = ((/* implicit */unsigned char) arr_28 [(_Bool)1] [i_15] [(_Bool)1]);
                        arr_60 [i_1] [i_15] [i_17] [2LL] [(unsigned char)0] = ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_54 [i_1] [i_1] [i_1])) : (arr_10 [i_1] [i_15] [4ULL] [i_19]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((2097694995863960595ULL) > (((/* implicit */unsigned long long int) 3290184144435717064LL)))))));
                    }
                    arr_61 [i_15] [i_15] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_1] [i_15] [i_17] [i_18])) * (((/* implicit */int) arr_48 [4ULL] [i_18] [i_17]))));
                }
                for (unsigned long long int i_20 = 1; i_20 < 8; i_20 += 3) 
                {
                    var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_30 [i_1])))))))));
                    var_42 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))));
                    arr_66 [10U] [10U] [i_15] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_58 [i_20 - 1] [i_20 + 4] [i_20 + 2] [i_20 + 4] [i_20 - 1]))) < (((((-5404109447139505144LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)105)) - (91)))))));
                }
                for (unsigned char i_21 = 0; i_21 < 12; i_21 += 3) 
                {
                    var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (arr_13 [i_17]) : (arr_13 [i_1])));
                    var_44 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)0))));
                    var_45 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)0))));
                    var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3384888630U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_19 [i_1] [i_1] [i_1] [i_1] [i_1])))) ? (((/* implicit */int) ((arr_24 [i_1] [i_1] [i_17]) != (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) : (((/* implicit */int) arr_46 [i_1] [i_1] [i_21]))));
                }
                /* LoopNest 2 */
                for (unsigned char i_22 = 0; i_22 < 12; i_22 += 2) 
                {
                    for (signed char i_23 = 1; i_23 < 11; i_23 += 2) 
                    {
                        {
                            var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) arr_15 [11U] [i_17] [i_23 - 1]))));
                            var_48 = ((/* implicit */unsigned short) arr_37 [i_22] [i_22]);
                            var_49 = ((/* implicit */unsigned int) 13ULL);
                        }
                    } 
                } 
            }
        }
        arr_77 [i_1] [4ULL] = ((_Bool) 5496888813893392201ULL);
    }
    var_50 = ((/* implicit */unsigned char) min((var_50), (((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) var_16)) : (var_17))), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((((5496888813893392192ULL) ^ (2026866888472822796ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_13))))))))))))));
    var_51 = ((/* implicit */unsigned int) var_1);
}
