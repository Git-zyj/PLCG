/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198507
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)51)) << ((((~(((/* implicit */int) ((-4943782636734199376LL) != (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) + (10)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) arr_0 [i_0]))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) /* same iter space */
            {
                var_16 &= ((/* implicit */short) arr_4 [i_1] [i_2]);
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1] [i_0])) - (((((/* implicit */int) var_7)) - (((/* implicit */int) (short)1976))))));
            }
            for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) /* same iter space */
            {
                arr_9 [i_0] [(unsigned char)13] [i_3] = ((/* implicit */int) ((arr_4 [i_3] [i_1]) << (((/* implicit */int) var_13))));
                var_18 = ((/* implicit */int) var_0);
                /* LoopSeq 3 */
                for (unsigned char i_4 = 2; i_4 < 17; i_4 += 3) 
                {
                    arr_12 [i_4] [i_1] [i_1] [i_4 - 2] = ((/* implicit */int) arr_4 [i_1] [i_0]);
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 4; i_5 < 15; i_5 += 2) 
                    {
                        arr_16 [i_0] [i_1] [i_3] [i_4] [(short)8] = ((/* implicit */unsigned short) 1211310731U);
                        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_13 [i_5] [i_4] [i_5 + 3] [i_4] [i_4]))));
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_5 + 1])) ? (arr_11 [i_0] [i_4] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5 + 2])))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        arr_20 [12LL] [i_1] [i_3] [i_1] [i_4] [i_3] [i_0] = ((_Bool) arr_18 [(_Bool)0] [9LL]);
                        arr_21 [i_4] [i_6] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)92)) ? (((/* implicit */int) arr_5 [i_1] [i_1] [i_4 + 1] [i_4 - 1])) : (29360128)))) ? (((/* implicit */int) arr_14 [i_4 - 2] [i_4 - 1] [8U] [i_4 + 1] [i_4 - 2])) : (((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) >> (((arr_15 [i_0] [i_1] [i_3] [i_4] [i_1]) - (277467311U))))));
                        arr_22 [i_4] [i_4] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4 - 2]))) == (arr_8 [i_4 + 1] [i_4 - 1] [i_4 - 2])));
                    }
                    var_21 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((/* implicit */int) arr_5 [i_4] [i_4 - 1] [i_4] [i_4])) : ((-(((/* implicit */int) var_13))))));
                }
                for (unsigned short i_7 = 3; i_7 < 16; i_7 += 4) 
                {
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)164))) : (arr_3 [i_0])))) ? (((/* implicit */int) (unsigned char)78)) : (((((/* implicit */_Bool) -29360131)) ? (((/* implicit */int) arr_2 [i_1] [i_7 + 1])) : (((/* implicit */int) var_8))))));
                    var_23 = ((/* implicit */unsigned char) ((signed char) 9209211279966432984LL));
                }
                for (signed char i_8 = 0; i_8 < 18; i_8 += 2) 
                {
                    arr_28 [i_0] [i_3] [i_0] [4] [i_1] = ((/* implicit */unsigned long long int) arr_25 [(signed char)4] [i_1] [i_3] [i_3] [i_8]);
                    arr_29 [i_0] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0]))))) != (arr_1 [i_0])));
                    arr_30 [(signed char)3] [i_3] [i_0] [(unsigned char)1] [i_1] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)75))));
                }
                arr_31 [i_0] [7LL] [i_1] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)168);
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_10 = 0; i_10 < 18; i_10 += 2) 
                {
                    arr_38 [i_10] [i_10] [i_1] [i_10] |= ((/* implicit */long long int) ((arr_25 [i_10] [i_1] [i_1] [i_10] [i_9]) == (((/* implicit */int) arr_14 [i_0] [i_9] [i_1] [i_0] [i_0]))));
                    arr_39 [i_0] [i_9] [i_9] = ((/* implicit */unsigned short) var_4);
                }
                var_24 |= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_9])))) ? (18302628885633695744ULL) : (((/* implicit */unsigned long long int) arr_24 [i_0] [i_1]))));
                var_25 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) arr_26 [i_0] [i_1] [i_1] [i_9] [i_1])) : (var_5)));
                arr_40 [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9209211279966432969LL)) ? (-9209211279966432969LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)3)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)96))) : (arr_37 [i_9]));
                /* LoopSeq 2 */
                for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (signed char i_12 = 0; i_12 < 18; i_12 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned char) (~(var_10)));
                        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) 946003582U))));
                    }
                    for (signed char i_13 = 0; i_13 < 18; i_13 += 2) 
                    {
                        arr_51 [i_9] [i_11] [i_9] [i_1] [i_9] = ((/* implicit */unsigned short) 140462610448384LL);
                        var_28 *= ((/* implicit */unsigned char) ((arr_15 [i_0] [i_1] [i_0] [i_11] [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37086)))));
                        var_29 = ((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) 9209211279966432969LL)))));
                        arr_52 [i_0] [i_0] [i_0] [i_0] [i_0] [i_9] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_48 [i_1])) && (((/* implicit */_Bool) ((unsigned short) var_3)))));
                        arr_53 [i_0] [i_13] [i_13] [i_13] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */int) (unsigned char)87)) : (((/* implicit */int) (signed char)-126))))) != (var_5)));
                    }
                    for (signed char i_14 = 2; i_14 < 17; i_14 += 2) 
                    {
                        arr_57 [i_0] [i_1] [i_9] [i_11] [i_14] = arr_45 [i_0] [i_0] [i_0] [5U] [i_0] [(_Bool)1] [i_0];
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_37 [i_9])) ? (arr_37 [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-10)))));
                    }
                    arr_58 [i_9] = ((/* implicit */signed char) arr_49 [i_0] [i_0] [i_0] [i_0]);
                }
                for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 1) /* same iter space */
                {
                    var_31 += ((/* implicit */unsigned long long int) (short)-8192);
                    var_32 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_44 [i_0] [i_0] [i_1] [i_0] [i_15])) != (((/* implicit */int) var_4))));
                }
            }
            arr_63 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_55 [i_0] [i_1] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)36757)) : (((/* implicit */int) arr_55 [i_0] [i_1] [i_0] [i_0] [i_0]))));
            var_33 = ((((/* implicit */_Bool) var_0)) ? (((var_11) >> (((var_11) - (1001280280))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_34 [i_0] [i_0] [i_1])) : (((/* implicit */int) (signed char)14)))));
            arr_64 [i_0] [i_1] = ((/* implicit */unsigned char) ((((arr_49 [i_0] [i_0] [i_1] [i_1]) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */int) arr_48 [i_0])) == (((/* implicit */int) var_7)))))));
            arr_65 [i_0] = ((/* implicit */signed char) var_6);
        }
        /* LoopSeq 1 */
        for (unsigned short i_16 = 2; i_16 < 16; i_16 += 1) 
        {
            arr_68 [i_0] = ((/* implicit */unsigned char) ((_Bool) var_6));
            var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) (unsigned char)180)) != (var_11)))))));
            arr_69 [i_0] [i_16 + 2] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) -587687666)) : (946003582U)))) ? (((/* implicit */unsigned long long int) ((long long int) -9209211279966432969LL))) : (256467890037045562ULL));
        }
    }
    for (unsigned short i_17 = 2; i_17 < 13; i_17 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_18 = 0; i_18 < 14; i_18 += 3) 
        {
            arr_75 [i_18] [i_18] [i_18] = ((/* implicit */unsigned char) min(((-(var_5))), (((/* implicit */long long int) ((short) var_3)))));
            arr_76 [i_18] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_1))))) != (min((arr_66 [i_18] [i_17 - 1]), (((/* implicit */int) arr_70 [i_18]))))))) != (((/* implicit */int) ((((/* implicit */_Bool) 4194296)) && ((!(((/* implicit */_Bool) arr_44 [i_18] [i_18] [i_17] [i_17 + 1] [i_17])))))))));
        }
        arr_77 [i_17] [(unsigned char)5] = ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)164)) >> (((min((2731876172078866935LL), (((/* implicit */long long int) (unsigned char)72)))) - (68LL)))))) == (((unsigned long long int) (short)32512)));
        var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) (((!((!(((/* implicit */_Bool) (unsigned char)164)))))) ? (((/* implicit */int) (short)32)) : (((/* implicit */int) arr_74 [i_17 + 1])))))));
        var_36 += ((/* implicit */long long int) var_9);
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_19 = 0; i_19 < 14; i_19 += 2) 
        {
            /* LoopSeq 3 */
            for (short i_20 = 3; i_20 < 13; i_20 += 3) 
            {
                arr_84 [i_17] [i_17] [i_20] = ((/* implicit */int) -3152539908563924999LL);
                arr_85 [i_20] [0U] [i_17 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_62 [i_19]) / (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_71 [i_17] [i_20 - 1]))) : (274877906944ULL)));
                arr_86 [i_17] [i_17 - 1] [i_17] [i_17] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_6 [i_17] [i_19] [i_20])) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_20] [i_20] [i_17 + 1] [i_17 + 1] [i_19] [i_17 + 1]))) : (var_5))) != (((/* implicit */long long int) 2147483648U))));
            }
            for (unsigned char i_21 = 0; i_21 < 14; i_21 += 4) 
            {
                var_37 = ((/* implicit */short) (~(-3152539908563924999LL)));
                var_38 = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) var_6)))));
            }
            for (signed char i_22 = 2; i_22 < 11; i_22 += 3) 
            {
                arr_91 [i_17] &= ((((((/* implicit */long long int) ((/* implicit */int) var_0))) == (var_3))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-78))) : (((((-9209211279966433007LL) + (9223372036854775807LL))) << (((((/* implicit */int) var_4)) - (190))))));
                /* LoopSeq 1 */
                for (short i_23 = 0; i_23 < 14; i_23 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_24 = 0; i_24 < 14; i_24 += 3) 
                    {
                        arr_97 [i_24] [i_23] [11ULL] [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (signed char)-63))) ? ((~(arr_37 [i_19]))) : (((/* implicit */unsigned long long int) arr_15 [i_22 - 2] [9U] [i_22 - 2] [i_22 - 2] [i_19]))));
                        arr_98 [i_17 + 1] [i_19] [i_19] [i_19] [i_24] [i_17 + 1] [i_17] = ((((/* implicit */_Bool) arr_47 [i_17] [i_17 + 1] [(signed char)15] [i_22 + 3] [(signed char)15] [i_23] [i_24])) && (((/* implicit */_Bool) 3348963711U)));
                        var_39 = ((/* implicit */unsigned short) arr_10 [i_17 - 1]);
                    }
                    arr_99 [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_23 [i_22] [i_22] [i_22 - 2] [15U]))));
                }
                var_40 = ((/* implicit */unsigned short) arr_43 [i_22 + 1] [i_22 + 1] [i_22 + 1] [i_17 - 1]);
            }
            var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) arr_81 [i_19] [i_19]))));
        }
    }
    var_42 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147482624)) ? (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) var_8)), (var_3))), (((/* implicit */long long int) var_0))))) : (((var_10) << (((((/* implicit */int) var_12)) - (103))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_25 = 1; i_25 < 20; i_25 += 2) 
    {
        var_43 &= (short)126;
        arr_103 [i_25] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-53))));
    }
}
