/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236809
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [21U] [i_0] = min((var_3), (min((((1125899906842623LL) >> (((7096467561038293920LL) - (7096467561038293873LL))))), (arr_2 [i_0] [i_0]))));
        arr_4 [i_0] = var_7;
        arr_5 [i_0] = ((/* implicit */short) (~(((long long int) min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (13382484524493883459ULL))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) 1048544U);
        arr_9 [i_1] = ((/* implicit */long long int) arr_6 [i_1] [i_1]);
    }
    for (long long int i_2 = 3; i_2 < 21; i_2 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) min((((/* implicit */short) (_Bool)1)), ((short)32764)));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            arr_17 [i_2 - 1] [i_2] = ((/* implicit */_Bool) var_9);
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_0 [i_2 - 1] [i_3])))) ? (max((((/* implicit */unsigned long long int) -20LL)), (20ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) + (var_8))))))))));
            /* LoopSeq 2 */
            for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                var_21 = ((/* implicit */long long int) arr_8 [i_2]);
                var_22 = 4294967277U;
            }
            for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
            {
                var_23 = ((/* implicit */unsigned int) (_Bool)1);
                /* LoopNest 2 */
                for (long long int i_6 = 2; i_6 < 21; i_6 += 4) 
                {
                    for (short i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        {
                            var_24 -= ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_19 [i_2] [i_3] [i_3]))))));
                            arr_28 [i_2] [i_2] [i_2] [i_2] [i_7] = ((/* implicit */unsigned int) ((var_0) > (((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (4125895662U))))));
                            var_25 = ((/* implicit */long long int) (_Bool)1);
                        }
                    } 
                } 
            }
            arr_29 [i_2] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((100017480U) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (arr_2 [i_2 - 1] [(short)21])))))))), (min((min((8036156634853702076LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 570133263504755721LL)) ? (3641872836U) : (4116291460U))))))));
            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5379939355834900962LL)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 - 2] [i_2 - 2])))))) || (((/* implicit */_Bool) ((long long int) arr_6 [i_2 - 1] [i_2 - 3])))));
        }
        arr_30 [i_2] = ((/* implicit */unsigned int) var_16);
        arr_31 [i_2] [i_2] = var_15;
        /* LoopSeq 4 */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned int) min((var_27), (((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_19 [(_Bool)1] [4ULL] [(_Bool)1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_12 [4U] [i_8])))), (((/* implicit */int) (short)-18911))))) ? (min((((/* implicit */unsigned int) arr_22 [i_2 - 3] [i_8 - 1])), (min((((/* implicit */unsigned int) arr_19 [i_2] [i_2 - 3] [(short)2])), (arr_25 [i_2 - 3] [i_8] [i_8] [i_8 - 1] [i_8] [i_8] [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_2] [i_2 - 3] [i_2 - 2]))) : (var_15))))))))))));
            arr_34 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 428618275U)) ? (((/* implicit */unsigned long long int) arr_25 [(short)6] [(short)20] [i_2] [i_2 - 2] [i_2 + 1] [i_8] [i_8 - 1])) : (max((((((/* implicit */unsigned long long int) 5379939355834900962LL)) / (18446744073709551615ULL))), (((/* implicit */unsigned long long int) var_15))))));
            arr_35 [i_2] [i_2] = ((/* implicit */long long int) arr_6 [i_8 - 1] [i_8 - 1]);
            arr_36 [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) (-(0U)))) > (((((/* implicit */_Bool) 0U)) ? (var_1) : (((/* implicit */unsigned long long int) var_6)))))))));
        }
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (-1717817637173424305LL))))))), (min((arr_25 [i_2] [i_2] [i_2] [i_9] [i_9] [i_9] [11ULL]), (((/* implicit */unsigned int) (_Bool)1))))));
            var_29 = ((unsigned int) ((((/* implicit */_Bool) arr_27 [i_2 - 3] [i_2 + 1] [i_9 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-14860))) : (min((((/* implicit */unsigned int) arr_27 [19U] [i_9] [11LL])), (1689021323U)))));
            var_30 = ((/* implicit */short) ((((min((-5024765103551685503LL), (((/* implicit */long long int) arr_32 [i_2] [(_Bool)1] [2ULL])))) ^ (((/* implicit */long long int) arr_14 [i_2 - 1] [i_2])))) < (((/* implicit */long long int) ((((/* implicit */int) var_16)) / (((/* implicit */int) arr_19 [i_2] [1ULL] [i_2])))))));
        }
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
        {
            arr_42 [18U] [i_2] [(short)0] = ((/* implicit */_Bool) min((var_14), (((/* implicit */short) (!(((/* implicit */_Bool) ((-5024765103551685515LL) / (var_0)))))))));
            arr_43 [i_2] [i_10] [i_2] = ((/* implicit */long long int) (!((_Bool)1)));
            /* LoopSeq 2 */
            for (unsigned int i_11 = 3; i_11 < 21; i_11 += 3) 
            {
                var_31 = ((/* implicit */short) -7096467561038293920LL);
                var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((_Bool) (short)-14851)))))) ? (arr_44 [i_11]) : (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_13)) & (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) var_4)) ? (2568888675U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                /* LoopSeq 3 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_33 = ((/* implicit */long long int) min((var_33), ((+(7956140743009012186LL)))));
                    var_34 = min((((((/* implicit */_Bool) 0ULL)) ? (-4LL) : (((/* implicit */long long int) 1325056764U)))), (((/* implicit */long long int) max((arr_47 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1]), (arr_47 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1])))));
                    arr_49 [i_11 + 1] [i_2] [(_Bool)0] [i_12] = ((/* implicit */short) (_Bool)1);
                    arr_50 [i_2] [i_2] [i_11 + 1] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) min((((/* implicit */long long int) (short)11526)), (7096467561038293904LL))))) ? (max((arr_21 [i_2] [i_11 + 1] [i_2]), (((/* implicit */long long int) min((((/* implicit */short) arr_6 [i_10] [i_10])), (arr_20 [i_2] [i_2])))))) : (((/* implicit */long long int) ((/* implicit */int) ((-1717817637173424305LL) != (((/* implicit */long long int) 4294967295U))))))));
                }
                /* vectorizable */
                for (long long int i_13 = 3; i_13 < 20; i_13 += 2) 
                {
                    arr_53 [i_2] [i_10 - 1] [i_11] [i_2] [i_13] = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_2] [i_11 - 2])) == (((/* implicit */int) arr_19 [i_10 - 1] [i_11 - 1] [i_2]))));
                    arr_54 [i_13] [i_11] [i_2] [i_2] [i_2] = (+(7096467561038293904LL));
                }
                for (short i_14 = 0; i_14 < 22; i_14 += 1) 
                {
                    var_35 += ((unsigned int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_11 + 1] [i_10] [(short)2]))) : ((-9223372036854775807LL - 1LL))));
                    arr_58 [19LL] [4LL] [i_2] [i_14] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((min((7186937229471041916LL), (7096467561038293903LL))) >> (((((unsigned int) var_3)) - (2822899725U)))))) != (((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */unsigned long long int) arr_11 [i_2])) : (10274384595899171307ULL)))));
                    arr_59 [i_2] [i_2] [i_2] [i_2] [i_14] = ((/* implicit */short) min((((/* implicit */unsigned int) var_11)), (max((((/* implicit */unsigned int) ((1219577414U) > (arr_11 [i_2])))), (arr_40 [i_11 - 3])))));
                }
            }
            for (unsigned int i_15 = 4; i_15 < 21; i_15 += 1) 
            {
                arr_62 [i_2 - 2] [i_10] [i_2] [i_2 - 2] = var_16;
                var_36 *= ((/* implicit */_Bool) arr_20 [i_2] [16U]);
            }
        }
        for (long long int i_16 = 0; i_16 < 22; i_16 += 4) 
        {
            arr_65 [i_2] [(_Bool)1] [i_2] = ((/* implicit */long long int) ((unsigned long long int) (+((+(var_9))))));
            var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_60 [i_16] [i_2]))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) var_2)) ? (max((-1717817637173424322LL), (((/* implicit */long long int) arr_27 [i_2] [i_16] [i_2])))) : (min((((/* implicit */long long int) arr_22 [i_2 + 1] [i_16])), (-7096467561038293920LL)))))));
            var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) (!(((((/* implicit */long long int) ((unsigned int) arr_13 [i_16]))) > ((+(-9223372036854775787LL))))))))));
            var_39 = ((long long int) (short)-14554);
            arr_66 [13LL] [i_2] [i_16] = ((/* implicit */long long int) (short)14570);
        }
    }
    /* vectorizable */
    for (unsigned int i_17 = 0; i_17 < 17; i_17 += 2) 
    {
        arr_71 [i_17] [3ULL] = ((/* implicit */short) (-(-2499026311095593174LL)));
        arr_72 [12LL] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) >= (var_9)));
        arr_73 [(_Bool)1] = ((/* implicit */unsigned long long int) arr_56 [i_17]);
    }
    var_40 += ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) max((7096467561038293903LL), (2499026311095593174LL)))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13))))) ? (((((/* implicit */unsigned long long int) 1717817637173424305LL)) + (4038382981697027361ULL))) : (((/* implicit */unsigned long long int) ((long long int) var_1))))));
}
