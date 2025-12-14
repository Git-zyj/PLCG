/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235607
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned char) (((((~(((/* implicit */int) arr_3 [i_3])))) + (2147483647))) << (((arr_10 [i_3 - 1] [i_1]) - (345331986U)))));
                                var_11 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)186))));
                                arr_16 [i_1] [i_1] [i_2 + 1] [i_0] = ((((/* implicit */int) arr_13 [i_3 - 1] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) == (((/* implicit */int) arr_13 [i_3 + 1] [i_3] [i_4] [i_4] [i_4] [i_4] [4LL])));
                                var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((long long int) (unsigned char)68)))));
                            }
                        } 
                    } 
                    var_13 ^= ((/* implicit */short) (~(1698844657)));
                }
            } 
        } 
        arr_17 [i_0] = ((/* implicit */long long int) (unsigned char)188);
    }
    for (int i_5 = 3; i_5 < 14; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned char i_7 = 1; i_7 < 11; i_7 += 2) 
            {
                arr_24 [i_5 - 1] [i_6] [i_7] [(unsigned char)4] &= -9170839421364709063LL;
                var_14 = ((/* implicit */long long int) ((((((((/* implicit */int) arr_18 [i_5] [i_7])) | (((/* implicit */int) (unsigned char)238)))) & (((/* implicit */int) (unsigned char)68)))) | (var_3)));
                /* LoopSeq 3 */
                for (short i_8 = 0; i_8 < 15; i_8 += 2) 
                {
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)188)), (arr_27 [i_5 - 1] [i_5 - 1] [i_5 - 3] [i_5 + 1])))) ? ((-(((((/* implicit */_Bool) (unsigned char)81)) ? (0ULL) : (((/* implicit */unsigned long long int) -9170839421364709063LL)))))) : (((/* implicit */unsigned long long int) (~((((_Bool)0) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) (unsigned short)51183)))))))))));
                    arr_29 [i_5 - 1] [i_6] [i_6] [i_7 + 2] [i_7 + 2] [i_8] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((arr_23 [i_7 + 1]), (arr_23 [i_5 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((9153465214916742825LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)165))))))) : (min((((/* implicit */unsigned long long int) arr_25 [i_5] [i_6] [i_6] [i_6] [i_6] [i_8])), (4611686018427387900ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_5 - 2] [i_5 + 1] [i_5 + 1] [i_5 - 2] [i_6] [i_5 - 2])) ? (((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */int) arr_18 [i_5] [i_5])) : (((/* implicit */int) (unsigned char)187)))) : (((/* implicit */int) (unsigned short)51183)))))));
                    /* LoopSeq 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_32 [i_9] [i_8] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-24709)) ? (((((/* implicit */int) (_Bool)1)) >> (((18446744073709551615ULL) - (18446744073709551613ULL))))) : (min((arr_19 [i_5 + 1]), (((/* implicit */int) (_Bool)1))))))), (4611686018427387900ULL));
                        var_16 = ((/* implicit */unsigned char) arr_30 [i_5] [i_5] [i_7 - 1] [i_8] [i_9]);
                        var_17 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) var_7)) < (((/* implicit */int) (_Bool)0)))) ? (((((/* implicit */int) (unsigned char)247)) | (((/* implicit */int) (unsigned short)1768)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)-13238)))))));
                    }
                    /* vectorizable */
                    for (long long int i_10 = 2; i_10 < 12; i_10 += 2) 
                    {
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (~(arr_28 [i_5 - 2] [i_7 + 4] [i_10 + 2]))))));
                        arr_35 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_8] = ((/* implicit */_Bool) ((int) arr_30 [i_10] [i_8] [i_7] [(signed char)12] [i_10]));
                        arr_36 [i_6] [i_7 + 1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_19 [i_5])) ? (var_3) : (((/* implicit */int) (short)0)))) > (((/* implicit */int) ((_Bool) var_9)))));
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) & (((/* implicit */int) arr_33 [i_5 + 1] [i_7 + 3] [i_10 + 1] [i_7 - 1] [i_10 + 1]))));
                    }
                }
                for (long long int i_11 = 1; i_11 < 14; i_11 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 0; i_12 < 15; i_12 += 2) 
                    {
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(9896062633414674566ULL)))) ? (3524390283332371195LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                        var_21 = ((/* implicit */long long int) ((min((4611686018427387900ULL), (((/* implicit */unsigned long long int) 7090376949489736321LL)))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_31 [i_11] [i_11 + 1] [i_11 - 1] [i_11 - 1] [i_12])) & (((/* implicit */int) (short)-25316)))))));
                    }
                    var_22 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_18 [7] [i_5 - 1])) <= (1879048192))))) != (((((/* implicit */_Bool) arr_20 [i_11 - 1])) ? (arr_38 [i_7 - 1] [i_7 - 1] [i_11 - 1] [i_11 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_11 - 1])))))));
                    arr_41 [i_5] [i_5] [i_7 + 3] [i_11 - 1] = ((/* implicit */_Bool) 2047ULL);
                }
                for (long long int i_13 = 1; i_13 < 14; i_13 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_14 = 3; i_14 < 12; i_14 += 2) 
                    {
                        var_23 = ((/* implicit */_Bool) ((long long int) min((((/* implicit */unsigned char) ((signed char) 12465462339515979238ULL))), (arr_18 [i_5] [13LL]))));
                        arr_47 [i_5] [i_13] [i_7 + 1] [6LL] [i_7 + 1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (unsigned short)0)), (((((/* implicit */_Bool) arr_46 [i_5] [i_5] [i_7 + 4] [i_5] [i_14 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_14 - 1]))) : (max((((/* implicit */unsigned long long int) arr_30 [i_5] [i_6] [i_6] [i_5] [i_13])), (9896062633414674566ULL)))))));
                    }
                    arr_48 [i_6] [i_6] [10] [(_Bool)1] [10] [(_Bool)1] |= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_26 [i_5 + 1] [i_6] [i_7 + 2] [i_13 + 1])) ? (((/* implicit */int) arr_26 [i_13 + 1] [i_13 - 1] [i_13 - 1] [i_13 - 1])) : (((/* implicit */int) (short)28194)))));
                }
            }
            for (unsigned short i_15 = 2; i_15 < 14; i_15 += 2) 
            {
                var_24 = ((/* implicit */long long int) (~(((/* implicit */int) ((short) arr_37 [i_5 + 1] [i_5 - 2] [i_15 + 1])))));
                arr_53 [i_15] [i_6] [i_15] [i_15] = max((((/* implicit */long long int) (-(((/* implicit */int) arr_39 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))))), (((((/* implicit */_Bool) 424922522U)) ? (4232669959149831465LL) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_5] [(_Bool)1] [i_5] [(_Bool)1] [(_Bool)1] [i_5]))))));
                var_25 |= ((/* implicit */unsigned char) max((((/* implicit */int) arr_40 [i_15 - 2] [i_6] [i_5])), (((((/* implicit */int) arr_18 [i_5 - 3] [i_15 - 2])) << (((((/* implicit */int) arr_18 [i_6] [i_5 - 2])) - (30)))))));
            }
            for (unsigned char i_16 = 0; i_16 < 15; i_16 += 2) 
            {
                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (unsigned short)0))));
                /* LoopNest 2 */
                for (unsigned char i_17 = 1; i_17 < 12; i_17 += 2) 
                {
                    for (long long int i_18 = 0; i_18 < 15; i_18 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */int) arr_43 [i_5] [i_5] [i_16] [i_16] [i_5])) : (((/* implicit */int) (unsigned char)56)))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_38 [i_5 - 3] [i_6] [i_16] [i_18])) || (((/* implicit */_Bool) arr_38 [i_5 - 1] [i_6] [i_17 + 3] [i_18])))))));
                            arr_61 [i_17] [i_17] = ((/* implicit */unsigned char) (~(-4602668043386032942LL)));
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)0)) * (((/* implicit */int) (_Bool)0))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_49 [i_5] [i_5] [i_5]))) - (((((/* implicit */_Bool) 32767LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (0LL))))))));
            }
            for (unsigned long long int i_19 = 2; i_19 < 11; i_19 += 2) 
            {
                arr_64 [i_5] [i_5] [i_5] [i_19 - 1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_56 [i_5 - 2] [i_5 + 1] [i_5 - 3] [i_5 - 2])) ? (((/* implicit */int) arr_39 [i_5 - 2] [i_5 + 1] [i_5 - 3] [i_5 - 2] [i_19 + 2] [i_19 + 4])) : (((/* implicit */int) (unsigned char)205)))) >> (((((/* implicit */_Bool) arr_52 [i_5 - 2] [i_5 + 1] [i_5 - 3])) ? (((/* implicit */int) (signed char)30)) : (((/* implicit */int) arr_39 [i_5 - 2] [i_5 + 1] [i_5 - 3] [i_5 - 2] [i_19 + 2] [i_19 + 4]))))));
                arr_65 [i_5] [i_5] [i_19 - 1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((-19185448903597685LL) + (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_5] [i_6] [i_19 - 2] [i_5 - 2] [i_19 + 3]))))) > (((/* implicit */long long int) 536870911U)))))));
                arr_66 [i_5] [i_5 + 1] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)188)) << (((((((/* implicit */_Bool) (short)6)) ? (arr_62 [i_5 - 2] [i_6]) : (((/* implicit */long long int) 0U)))) - (7301216222437111708LL)))));
                var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_60 [i_5 - 3]), (((/* implicit */unsigned char) var_4))))) * (((((/* implicit */int) arr_51 [i_5] [i_19 + 1] [i_5 - 2])) * (((/* implicit */int) arr_51 [i_5] [i_19 + 1] [i_19 + 1]))))));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_20 = 0; i_20 < 15; i_20 += 1) 
            {
                var_31 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_28 [i_5 + 1] [(_Bool)1] [i_6])) ? (((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50791))) : (arr_22 [i_5] [i_6] [i_6]))) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_5 + 1] [i_5] [i_5 - 1] [i_5] [i_5 + 1])))))));
                arr_70 [i_5] [i_6] [i_6] [i_20] = ((((((((/* implicit */int) arr_39 [i_5] [i_6] [i_20] [i_6] [i_6] [i_6])) << (((var_6) - (1550388571))))) & (((/* implicit */int) (short)-17382)))) << (((-2815398293464284998LL) + (2815398293464285016LL))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_22 = 1; i_22 < 14; i_22 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned char) ((1201830803U) << (((((((/* implicit */_Bool) (short)28995)) ? (((/* implicit */int) (unsigned char)115)) : (((/* implicit */int) arr_31 [i_6] [i_6] [i_20] [i_21] [(_Bool)1])))) - (111)))));
                        var_33 = ((/* implicit */long long int) (unsigned char)150);
                    }
                    for (short i_23 = 0; i_23 < 15; i_23 += 2) 
                    {
                        var_34 = ((/* implicit */long long int) arr_40 [i_5 - 2] [i_6] [i_20]);
                        arr_80 [i_5 - 2] [i_6] [i_6] [i_21] [(unsigned short)12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)59180)) : (((/* implicit */int) (unsigned char)247))));
                    }
                    for (int i_24 = 0; i_24 < 15; i_24 += 2) 
                    {
                        var_35 = ((/* implicit */signed char) var_5);
                        var_36 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)88))));
                    }
                    arr_84 [i_5] [i_5] = ((long long int) ((((/* implicit */int) (unsigned char)87)) & (1760907132)));
                }
                var_37 = ((/* implicit */unsigned long long int) var_1);
                var_38 &= ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_25 [i_5 - 2] [i_5 + 1] [i_5 - 2] [i_5 + 1] [i_5 - 2] [i_5 + 1])) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)67))))) : (min((-3606495140048056007LL), (((/* implicit */long long int) (short)-10629)))))));
            }
        }
        /* LoopNest 2 */
        for (short i_25 = 0; i_25 < 15; i_25 += 2) 
        {
            for (short i_26 = 0; i_26 < 15; i_26 += 2) 
            {
                {
                    arr_89 [i_5] &= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -6239368539409063854LL)), (((unsigned long long int) (signed char)30))));
                    var_39 = ((/* implicit */signed char) ((((/* implicit */long long int) (~(134217728)))) ^ (var_1)));
                }
            } 
        } 
        var_40 = ((/* implicit */unsigned short) 14874284874265045098ULL);
    }
    for (signed char i_27 = 2; i_27 < 18; i_27 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_28 = 0; i_28 < 19; i_28 += 3) 
        {
            for (short i_29 = 0; i_29 < 19; i_29 += 3) 
            {
                {
                    var_41 = ((/* implicit */short) (unsigned short)65535);
                    var_42 |= ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) ((long long int) (unsigned char)227))), (min((arr_96 [i_27]), (((/* implicit */unsigned long long int) var_2)))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_91 [i_27 - 2] [i_27 + 1])), (arr_92 [i_27 - 2]))))));
                    arr_98 [i_29] [i_29] [i_29] = ((/* implicit */short) ((((((/* implicit */_Bool) ((long long int) arr_95 [i_27] [i_27] [i_27]))) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) (_Bool)1)))) / (((((/* implicit */int) (short)17642)) << (((3516906042U) - (3516906026U)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_30 = 3; i_30 < 17; i_30 += 1) 
                    {
                        for (unsigned long long int i_31 = 3; i_31 < 16; i_31 += 2) 
                        {
                            {
                                var_43 = ((/* implicit */long long int) ((0U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                                arr_103 [i_27] [i_28] [i_29] [i_30] [i_27] &= ((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_95 [i_30] [i_30 - 2] [i_30]))) / (var_2))), (((/* implicit */unsigned int) arr_95 [(unsigned char)15] [i_30 - 1] [i_30 - 1]))));
                            }
                        } 
                    } 
                    var_44 &= ((/* implicit */int) ((((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) var_2))))) ? (((((/* implicit */_Bool) arr_93 [i_27] [i_28])) ? (((/* implicit */long long int) arr_102 [i_29] [i_29] [0LL] [i_29] [i_28])) : (5907982985721159741LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) arr_101 [i_27 - 1] [i_27 + 1] [i_27 - 2] [i_27 + 1])))))));
                }
            } 
        } 
        var_45 = (-(((5907982985721159741LL) / (-798459153887222125LL))));
    }
    var_46 = ((/* implicit */unsigned long long int) max((var_6), (max((((/* implicit */int) var_7)), ((-(((/* implicit */int) (unsigned char)237))))))));
    var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((min((((/* implicit */long long int) var_7)), (var_1))) + (9223372036854775807LL))) << (((/* implicit */int) var_8))))) ? (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)0))))) : (((/* implicit */int) (unsigned short)56152))));
}
