/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36780
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
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 11; i_3 += 4) 
                    {
                        for (short i_4 = 3; i_4 < 8; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) arr_9 [i_4] [i_0] [i_0]);
                                arr_12 [0LL] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) arr_0 [6]);
                            }
                        } 
                    } 
                    arr_13 [i_0] = ((/* implicit */unsigned short) var_4);
                    var_17 *= ((/* implicit */short) (unsigned short)63222);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_6 = 4; i_6 < 11; i_6 += 2) /* same iter space */
        {
            var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) + (arr_8 [i_6 - 2] [i_6 - 4])));
            var_19 = (+(((/* implicit */int) (_Bool)1)));
        }
        /* vectorizable */
        for (int i_7 = 4; i_7 < 11; i_7 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_8 = 0; i_8 < 12; i_8 += 1) 
            {
                for (unsigned short i_9 = 0; i_9 < 12; i_9 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_10 = 0; i_10 < 12; i_10 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) * ((+(((/* implicit */int) (unsigned char)254))))));
                            var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14))));
                            arr_30 [i_10] [i_9] [i_8] [i_7] [i_5] = ((/* implicit */unsigned long long int) -1);
                            var_22 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_29 [i_7] [(unsigned char)4] [i_7]))));
                            arr_31 [i_10] [i_8] [(short)11] [10ULL] [i_10] = ((/* implicit */unsigned int) arr_20 [i_5] [i_5] [i_5]);
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_23 -= ((/* implicit */long long int) ((arr_15 [i_5]) >= (arr_15 [i_5])));
                            var_24 |= ((/* implicit */unsigned short) ((arr_8 [i_5] [i_7 - 3]) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)63222)))))));
                            var_25 = ((/* implicit */int) (_Bool)1);
                            var_26 -= ((/* implicit */unsigned long long int) (~(var_0)));
                        }
                        var_27 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_24 [1U] [1U])) & (((/* implicit */int) var_12))))) ? (arr_10 [i_9] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_8] [i_8] [(unsigned short)3]))));
                    }
                } 
            } 
            var_28 = ((/* implicit */int) 6LL);
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                for (unsigned int i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    {
                        var_29 = ((/* implicit */int) max((var_29), (((((/* implicit */_Bool) ((((/* implicit */int) var_12)) % (((/* implicit */int) arr_9 [2ULL] [i_5] [i_7 - 1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_5] [0ULL] [i_5] [i_12] [i_13] [0U])) || (((/* implicit */_Bool) var_2))))) : (((/* implicit */int) var_2))))));
                        var_30 = ((unsigned int) arr_35 [i_7 - 1] [i_7 - 3] [i_7 - 1]);
                        /* LoopSeq 1 */
                        for (int i_14 = 0; i_14 < 12; i_14 += 2) 
                        {
                            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_32 [i_5] [i_7] [i_7] [i_7] [i_13] [i_14]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13))));
                            var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [i_13] [i_13] [(unsigned short)0] [(unsigned short)7] [i_5]))));
                        }
                        var_33 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) var_12))))));
                    }
                } 
            } 
        }
        for (int i_15 = 4; i_15 < 11; i_15 += 2) /* same iter space */
        {
            var_34 -= min((((int) arr_37 [i_15] [5U] [i_15 - 3] [i_15 - 1])), (((((/* implicit */int) arr_24 [i_15 + 1] [i_15 - 4])) + (((/* implicit */int) arr_39 [7ULL] [4ULL] [7ULL] [i_15 - 4] [i_15 - 3])))));
            var_35 |= ((/* implicit */signed char) ((0ULL) + (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (615215257U))))));
            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_5]) ? (((((/* implicit */_Bool) arr_41 [(unsigned char)0] [i_15 - 2])) ? (arr_23 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-74))))) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_15] [i_15] [i_15 - 1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_5] [i_15] [i_15] [i_5] [i_15 - 4] [i_15]))) : (((unsigned int) arr_26 [i_15 - 4] [i_15 - 2] [i_15 - 2] [i_15 - 2] [i_15 - 4] [9U]))));
            var_37 ^= ((/* implicit */int) arr_0 [i_15 - 4]);
        }
        arr_45 [i_5] [i_5] = ((/* implicit */signed char) -57784850);
        var_38 -= ((min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_10 [i_5] [i_5]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(unsigned short)1] [i_5])))))));
        /* LoopNest 2 */
        for (unsigned int i_16 = 0; i_16 < 12; i_16 += 1) 
        {
            for (unsigned short i_17 = 0; i_17 < 12; i_17 += 2) 
            {
                {
                    var_39 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_14))));
                    var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) 15)), (arr_36 [i_17] [i_16] [i_5]))), (min((((/* implicit */unsigned int) (_Bool)1)), (min((500149964U), (((/* implicit */unsigned int) 2147483637)))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_18 = 0; i_18 < 12; i_18 += 4) 
                    {
                        for (unsigned short i_19 = 0; i_19 < 12; i_19 += 2) 
                        {
                            {
                                var_41 = ((/* implicit */unsigned int) min((((/* implicit */long long int) min(((unsigned char)1), (((/* implicit */unsigned char) var_6))))), (min((8796093022207LL), (((/* implicit */long long int) ((int) arr_29 [i_16] [i_17] [i_16])))))));
                                arr_55 [i_19] [i_18] [i_16] [i_18] [i_16] [i_16] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (unsigned char)0)), (min((1590061373U), (((/* implicit */unsigned int) -4))))));
                                arr_56 [i_5] [i_5] [i_5] [i_5] [i_16] [i_5] [(unsigned char)9] = ((/* implicit */int) min((min((28ULL), (((/* implicit */unsigned long long int) arr_54 [i_5] [i_16])))), (((/* implicit */unsigned long long int) min((arr_54 [6ULL] [i_5]), (arr_54 [i_17] [i_19]))))));
                                var_42 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_17] [i_5] [i_18])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (long long int i_20 = 0; i_20 < 12; i_20 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_21 = 0; i_21 < 12; i_21 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_22 = 3; i_22 < 9; i_22 += 2) 
            {
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    {
                        var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)39084)) ? (arr_27 [i_21] [i_20]) : ((~(min((arr_4 [i_21]), (arr_4 [i_20])))))));
                        arr_68 [i_23] [(short)10] [(short)10] [i_23] [i_22] [(short)10] = ((/* implicit */short) ((((((/* implicit */_Bool) 5398443084355329049ULL)) || (((/* implicit */_Bool) arr_62 [i_22 - 3] [i_22 + 3] [i_22 - 3])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((/* implicit */int) (unsigned short)62337)), (arr_20 [i_20] [i_21] [i_23])))), (arr_58 [i_22 - 2])))) : (min((((/* implicit */unsigned long long int) min((3U), (((/* implicit */unsigned int) var_0))))), (arr_25 [i_21] [i_22] [i_21])))));
                    }
                } 
            } 
            var_44 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned long long int) min((arr_50 [i_20]), (((/* implicit */long long int) (unsigned short)65121))))));
            var_45 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_60 [i_20] [i_21] [i_21]) : (((/* implicit */int) arr_1 [i_20]))))) ? (((3182667217U) - (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20903)))))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-72))) % (2040589053U))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_20] [i_20]))))) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (signed char)-123)) ? (var_0) : (((/* implicit */int) arr_29 [6U] [i_20] [i_21])))), (var_8)))));
        }
        for (unsigned short i_24 = 0; i_24 < 12; i_24 += 2) 
        {
            var_46 ^= ((/* implicit */short) ((min((16663496686549436380ULL), (((/* implicit */unsigned long long int) arr_26 [i_24] [i_24] [i_20] [(unsigned char)2] [i_20] [i_20])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(561744724U)))) || (((/* implicit */_Bool) (-(arr_23 [i_24]))))))))));
            /* LoopNest 3 */
            for (unsigned int i_25 = 0; i_25 < 12; i_25 += 4) 
            {
                for (int i_26 = 0; i_26 < 12; i_26 += 2) 
                {
                    for (int i_27 = 0; i_27 < 12; i_27 += 2) 
                    {
                        {
                            var_47 = ((/* implicit */unsigned int) arr_1 [8]);
                            var_48 |= ((/* implicit */unsigned char) (~(((arr_51 [i_20] [i_24] [i_25] [i_26] [i_27]) / (arr_51 [6] [1] [i_25] [i_26] [(unsigned short)2])))));
                            var_49 = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) 7)) & (arr_8 [i_20] [i_24]))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_14)), ((-(((/* implicit */int) arr_3 [i_25] [i_26])))))))));
                        }
                    } 
                } 
            } 
        }
        var_50 = ((/* implicit */signed char) 2);
        /* LoopNest 2 */
        for (unsigned int i_28 = 2; i_28 < 11; i_28 += 2) 
        {
            for (unsigned int i_29 = 1; i_29 < 11; i_29 += 3) 
            {
                {
                    var_51 = ((/* implicit */unsigned short) (-(min((var_15), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_9)), (2040589053U))))))));
                    var_52 = ((/* implicit */unsigned short) arr_62 [i_20] [i_28] [i_29]);
                    arr_84 [i_20] [i_20] [i_29] [(unsigned char)1] = ((/* implicit */unsigned int) (unsigned char)8);
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_30 = 0; i_30 < 12; i_30 += 4) 
        {
            for (unsigned int i_31 = 3; i_31 < 11; i_31 += 4) 
            {
                for (unsigned long long int i_32 = 0; i_32 < 12; i_32 += 2) 
                {
                    {
                        var_53 &= ((/* implicit */short) arr_9 [i_20] [i_30] [i_31 - 3]);
                        var_54 = ((/* implicit */_Bool) var_9);
                        var_55 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [i_20] [i_30] [i_31 - 1] [i_32])) ? (arr_40 [i_20] [i_30] [i_30] [i_32]) : (arr_40 [i_20] [i_20] [9] [i_20])))) != (((((/* implicit */long long int) ((/* implicit */int) var_6))) & (arr_61 [i_20] [i_32])))));
                        var_56 = ((/* implicit */unsigned short) ((var_0) > (((/* implicit */int) arr_1 [i_31 - 3]))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_33 = 0; i_33 < 12; i_33 += 2) 
        {
            for (unsigned int i_34 = 0; i_34 < 12; i_34 += 4) 
            {
                for (unsigned int i_35 = 0; i_35 < 12; i_35 += 1) 
                {
                    {
                        var_57 ^= ((/* implicit */int) min((-1994296322820160851LL), (((/* implicit */long long int) var_14))));
                        arr_99 [i_35] [i_33] [i_34] [i_35] = ((/* implicit */unsigned int) 18446744073709551615ULL);
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_36 = 1; i_36 < 1; i_36 += 1) /* same iter space */
    {
        var_58 = ((/* implicit */signed char) min((var_58), (((/* implicit */signed char) (+(((/* implicit */int) var_13)))))));
        var_59 -= ((/* implicit */unsigned short) ((unsigned int) arr_101 [i_36 - 1]));
        var_60 = ((/* implicit */unsigned int) ((unsigned char) arr_101 [i_36 - 1]));
    }
    /* vectorizable */
    for (_Bool i_37 = 1; i_37 < 1; i_37 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_38 = 0; i_38 < 20; i_38 += 2) 
        {
            for (int i_39 = 0; i_39 < 20; i_39 += 1) 
            {
                for (unsigned long long int i_40 = 0; i_40 < 20; i_40 += 3) 
                {
                    {
                        arr_113 [(unsigned short)10] [i_38] &= ((/* implicit */int) 92497006U);
                        var_61 = arr_111 [i_40] [(signed char)15] [i_39] [i_40];
                    }
                } 
            } 
        } 
        var_62 = ((/* implicit */unsigned long long int) max((var_62), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) * (arr_101 [i_37]))))));
        arr_114 [i_37 - 1] = ((/* implicit */int) (~(((((/* implicit */_Bool) var_9)) ? (arr_101 [i_37 - 1]) : (arr_101 [i_37])))));
    }
}
