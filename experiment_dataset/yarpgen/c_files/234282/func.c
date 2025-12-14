/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234282
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
    var_20 = (((_Bool)1) ? (-7400898804675540231LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_0] [i_1] = ((long long int) ((arr_2 [(_Bool)1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (var_0)));
            var_21 |= var_6;
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                arr_11 [i_0] = ((var_11) & (arr_9 [i_2] [i_2] [i_2 + 1]));
                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (((+(var_1))) << ((((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5LL))) - (1LL)))));
                var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_6) ? (-1630280136862775783LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_2]))))))));
            }
            for (long long int i_3 = 1; i_3 < 14; i_3 += 3) 
            {
                arr_17 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */int) var_10)) + (((/* implicit */int) var_9))))));
                var_23 = arr_0 [i_1];
            }
            for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (-(((/* implicit */int) (!(var_9)))))))));
                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (_Bool)0))));
            }
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_7 = 0; i_7 < 15; i_7 += 4) 
                {
                    var_26 += ((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_0] [i_7] [i_7])) << (((/* implicit */int) var_10))));
                    var_27 ^= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((((/* implicit */int) var_17)) * (((/* implicit */int) var_9))))));
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_5])) & (((/* implicit */int) arr_2 [i_6]))));
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_32 [i_0] [i_5] [10LL] = arr_9 [i_0] [(_Bool)1] [i_7];
                        var_29 = ((/* implicit */long long int) var_6);
                        var_30 = ((/* implicit */long long int) arr_10 [i_5]);
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        arr_37 [i_7] [i_5] [i_6] [i_7] [i_9] |= (_Bool)1;
                        var_31 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_0))) ? ((~(((/* implicit */int) var_2)))) : ((~(((/* implicit */int) (_Bool)1))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        var_32 = ((((arr_2 [10LL]) || ((_Bool)1))) && ((!(((/* implicit */_Bool) var_13)))));
                        var_33 = (-(arr_36 [i_5] [i_5] [i_10]));
                        var_34 = arr_9 [6LL] [i_7] [i_7];
                    }
                }
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 15; i_11 += 2) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            arr_48 [i_0] [i_0] [(_Bool)1] [i_6] [i_11] [i_0] = (+(-1946976015649490955LL));
                            arr_49 [i_0] [i_5] [i_5] [(_Bool)1] [i_5] [i_11] [i_0] = -8542815670646668682LL;
                            var_35 += ((/* implicit */long long int) var_18);
                            arr_50 [i_11] [i_6] [i_12] &= ((/* implicit */long long int) arr_38 [13LL] [i_5] [i_6] [i_11]);
                        }
                    } 
                } 
            }
            arr_51 [i_0] = ((/* implicit */_Bool) (~((+(arr_18 [i_0] [i_0] [i_0] [i_5])))));
            var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((((/* implicit */_Bool) 1946976015649490982LL)) ? (max((var_11), ((+(-1946976015649490966LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((arr_19 [i_0] [i_5] [i_0]), (-1946976015649490955LL)))) && (((/* implicit */_Bool) min((var_14), (var_14)))))))))))));
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
        {
            arr_55 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) max((max((arr_9 [i_0] [i_13] [i_13]), (9223372036854775807LL))), (((/* implicit */long long int) var_17)))));
            arr_56 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_36 [i_0] [i_13] [i_13])))) ? (((((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [i_0]))) ^ (arr_22 [i_13]))) - ((((_Bool)1) ? (arr_0 [i_13]) : (arr_5 [i_0] [i_13] [i_13]))))) : (((arr_31 [i_0] [8LL] [i_13] [i_13]) - (((/* implicit */long long int) ((/* implicit */int) var_18)))))));
        }
        var_37 = max((((/* implicit */long long int) ((((/* implicit */int) var_8)) >> (((/* implicit */int) (_Bool)1))))), ((+(-3092755223078563617LL))));
        /* LoopNest 3 */
        for (long long int i_14 = 0; i_14 < 15; i_14 += 3) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                {
                    {
                        var_38 = ((/* implicit */long long int) ((_Bool) max((-1946976015649490979LL), (((/* implicit */long long int) (_Bool)1)))));
                        var_39 = ((_Bool) arr_59 [11LL] [i_0] [i_16 + 1] [i_16]);
                        arr_63 [i_0] [i_14] [i_0] [i_16 + 1] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((-1946976015649490945LL) < (min((arr_53 [i_0] [i_0] [(_Bool)1]), (((/* implicit */long long int) arr_40 [i_0] [i_0] [9LL] [i_0] [i_15] [i_0] [i_16]))))))), (((((/* implicit */long long int) (~(((/* implicit */int) var_8))))) & (((((/* implicit */_Bool) arr_46 [i_0] [4LL] [4LL] [(_Bool)1] [i_15] [i_0] [i_16])) ? (arr_24 [(_Bool)1] [i_15] [i_16]) : (-8542815670646668704LL)))))));
                    }
                } 
            } 
        } 
        var_40 = ((max((arr_18 [i_0] [i_0] [i_0] [13LL]), (-1946976015649490956LL))) % (1946976015649490967LL));
    }
    /* vectorizable */
    for (long long int i_17 = 0; i_17 < 24; i_17 += 3) /* same iter space */
    {
        var_41 |= (!(((/* implicit */_Bool) var_14)));
        arr_66 [7LL] [i_17] = ((/* implicit */long long int) var_5);
    }
    for (long long int i_18 = 0; i_18 < 24; i_18 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            /* LoopSeq 4 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_21 = 0; i_21 < 24; i_21 += 2) 
                {
                    var_42 *= ((/* implicit */long long int) (~(((/* implicit */int) var_5))));
                    arr_77 [(_Bool)1] [(_Bool)1] [i_18] [i_20] [i_18] = ((((1946976015649490928LL) << (((((arr_73 [i_18] [i_19] [13LL]) + (53218121252066565LL))) - (10LL))))) % (var_11));
                    arr_78 [(_Bool)0] [i_19] [i_18] [i_19] [i_21] [i_21] = (_Bool)1;
                }
                for (long long int i_22 = 0; i_22 < 24; i_22 += 3) 
                {
                    arr_82 [i_18] = ((long long int) ((((/* implicit */_Bool) arr_73 [i_18] [i_19] [i_20])) ? (arr_81 [i_18] [i_20]) : (((var_16) & (((/* implicit */long long int) ((/* implicit */int) arr_75 [11LL] [11LL] [i_20] [i_20] [(_Bool)1] [i_20])))))));
                    var_43 = ((/* implicit */_Bool) (~((+(((var_15) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                    var_44 = ((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_64 [i_18]))) ^ (var_16)));
                    arr_83 [i_18] [i_18] [i_19] [i_20] [i_22] = arr_64 [i_18];
                }
                var_45 = ((/* implicit */long long int) max((var_45), ((-(((arr_69 [1LL] [(_Bool)1]) + (arr_69 [i_18] [i_18])))))));
                /* LoopSeq 2 */
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    arr_87 [i_18] [8LL] [i_20] [i_18] [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) var_19);
                    var_46 = ((/* implicit */_Bool) max((var_46), (arr_79 [i_18] [i_18])));
                    arr_88 [i_18] [20LL] [i_18] [i_23] = ((((((/* implicit */_Bool) (((_Bool)1) ? (arr_86 [i_18] [i_19] [i_18] [i_19]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : ((~(-3092755223078563604LL))))) ^ (min((-1LL), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))))));
                    var_47 *= ((/* implicit */_Bool) (+(((arr_79 [i_20] [23LL]) ? (((/* implicit */long long int) ((/* implicit */int) arr_75 [i_18] [i_18] [i_18] [1LL] [i_20] [i_23]))) : (((long long int) arr_69 [i_20] [i_20]))))));
                    var_48 = var_13;
                }
                for (long long int i_24 = 0; i_24 < 24; i_24 += 4) 
                {
                    var_49 = ((/* implicit */long long int) max((var_49), (((/* implicit */long long int) (_Bool)1))));
                    arr_92 [i_18] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_90 [i_18] [i_18] [i_18] [i_20] [i_24])) ? (((/* implicit */int) arr_64 [i_18])) : (((/* implicit */int) var_3))))) && (arr_68 [6LL])))), ((+(arr_86 [i_18] [i_18] [i_20] [i_24])))));
                    arr_93 [i_18] [i_18] [i_18] [i_19] [i_20] [i_18] = (_Bool)1;
                }
                arr_94 [i_18] [i_19] [i_20] = ((/* implicit */long long int) ((((((9214300576084356348LL) / (-4062151513705174360LL))) == (((2206014065481196002LL) / (var_11))))) && (min(((!(((/* implicit */_Bool) arr_89 [i_18] [i_18] [i_19] [i_20])))), (arr_68 [(_Bool)1])))));
            }
            for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_26 = 0; i_26 < 0; i_26 += 1) 
                {
                    var_50 = ((/* implicit */long long int) min((var_50), (max(((+((-(arr_90 [i_18] [6LL] [i_25] [i_25] [(_Bool)1]))))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1)))))))));
                    arr_99 [i_18] = (!(((/* implicit */_Bool) 268435455LL)));
                    var_51 = (-9223372036854775807LL - 1LL);
                    var_52 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_74 [i_18] [i_18] [i_19] [i_18] [i_19])) & (((/* implicit */int) arr_74 [i_19] [i_19] [i_19] [i_18] [(_Bool)1]))))) ? (((long long int) var_8)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))));
                }
                var_53 = (((!(((/* implicit */_Bool) (+(((/* implicit */int) var_9))))))) ? (9LL) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((_Bool) arr_98 [i_18] [10LL] [i_18] [i_19] [i_18] [i_25]))))));
            }
            /* vectorizable */
            for (_Bool i_27 = 0; i_27 < 0; i_27 += 1) /* same iter space */
            {
                var_54 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (arr_97 [i_27] [5LL] [i_27 + 1] [i_27 + 1]) : (((((/* implicit */_Bool) -9223372036854775806LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_101 [i_18] [i_19] [i_27]))) : (var_14)))));
                var_55 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_75 [i_27] [i_27] [i_27] [i_27 + 1] [i_27] [(_Bool)1]))));
            }
            /* vectorizable */
            for (_Bool i_28 = 0; i_28 < 0; i_28 += 1) /* same iter space */
            {
                arr_104 [i_18] = ((long long int) (_Bool)1);
                var_56 = ((/* implicit */_Bool) arr_71 [i_19] [i_28]);
                arr_105 [i_18] [i_19] [i_19] [i_18] = ((/* implicit */_Bool) var_0);
            }
            var_57 |= ((/* implicit */long long int) (_Bool)1);
            arr_106 [i_18] = ((max((((9214300576084356348LL) >> (((/* implicit */int) arr_98 [(_Bool)0] [i_18] [i_18] [i_18] [i_18] [i_18])))), (((/* implicit */long long int) var_4)))) ^ (((/* implicit */long long int) ((((/* implicit */int) (!(arr_85 [i_18] [i_19])))) << (((var_11) - (3117331943753123833LL)))))));
        }
        for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) 
        {
            var_58 = ((arr_71 [i_18] [i_18]) == (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_5))) & (((/* implicit */int) var_15))))));
            arr_109 [i_18] [i_29] [i_29] = ((/* implicit */_Bool) arr_73 [i_18] [i_18] [i_29]);
            arr_110 [i_18] = ((/* implicit */_Bool) (+(((/* implicit */int) ((arr_90 [i_29] [i_29] [i_29] [i_29] [i_29 - 1]) == (((/* implicit */long long int) ((/* implicit */int) arr_98 [(_Bool)1] [i_18] [(_Bool)1] [i_29] [i_18] [(_Bool)1]))))))));
            arr_111 [i_18] [i_18] [i_18] = ((/* implicit */_Bool) max((max((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) 4858400545459703330LL)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_17))))))), (((/* implicit */long long int) (_Bool)1))));
            var_59 = (i_18 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_101 [i_18] [i_29 - 1] [i_29 - 1])) % (((/* implicit */int) arr_101 [i_18] [i_29 - 1] [i_29 - 1]))))) ? (((/* implicit */int) max((arr_101 [i_18] [i_29 - 1] [i_29 - 1]), (arr_101 [i_18] [i_29 - 1] [i_29 - 1])))) : (((/* implicit */int) ((_Bool) arr_101 [i_18] [i_29 - 1] [i_29 - 1])))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_101 [i_18] [i_29 - 1] [i_29 - 1])) * (((/* implicit */int) arr_101 [i_18] [i_29 - 1] [i_29 - 1]))))) ? (((/* implicit */int) max((arr_101 [i_18] [i_29 - 1] [i_29 - 1]), (arr_101 [i_18] [i_29 - 1] [i_29 - 1])))) : (((/* implicit */int) ((_Bool) arr_101 [i_18] [i_29 - 1] [i_29 - 1]))))));
        }
        arr_112 [i_18] = ((/* implicit */_Bool) ((arr_101 [i_18] [i_18] [i_18]) ? (((((_Bool) 439331028641426957LL)) ? (2174965418244958700LL) : (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -9223372036854775795LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))));
    }
    /* vectorizable */
    for (long long int i_30 = 0; i_30 < 24; i_30 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_31 = 0; i_31 < 24; i_31 += 4) /* same iter space */
        {
            arr_119 [i_30] = ((/* implicit */_Bool) var_13);
            arr_120 [17LL] [i_31] = ((/* implicit */_Bool) arr_80 [i_30] [i_30] [i_31] [i_31]);
            var_60 -= ((var_14) == (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))));
        }
        for (long long int i_32 = 0; i_32 < 24; i_32 += 4) /* same iter space */
        {
            var_61 = ((/* implicit */long long int) min((var_61), ((-9223372036854775807LL - 1LL))));
            var_62 = ((/* implicit */_Bool) max((var_62), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_74 [i_30] [i_30] [i_30] [i_32] [18LL]))) / (((var_13) + (var_0))))))));
            arr_123 [i_32] = ((((/* implicit */_Bool) var_19)) ? (arr_69 [i_30] [i_32]) : (arr_102 [i_30] [i_32]));
        }
        arr_124 [i_30] [(_Bool)1] = ((/* implicit */_Bool) (+(((((/* implicit */int) var_17)) & (((/* implicit */int) arr_108 [(_Bool)1] [(_Bool)1]))))));
        var_63 = ((/* implicit */long long int) ((arr_103 [i_30] [i_30] [14LL]) ? (((/* implicit */int) arr_68 [i_30])) : (((/* implicit */int) arr_68 [i_30]))));
    }
    var_64 = ((/* implicit */long long int) min((var_64), (((/* implicit */long long int) ((min((((/* implicit */long long int) var_4)), ((-(var_12))))) < (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
    var_65 = ((/* implicit */_Bool) min((var_65), (var_18)));
    /* LoopSeq 1 */
    for (long long int i_33 = 1; i_33 < 16; i_33 += 3) 
    {
        arr_127 [i_33] [i_33] = ((/* implicit */_Bool) ((arr_72 [i_33]) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        var_66 = ((/* implicit */long long int) max((var_66), (min((((/* implicit */long long int) var_8)), (((((_Bool) 7530237576980369607LL)) ? ((~(var_19))) : ((+(-9223372036854775799LL)))))))));
    }
}
