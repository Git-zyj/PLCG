/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33312
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
    for (signed char i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) max(((-(arr_0 [i_0 - 1]))), (((arr_0 [i_0 - 1]) - (arr_0 [i_0 - 1])))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_15 = ((/* implicit */int) ((unsigned int) arr_0 [i_0 - 1]));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                var_16 = ((/* implicit */unsigned int) min((var_16), (54983141U)));
                var_17 -= ((/* implicit */int) (!(((/* implicit */_Bool) var_8))));
                arr_11 [i_0] [(signed char)17] [i_0] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */unsigned long long int) arr_5 [i_1])) < (var_14))));
            }
            arr_12 [i_0] = ((/* implicit */unsigned int) var_1);
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((unsigned int) 117104789)))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            var_19 = ((/* implicit */unsigned int) min((7371219755335706045ULL), (((/* implicit */unsigned long long int) ((max((arr_15 [i_0]), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0])))) > (((/* implicit */unsigned long long int) (+(var_0)))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                arr_19 [i_0] [i_3] = ((/* implicit */int) max(((-(arr_2 [i_0 - 1] [i_0 - 1]))), (min((((((/* implicit */_Bool) arr_6 [i_3] [i_4])) ? (arr_2 [i_3] [i_3]) : (((/* implicit */unsigned int) -1)))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0] [i_3] [i_4])) - (arr_10 [i_0] [22ULL] [i_4] [i_0]))))))));
                var_20 = ((/* implicit */unsigned long long int) ((int) min((arr_15 [i_0 - 1]), (((/* implicit */unsigned long long int) var_6)))));
                /* LoopSeq 1 */
                for (unsigned int i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    var_21 = ((/* implicit */int) (+(arr_13 [i_0])));
                    var_22 *= ((/* implicit */unsigned int) ((unsigned long long int) (+(((/* implicit */int) (signed char)-75)))));
                    var_23 = ((/* implicit */signed char) arr_15 [i_0]);
                    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) var_3))));
                }
                /* LoopSeq 3 */
                for (int i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    var_25 = ((/* implicit */signed char) var_12);
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (+(2068793442U))))));
                    arr_26 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_4] [i_6] |= ((/* implicit */signed char) var_14);
                }
                for (unsigned int i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    var_27 -= min((11075524318373845570ULL), (((/* implicit */unsigned long long int) min((4037932144U), (arr_2 [i_0 - 1] [i_0 - 1])))));
                    var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_4)))) ? (min((((/* implicit */unsigned long long int) var_0)), (arr_18 [i_0] [i_0 + 1] [i_4]))) : (min((((/* implicit */unsigned long long int) arr_29 [i_0] [i_0 + 1] [i_4] [1])), (15258141353036415318ULL))))))));
                    var_29 = min((((/* implicit */unsigned long long int) 3454228926U)), (((var_8) ^ (arr_18 [i_0] [i_0 + 1] [i_0]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        arr_33 [i_8] [18U] [18U] = ((/* implicit */int) 3465404441U);
                        var_30 = min((18446744073709551615ULL), (((((/* implicit */unsigned long long int) (~(268435392)))) & ((~(3302680688312509217ULL))))));
                    }
                }
                for (signed char i_9 = 0; i_9 < 25; i_9 += 3) 
                {
                    arr_37 [i_0] [i_9] [i_4] = ((/* implicit */unsigned int) var_12);
                    arr_38 [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) -1)) ^ (((810056535884399974ULL) & (((/* implicit */unsigned long long int) 1734690291U))))));
                }
            }
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_10 = 1; i_10 < 22; i_10 += 2) 
            {
                var_31 = ((/* implicit */unsigned long long int) arr_40 [12ULL]);
                arr_41 [i_0 - 1] [i_0 - 1] [i_10] [i_3] = ((/* implicit */unsigned long long int) ((var_3) < (((/* implicit */unsigned long long int) arr_5 [i_0 + 1]))));
                arr_42 [i_0 - 1] = ((/* implicit */unsigned long long int) (signed char)76);
                var_32 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_10 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (3780190705U)));
                /* LoopNest 2 */
                for (int i_11 = 4; i_11 < 23; i_11 += 2) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned long long int) -1042387161);
                            var_34 &= ((/* implicit */unsigned long long int) arr_5 [i_10]);
                            arr_48 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(3493610398U)))) && (((/* implicit */_Bool) arr_25 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
                            var_35 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_27 [i_11 - 1] [i_10 - 1]))));
                            arr_49 [i_11] [i_11] [i_10 + 3] [i_3] [i_0] [i_0] &= ((/* implicit */int) var_14);
                        }
                    } 
                } 
            }
            for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 2) 
            {
                arr_52 [i_0] [i_0] [i_0] [i_0 + 1] = ((((min((((/* implicit */unsigned long long int) (signed char)86)), (13168457868034948273ULL))) == (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_2)), (2521085469U)))))) ? (min((arr_1 [i_0 - 1]), (((/* implicit */unsigned long long int) arr_30 [i_0] [i_0] [i_13] [i_13] [i_3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_0] [i_0] [i_0] [i_3] [i_13] [i_0]))))) != (((/* implicit */int) (!(((/* implicit */_Bool) 613853421U))))))))));
                /* LoopNest 2 */
                for (signed char i_14 = 0; i_14 < 25; i_14 += 2) 
                {
                    for (unsigned int i_15 = 0; i_15 < 25; i_15 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned int) arr_22 [i_0] [i_0]);
                            arr_57 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned int) 2126154821915063341ULL);
                            var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) 430893439U))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_1)) | (var_8))))))), (((max((((/* implicit */unsigned int) var_11)), (430893439U))) | ((-(3621231593U))))))))));
                            var_38 &= ((/* implicit */unsigned int) ((((((arr_20 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1]) ^ (((/* implicit */unsigned long long int) var_1)))) ^ (((/* implicit */unsigned long long int) ((var_6) << (((1956005829U) - (1956005828U)))))))) == (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) | (((/* implicit */int) var_2))))) : (max((((/* implicit */unsigned long long int) 2019779480U)), (var_13)))))));
                        }
                    } 
                } 
            }
            for (int i_16 = 0; i_16 < 25; i_16 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 2) 
                {
                    for (unsigned int i_18 = 0; i_18 < 25; i_18 += 1) 
                    {
                        {
                            arr_64 [i_3] [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_3])) && (((/* implicit */_Bool) arr_15 [i_0])))))));
                            var_39 = ((/* implicit */unsigned int) (~(min((arr_9 [i_16] [i_0 + 1] [i_0 + 1]), (-14)))));
                            var_40 = 2039916868U;
                            arr_65 [i_18] [5ULL] [i_16] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((arr_30 [(signed char)22] [(signed char)22] [i_16] [i_16] [i_18]) == (2123625672))) ? (((/* implicit */int) ((((/* implicit */unsigned int) -669905252)) == (3357265435U)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_60 [i_3])))))))) | ((~(((unsigned long long int) var_3))))));
                        }
                    } 
                } 
                var_41 = ((/* implicit */signed char) 7371219755335706045ULL);
            }
        }
        for (signed char i_19 = 2; i_19 < 21; i_19 += 1) 
        {
            var_42 = min((max((min((3780190727U), (((/* implicit */unsigned int) -3)))), (((/* implicit */unsigned int) arr_29 [i_19 - 1] [i_19] [i_0 - 1] [i_0 + 1])))), ((+(((unsigned int) (signed char)-125)))));
            var_43 += ((int) var_7);
            arr_69 [i_19] [i_19] [i_19] = (~((-(var_8))));
        }
    }
    for (unsigned int i_20 = 0; i_20 < 14; i_20 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_21 = 2; i_21 < 13; i_21 += 2) 
        {
            arr_76 [i_20] [i_21] [i_21] = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) var_2)), (arr_0 [i_20]))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) >> (((min((((/* implicit */unsigned long long int) -3)), (5936951012372097535ULL))) - (5936951012372097518ULL))))))));
            var_44 = ((/* implicit */signed char) arr_72 [i_21] [i_20] [i_20]);
            arr_77 [i_20] [i_20] = ((/* implicit */int) min((((5999589711211417738ULL) >> (((var_12) - (15582446764526603739ULL))))), (((/* implicit */unsigned long long int) (-(-1067128459))))));
            arr_78 [i_20] [i_21] = ((/* implicit */unsigned int) ((signed char) 1717566650U));
            var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) min((min(((-(5257150995374177630ULL))), (12447154362498133879ULL))), (var_12))))));
        }
        /* vectorizable */
        for (unsigned long long int i_22 = 1; i_22 < 11; i_22 += 2) 
        {
            /* LoopSeq 2 */
            for (signed char i_23 = 0; i_23 < 14; i_23 += 4) 
            {
                arr_83 [i_20] = ((/* implicit */unsigned long long int) (~(arr_2 [i_20] [i_22])));
                var_46 = ((int) (-(-1334442884)));
                var_47 += ((/* implicit */unsigned int) (~(var_3)));
                /* LoopNest 2 */
                for (unsigned long long int i_24 = 0; i_24 < 14; i_24 += 3) 
                {
                    for (unsigned int i_25 = 0; i_25 < 14; i_25 += 2) 
                    {
                        {
                            var_48 = ((/* implicit */unsigned int) max((var_48), (((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_5 [i_24])) ? (arr_10 [i_24] [i_24] [i_23] [i_23]) : (((/* implicit */int) (signed char)60)))) + (2147483647))) >> (0))))));
                            arr_90 [4] [4] [4] [i_24] [i_24] [i_24] [4] = ((/* implicit */int) var_7);
                        }
                    } 
                } 
            }
            for (unsigned int i_26 = 0; i_26 < 14; i_26 += 4) 
            {
                var_49 = ((/* implicit */signed char) (-(var_10)));
                var_50 = ((/* implicit */unsigned long long int) min((var_50), ((-(arr_56 [i_22] [i_22 + 1] [i_22 - 1] [i_22 + 2] [i_22 - 1])))));
                var_51 = ((((/* implicit */unsigned int) -3)) ^ (arr_82 [i_20] [i_20] [i_20] [i_22 + 3]));
            }
            var_52 = ((/* implicit */unsigned int) max((var_52), (((/* implicit */unsigned int) ((arr_0 [i_22 + 1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_20] [i_22 - 1] [i_22] [i_22 + 3]))))))));
            var_53 = ((/* implicit */int) min((var_53), (((/* implicit */int) ((signed char) 6130142428208272579ULL)))));
        }
        /* LoopSeq 1 */
        for (int i_27 = 0; i_27 < 14; i_27 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_28 = 0; i_28 < 14; i_28 += 4) 
            {
                arr_98 [i_20] [i_27] [i_20] [i_20] = ((/* implicit */signed char) 904641504U);
                var_54 = ((/* implicit */signed char) var_8);
            }
            var_55 = ((/* implicit */unsigned long long int) max((var_55), (((unsigned long long int) var_7))));
        }
    }
    /* LoopSeq 2 */
    for (unsigned int i_29 = 0; i_29 < 23; i_29 += 3) 
    {
        arr_101 [i_29] = ((/* implicit */unsigned int) 943513631);
        var_56 *= ((/* implicit */signed char) arr_17 [i_29] [i_29] [i_29]);
        arr_102 [i_29] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) arr_54 [i_29] [i_29] [19U] [i_29] [i_29] [i_29])))));
        /* LoopSeq 2 */
        for (unsigned long long int i_30 = 0; i_30 < 23; i_30 += 2) 
        {
            var_57 = ((/* implicit */int) ((unsigned long long int) (~(arr_3 [i_29]))));
            var_58 = ((/* implicit */signed char) (-(2697361854971587222ULL)));
        }
        /* vectorizable */
        for (unsigned int i_31 = 0; i_31 < 23; i_31 += 2) 
        {
            arr_109 [i_29] = ((/* implicit */unsigned long long int) arr_29 [i_29] [i_31] [i_29] [i_29]);
            var_59 = ((/* implicit */int) arr_58 [i_29] [i_29] [i_31]);
            var_60 = ((/* implicit */int) max((var_60), (((/* implicit */int) var_0))));
            arr_110 [i_29] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_34 [i_29] [i_29] [i_29] [14ULL] [8ULL])) >> (((((/* implicit */int) arr_34 [i_29] [i_29] [i_29] [i_31] [i_29])) - (90)))));
            /* LoopSeq 3 */
            for (unsigned int i_32 = 0; i_32 < 23; i_32 += 2) 
            {
                arr_113 [i_29] [i_29] [i_29] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
                var_61 = (+(arr_1 [i_29]));
                /* LoopSeq 1 */
                for (unsigned int i_33 = 0; i_33 < 23; i_33 += 2) 
                {
                    var_62 &= ((/* implicit */unsigned long long int) (+(1075263492U)));
                    arr_116 [i_29] [i_33] [i_29] [i_33] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2047019998))));
                }
            }
            for (unsigned int i_34 = 3; i_34 < 19; i_34 += 3) 
            {
                var_63 -= ((/* implicit */signed char) var_4);
                var_64 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_34 - 2] [i_31] [7ULL]))) | (var_4)));
                var_65 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_6) / (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
            }
            for (int i_35 = 3; i_35 < 21; i_35 += 4) 
            {
                arr_124 [i_29] [i_29] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_55 [i_35] [i_35 - 1] [i_35 - 3] [i_35 + 2] [i_35])) ? (arr_55 [i_35] [i_35] [i_35 - 1] [i_35 + 2] [i_35]) : (var_13)));
                arr_125 [i_29] [(signed char)15] = ((/* implicit */unsigned long long int) (signed char)-61);
                /* LoopNest 2 */
                for (unsigned long long int i_36 = 0; i_36 < 23; i_36 += 2) 
                {
                    for (unsigned long long int i_37 = 3; i_37 < 22; i_37 += 1) 
                    {
                        {
                            arr_130 [i_29] = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) var_2))))));
                            arr_131 [i_29] [i_29] [i_29] [i_31] [i_35 + 2] [i_36] [i_37 - 3] = ((/* implicit */unsigned long long int) var_1);
                        }
                    } 
                } 
                var_66 = (+(((arr_22 [i_29] [i_35 + 1]) | (var_14))));
            }
        }
    }
    /* vectorizable */
    for (unsigned int i_38 = 0; i_38 < 19; i_38 += 2) 
    {
        arr_136 [i_38] [i_38] = ((/* implicit */unsigned long long int) (signed char)-22);
        arr_137 [7U] = ((/* implicit */unsigned int) ((var_14) == (13255869446962045545ULL)));
        arr_138 [i_38] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (2697361854971587231ULL) : (((/* implicit */unsigned long long int) 947496186))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_112 [i_38]))) : (8766989344615632896ULL));
    }
    var_67 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 4294967272U)), (6688400757350821674ULL))))));
}
