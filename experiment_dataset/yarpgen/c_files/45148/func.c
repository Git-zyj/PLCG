/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45148
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
    var_12 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10))))) : (min((((/* implicit */unsigned long long int) var_8)), (1525661004521277032ULL)))))));
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) 3459176881U)) ? (((/* implicit */int) ((short) var_1))) : (((/* implicit */int) var_3))));
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */unsigned short) arr_0 [i_0 - 1] [5U]);
        var_14 -= min((((/* implicit */long long int) 65535U)), (min((8548758170754123872LL), (((/* implicit */long long int) 3459176884U)))));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_0 [i_0 - 1] [10LL]), (arr_0 [i_0 - 1] [i_0 - 1])))) ? (((max((arr_1 [(signed char)18]), (((/* implicit */long long int) 835790439U)))) - (max((((/* implicit */long long int) arr_0 [i_0 - 1] [i_0 - 1])), (arr_1 [i_0 - 1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])) <= (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))))))));
        var_16 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)1)))))));
        /* LoopSeq 3 */
        for (int i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            var_17 = ((/* implicit */signed char) ((min((((unsigned long long int) arr_5 [i_1] [i_1 + 3] [(unsigned char)9])), (arr_3 [i_1 + 3] [i_0 + 1] [i_0 - 1]))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3459176884U)) ? ((-(arr_1 [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_0 - 1])) ? (((/* implicit */int) (unsigned char)109)) : (536346624)))))))));
            arr_7 [i_1] = ((/* implicit */unsigned char) ((int) min((((((/* implicit */int) (_Bool)1)) << (((arr_3 [i_1] [i_1] [i_0]) - (5541163962653094253ULL))))), (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1])))));
            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1288006238)) & (arr_4 [(unsigned short)0] [i_0])))))))));
            arr_8 [i_1] [i_1] [i_0 + 1] = ((((/* implicit */_Bool) (+(arr_1 [i_0 + 1])))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1]))) : (arr_1 [i_0 + 1]));
        }
        /* vectorizable */
        for (unsigned char i_2 = 1; i_2 < 17; i_2 += 2) 
        {
            var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [14] [18] [i_2 + 3])) <= (((/* implicit */int) arr_10 [(signed char)10] [(unsigned char)10] [i_2 + 4]))));
            arr_13 [i_2] [i_2] = ((/* implicit */signed char) (~(arr_12 [i_0 + 1])));
            arr_14 [i_2] [i_2] = ((((/* implicit */_Bool) ((signed char) 1365906377))) ? (arr_12 [i_2 + 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned short)65523)))))));
        }
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            arr_17 [i_0 + 1] [i_3] = min((2164663517184ULL), (((/* implicit */unsigned long long int) ((arr_1 [i_3]) == (arr_1 [i_0 - 1])))));
            var_20 = ((/* implicit */unsigned int) arr_4 [i_3] [i_3]);
        }
    }
    for (int i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
    {
        var_21 = (i_4 % 2 == 0) ? (((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_4])) << (((((/* implicit */int) arr_10 [i_4] [i_4] [i_4])) - (17249)))))) ? (((/* implicit */unsigned long long int) arr_6 [i_4] [i_4] [i_4])) : (arr_15 [i_4]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_10 [i_4] [(unsigned char)18] [i_4])), (18446741909046034446ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)12))))) : ((+(((/* implicit */int) arr_0 [i_4] [i_4])))))))))) : (((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_4])) << (((((((/* implicit */int) arr_10 [i_4] [i_4] [i_4])) - (17249))) - (6054)))))) ? (((/* implicit */unsigned long long int) arr_6 [i_4] [i_4] [i_4])) : (arr_15 [i_4]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_10 [i_4] [(unsigned char)18] [i_4])), (18446741909046034446ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)12))))) : ((+(((/* implicit */int) arr_0 [i_4] [i_4]))))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((3459176881U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (signed char)-53)), (arr_9 [i_4] [i_4])))))))) ? (((/* implicit */unsigned long long int) min((arr_1 [i_5]), (((/* implicit */long long int) arr_21 [i_4]))))) : (18446744073709551603ULL)));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_6 = 2; i_6 < 12; i_6 += 3) 
            {
                var_23 = ((/* implicit */int) (signed char)16);
                /* LoopSeq 1 */
                for (signed char i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    arr_29 [i_4] [i_7] = ((/* implicit */unsigned short) var_7);
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) arr_21 [i_4]))));
                }
                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_5] [(unsigned short)16] [i_5])) ? (((/* implicit */int) arr_10 [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_10 [i_5] [i_4] [i_5])))))));
                var_26 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_5] [i_5])) ? (arr_23 [i_4] [i_6 - 2]) : (arr_23 [i_4] [i_5])));
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 2; i_8 < 10; i_8 += 4) 
                {
                    var_27 = ((((/* implicit */_Bool) arr_10 [i_4] [i_8] [i_4])) ? (((/* implicit */int) arr_10 [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_10 [i_4] [i_8 - 1] [i_4])));
                    arr_32 [i_4] [i_6] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_4] [i_8 + 2])) ? (arr_4 [i_4] [i_8 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_6 - 2] [i_4])))));
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 13; i_9 += 3) /* same iter space */
    {
        arr_35 [i_9] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((unsigned short) arr_34 [(short)4] [i_9]))) ? (arr_33 [i_9]) : (arr_31 [i_9] [9] [i_9] [i_9])))));
        arr_36 [i_9] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) arr_10 [i_9] [i_9] [i_9])))))), (((arr_23 [i_9] [i_9]) / (arr_23 [i_9] [i_9])))));
        /* LoopSeq 1 */
        for (long long int i_10 = 3; i_10 < 11; i_10 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_11 = 2; i_11 < 12; i_11 += 4) 
            {
                var_28 = ((/* implicit */unsigned char) -1);
                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((3459176892U), (2899321030U)))) ? (1395646279U) : (((/* implicit */unsigned int) arr_30 [i_9] [i_9] [i_9] [i_9]))));
            }
            for (int i_12 = 2; i_12 < 11; i_12 += 3) 
            {
                var_30 = ((/* implicit */unsigned char) (+((+(((((/* implicit */_Bool) arr_28 [(short)9] [i_9] [i_10] [i_10] [i_9] [(short)9])) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) var_6))))))));
                /* LoopNest 2 */
                for (long long int i_13 = 1; i_13 < 10; i_13 += 4) 
                {
                    for (unsigned int i_14 = 1; i_14 < 11; i_14 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */long long int) max((var_31), ((+(min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)-17))))))));
                            var_32 ^= ((/* implicit */int) ((signed char) max((arr_37 [i_12 + 1] [i_13 + 1] [i_14 - 1]), (arr_37 [i_12 + 1] [i_13 + 1] [i_14 - 1]))));
                        }
                    } 
                } 
                arr_51 [i_9] = ((/* implicit */int) (+(min((((/* implicit */long long int) arr_43 [i_12] [i_12 - 1] [i_12 + 2])), (((-7289882834114778094LL) / (((/* implicit */long long int) 2492439278U))))))));
                var_33 = ((/* implicit */unsigned long long int) arr_10 [i_9] [i_10] [i_10 + 1]);
                arr_52 [i_9] = ((/* implicit */unsigned char) max((2899321005U), (((/* implicit */unsigned int) (short)-31448))));
            }
            for (unsigned int i_15 = 1; i_15 < 11; i_15 += 1) 
            {
                var_34 -= ((/* implicit */unsigned long long int) ((1395646297U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-17)))));
                var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) ((int) min((arr_12 [i_9]), (arr_12 [i_9])))))));
                /* LoopSeq 1 */
                for (unsigned int i_16 = 0; i_16 < 13; i_16 += 3) 
                {
                    var_36 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_21 [i_15 + 1])) ? (((/* implicit */unsigned int) arr_16 [i_15])) : (1395646287U))) <= (((/* implicit */unsigned int) ((int) arr_48 [i_9] [i_9] [i_10 - 1] [i_10] [i_15 + 2] [i_16]))))) ? (1395646317U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                    arr_60 [i_9] [i_10 - 1] [i_15] [(signed char)11] = ((/* implicit */long long int) max((arr_15 [i_9]), (((/* implicit */unsigned long long int) (~(arr_50 [i_15 + 1]))))));
                    var_37 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_11 [i_10 + 1] [i_15 + 2])))) ? ((~(((unsigned long long int) arr_46 [i_9] [i_10] [i_15 + 1] [i_16] [i_9] [i_9])))) : (((((/* implicit */_Bool) arr_34 [i_10 - 3] [i_9])) ? (((((/* implicit */_Bool) 16088810656507458526ULL)) ? (arr_49 [i_9] [i_15 - 1] [i_10 - 2] [i_9]) : (arr_15 [i_9]))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-2)) + (2147483647))) << (((var_4) - (4874185663179542867LL))))))))));
                    var_38 = (~(((((/* implicit */long long int) ((unsigned int) arr_11 [i_9] [i_10 - 2]))) & (-7367054620772657446LL))));
                    var_39 = min((min((arr_26 [i_10 - 2] [i_10] [i_10] [i_15 - 1]), (arr_26 [i_10 + 2] [(signed char)4] [i_15 + 2] [i_15 + 1]))), ((+(arr_26 [i_10 - 3] [i_10 - 3] [i_10 - 2] [i_15 + 2]))));
                }
            }
            var_40 = max((((/* implicit */long long int) max((arr_30 [i_10 + 2] [i_10 - 3] [i_10 - 2] [i_10 + 2]), (((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_9] [i_10 - 1] [i_10])) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))))), (min((arr_6 [i_9] [i_9] [i_9]), (((/* implicit */long long int) arr_27 [i_10 - 1] [i_9])))));
            arr_61 [i_9] [0LL] [i_9] &= ((/* implicit */int) min((((((/* implicit */_Bool) arr_39 [i_9] [10] [i_10 + 1])) ? (arr_39 [i_9] [(unsigned short)6] [i_10 + 2]) : (arr_39 [i_10] [(signed char)0] [i_10 - 2]))), (((/* implicit */long long int) ((signed char) arr_4 [14LL] [14LL])))));
            var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) (unsigned char)3))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_9] [i_10 - 3] [i_10 - 3]))) == (((((/* implicit */_Bool) 18446744073709551604ULL)) ? (arr_11 [i_9] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252))))))))));
        }
        arr_62 [i_9] = ((/* implicit */_Bool) (-(((/* implicit */int) var_8))));
    }
    for (int i_17 = 0; i_17 < 13; i_17 += 3) /* same iter space */
    {
        arr_65 [i_17] [i_17] = min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127))) * (12168147382238371806ULL))), (((unsigned long long int) 2899320966U)));
        var_42 = ((/* implicit */signed char) min((((/* implicit */int) (unsigned char)145)), (585324673)));
        var_43 ^= ((/* implicit */long long int) arr_11 [i_17] [i_17]);
        arr_66 [i_17] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [(signed char)6] [i_17])) || (((/* implicit */_Bool) arr_24 [0LL])))))) <= (((unsigned int) (!(((/* implicit */_Bool) arr_41 [i_17] [i_17] [i_17])))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_18 = 1; i_18 < 24; i_18 += 3) 
    {
        var_44 = ((/* implicit */long long int) ((((/* implicit */int) (short)2046)) == (((((/* implicit */_Bool) 2899320987U)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (signed char)24))))));
        var_45 -= ((/* implicit */signed char) arr_67 [i_18] [i_18 - 1]);
        arr_70 [i_18 + 1] [i_18 - 1] = ((/* implicit */_Bool) arr_69 [i_18]);
    }
    /* vectorizable */
    for (signed char i_19 = 0; i_19 < 25; i_19 += 3) 
    {
        arr_74 [i_19] [i_19] = ((/* implicit */unsigned long long int) ((65535) & (arr_72 [i_19] [i_19])));
        /* LoopSeq 1 */
        for (unsigned char i_20 = 0; i_20 < 25; i_20 += 2) 
        {
            var_46 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_72 [i_19] [i_19])) ? (((/* implicit */int) arr_68 [i_20])) : (arr_72 [i_19] [i_20])));
            var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_71 [i_19] [i_19])) ? (((/* implicit */int) arr_71 [i_19] [i_19])) : (arr_75 [i_19])));
            var_48 = ((/* implicit */_Bool) 18446744073709551615ULL);
        }
        arr_77 [i_19] [i_19] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_71 [i_19] [i_19]))));
        arr_78 [i_19] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_68 [i_19])) ? (arr_72 [i_19] [8]) : (((/* implicit */int) (signed char)42))))) ? ((+(-1447183758))) : (((/* implicit */int) var_6)));
        var_49 = ((/* implicit */unsigned char) max((var_49), (((/* implicit */unsigned char) ((signed char) ((arr_76 [i_19]) & (((/* implicit */long long int) arr_75 [i_19]))))))));
    }
    for (unsigned char i_21 = 0; i_21 < 22; i_21 += 1) 
    {
        arr_81 [i_21] = ((/* implicit */unsigned short) arr_72 [i_21] [i_21]);
        arr_82 [i_21] = ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) min((((/* implicit */unsigned int) arr_71 [i_21] [i_21])), (1395646307U)))))));
        arr_83 [i_21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((long long int) (unsigned char)170)), (9007182074871808LL)))) || (((/* implicit */_Bool) (unsigned char)158))));
    }
}
