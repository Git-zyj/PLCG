/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33061
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_19 = arr_2 [i_0];
        var_20 |= ((/* implicit */unsigned long long int) ((min((arr_0 [i_0]), (arr_2 [i_0]))) != (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_1 [i_0] [0])))));
        var_21 = ((/* implicit */long long int) arr_3 [i_0]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) 561850441793536LL)) ? (((/* implicit */unsigned long long int) var_12)) : (arr_7 [i_4] [i_1] [i_0]))));
                            var_23 = ((((/* implicit */_Bool) (~(var_18)))) ? (((12722943979967293692ULL) * (var_14))) : (((/* implicit */unsigned long long int) var_16)));
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [5ULL])) ? (var_10) : (arr_3 [i_3])));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_5 = 2; i_5 < 9; i_5 += 4) 
            {
                var_25 = ((/* implicit */long long int) 12722943979967293691ULL);
                var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */unsigned long long int) var_5))))) ? ((+(arr_8 [i_0] [i_1] [i_1] [6] [4] [i_0]))) : (arr_3 [i_0])));
            }
            var_27 = ((/* implicit */int) arr_0 [i_0]);
            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) 3856368483673059029LL)) ? (((/* implicit */unsigned long long int) ((int) var_11))) : (arr_14 [i_1] [i_0] [i_0]))))));
        }
        var_29 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])), (max((var_4), (arr_6 [i_0] [i_0] [i_0] [i_0])))));
    }
    for (unsigned long long int i_6 = 2; i_6 < 9; i_6 += 4) 
    {
        var_30 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -2147483642)) >= (arr_8 [i_6] [i_6 + 1] [i_6] [i_6 - 2] [i_6 - 2] [i_6]))))) <= (((((/* implicit */_Bool) 536870904)) ? (arr_14 [4] [i_6] [i_6 - 2]) : (((/* implicit */unsigned long long int) arr_12 [i_6] [i_6] [i_6])))))))) - (((18119257309255086400ULL) ^ (12722943979967293679ULL)))));
        var_31 = ((/* implicit */long long int) max((var_31), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) 18446744073709551601ULL))))), (((long long int) ((((/* implicit */unsigned long long int) -2089525005)) + (5723800093742257911ULL))))))));
        var_32 = ((/* implicit */int) max(((~(min((((/* implicit */unsigned long long int) arr_9 [i_6 - 2])), (9629073399621101513ULL))))), (min((((/* implicit */unsigned long long int) arr_5 [i_6 - 2] [i_6 + 1] [i_6 - 2])), ((+(1909069136155439467ULL)))))));
    }
    for (int i_7 = 0; i_7 < 24; i_7 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 4) 
            {
                {
                    var_33 = ((/* implicit */int) ((((/* implicit */_Bool) min((max((var_14), (((/* implicit */unsigned long long int) var_18)))), (((/* implicit */unsigned long long int) var_16))))) ? (((((/* implicit */_Bool) var_16)) ? (var_3) : (arr_20 [i_9] [i_8]))) : (max((((/* implicit */unsigned long long int) ((int) arr_27 [i_9] [i_9] [i_7] [i_7]))), (max((14ULL), (5723800093742257911ULL)))))));
                    var_34 = ((/* implicit */long long int) ((((arr_27 [i_7] [i_8] [i_7] [i_8]) != (var_18))) ? (arr_20 [i_8] [i_9]) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_5)) : (arr_23 [i_7])))));
                    /* LoopSeq 2 */
                    for (int i_10 = 0; i_10 < 24; i_10 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_11 = 0; i_11 < 24; i_11 += 1) 
                        {
                            var_35 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_7] [i_8] [i_9] [i_10])) ? (((((/* implicit */_Bool) var_4)) ? (arr_28 [i_11] [i_8] [i_8] [i_8]) : (((/* implicit */long long int) arr_18 [i_8] [i_7])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_5))))))))) ? (var_9) : (max((min((5723800093742257937ULL), (var_14))), (((/* implicit */unsigned long long int) min((arr_25 [i_7] [i_11]), (9223372036854775807LL))))))));
                            var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (5723800093742257938ULL) : ((-(min((arr_20 [i_8] [i_9]), (var_2)))))));
                            var_37 = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */unsigned long long int) arr_31 [i_11] [i_10] [i_8] [i_8])) / (var_6))) : (((arr_23 [i_9]) * (((/* implicit */unsigned long long int) 0LL)))))), (((((/* implicit */_Bool) arr_26 [i_10] [i_9])) ? (var_7) : (var_6)))));
                        }
                        for (unsigned long long int i_12 = 3; i_12 < 23; i_12 += 1) 
                        {
                            var_38 = (+(6056359109065141818ULL));
                            var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) min((((/* implicit */long long int) ((int) arr_21 [i_7]))), (((long long int) max((arr_23 [i_10]), (((/* implicit */unsigned long long int) var_12))))))))));
                        }
                        var_40 = min((((((/* implicit */_Bool) var_11)) ? (arr_23 [i_7]) : (arr_23 [i_7]))), (max((var_9), (arr_23 [i_10]))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 4) 
                    {
                        var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_7] [i_8] [i_7] [i_7])) ? (min((min((6875398496136837244ULL), (5232162481276046514ULL))), (arr_35 [i_8] [i_8] [i_9] [i_8] [10]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (arr_21 [i_13]) : (((/* implicit */long long int) ((int) 18446744073709551605ULL))))))));
                        var_42 = ((/* implicit */int) ((((/* implicit */_Bool) 25230824)) ? (((/* implicit */unsigned long long int) -452584246)) : (18446744073709551615ULL)));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_14 = 1; i_14 < 23; i_14 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_15 = 0; i_15 < 24; i_15 += 3) 
                        {
                            var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) (-(arr_27 [i_14 - 1] [i_14 + 1] [i_14 + 1] [i_14 - 1]))))));
                            var_44 = ((/* implicit */int) var_9);
                            var_45 = ((/* implicit */long long int) max((var_45), (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) var_17)) : (var_2)))))));
                            var_46 = ((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_9])) ? (var_7) : (((/* implicit */unsigned long long int) var_15))));
                        }
                        /* vectorizable */
                        for (long long int i_16 = 0; i_16 < 24; i_16 += 3) 
                        {
                            var_47 = ((/* implicit */long long int) arr_38 [i_14 + 1] [i_14] [i_14 - 1] [i_14 + 1]);
                            var_48 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_6)) ? (arr_26 [i_8] [i_8]) : (((/* implicit */unsigned long long int) var_16)))));
                            var_49 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_23 [i_7]))) ? ((~(arr_40 [i_7] [i_9] [i_9] [i_9] [i_9] [i_7]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_32 [i_7] [22] [i_9] [i_8] [i_7]) : (arr_43 [i_8] [i_14] [i_16]))))));
                            var_50 = (~(((unsigned long long int) var_7)));
                            var_51 |= ((long long int) ((((/* implicit */_Bool) arr_38 [i_7] [i_8] [i_9] [i_14 - 1])) ? (arr_27 [3LL] [i_8] [22] [i_8]) : (((/* implicit */long long int) -755528537))));
                        }
                        var_52 = ((int) max((max((5045873621778778747ULL), (((/* implicit */unsigned long long int) 34634616274944LL)))), (((/* implicit */unsigned long long int) (+(arr_38 [2ULL] [i_8] [i_8] [i_7]))))));
                        /* LoopSeq 1 */
                        for (int i_17 = 0; i_17 < 24; i_17 += 4) 
                        {
                            var_53 = ((/* implicit */int) max((var_53), (((/* implicit */int) ((long long int) var_18)))));
                            var_54 = ((/* implicit */unsigned long long int) ((2143289344ULL) <= (8258421271294341885ULL)));
                        }
                        var_55 = ((/* implicit */int) ((((/* implicit */_Bool) -8866871710460158611LL)) ? (-269229780511212666LL) : (36011204832919552LL)));
                    }
                }
            } 
        } 
        var_56 = ((/* implicit */int) max((var_56), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_10), (var_3)))) ? ((-(72057593903710208LL))) : ((+(var_8)))))) ? ((-(5723800093742257924ULL))) : (max((15319013232262151958ULL), (((/* implicit */unsigned long long int) -8136350827941129530LL)))))))));
        var_57 = ((/* implicit */int) (((!(((/* implicit */_Bool) -2147483646)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1762813013917305354ULL)))))))) : (max((var_10), (((/* implicit */unsigned long long int) -423748096))))));
        var_58 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) max((arr_41 [i_7] [8] [i_7] [i_7] [i_7]), (arr_30 [21LL] [i_7] [i_7] [i_7])))) : (var_4)))) ? ((-(var_5))) : ((-(((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */long long int) -994293002))))))));
        var_59 = ((/* implicit */int) ((min((((((/* implicit */_Bool) 17184914424026346604ULL)) ? (((/* implicit */unsigned long long int) 2147483647)) : (arr_47 [i_7]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (arr_43 [i_7] [i_7] [i_7]) : (var_11)))))) + (((/* implicit */unsigned long long int) arr_24 [i_7] [i_7] [i_7]))));
    }
    var_60 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? ((-((+(var_8))))) : ((~(((((/* implicit */_Bool) -400305231)) ? (1902919265403469864LL) : (((/* implicit */long long int) -1158157598))))))));
}
