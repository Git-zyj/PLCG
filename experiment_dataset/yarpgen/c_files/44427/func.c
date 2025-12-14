/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44427
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
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) 2147483647);
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((2147483647), (2147483647)))) ? (((/* implicit */unsigned long long int) (((-2147483647 - 1)) & (2147483647)))) : ((-(var_2)))));
    }
    for (unsigned int i_1 = 3; i_1 < 18; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)369)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [(short)4])) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) max((var_13), (((/* implicit */long long int) 2417768970U))))) : (((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25139))) : (var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_4 [i_1])) * (((/* implicit */int) (unsigned short)0)))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 4; i_2 < 18; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            {
                                arr_15 [i_1] [i_2] [10U] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_4 [i_1 - 2]), (((/* implicit */unsigned short) arr_7 [i_1] [i_1] [i_1 - 3]))))) || (((/* implicit */_Bool) ((unsigned short) var_5)))));
                                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) 2147483647)) : (16938676058078577395ULL)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_6 = 2; i_6 < 17; i_6 += 1) 
                    {
                        for (long long int i_7 = 4; i_7 < 17; i_7 += 1) 
                        {
                            {
                                arr_21 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_11 [i_6 + 2] [i_6 + 2] [i_6 + 1] [i_6 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((long long int) 9223372036854775807LL))) : (((var_2) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                                var_18 = ((/* implicit */short) var_8);
                                arr_22 [i_2 + 1] [i_7] = var_5;
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) max((((1415263926U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30739))))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_7 [i_2 - 3] [i_2 - 3] [i_2 - 3])), (var_5)))))))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_11))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_8 = 1; i_8 < 9; i_8 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (-(7005960275885150027LL))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 1) 
        {
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((unsigned long long int) 1097808466759688369LL)) : (((/* implicit */unsigned long long int) ((-7005960275885150028LL) / (var_0))))));
            /* LoopSeq 4 */
            for (unsigned short i_10 = 0; i_10 < 10; i_10 += 3) 
            {
                var_23 = ((/* implicit */unsigned char) ((var_12) | (((/* implicit */unsigned long long int) ((unsigned int) 2147483647)))));
                arr_33 [i_8] [i_8] [i_8] [i_10] = ((/* implicit */unsigned short) var_4);
            }
            for (unsigned short i_11 = 3; i_11 < 9; i_11 += 3) 
            {
                /* LoopSeq 3 */
                for (short i_12 = 0; i_12 < 10; i_12 += 1) 
                {
                    arr_40 [i_8] [i_8] [i_11] [3U] [i_9] = ((/* implicit */unsigned long long int) var_13);
                    arr_41 [i_8] = ((unsigned short) 1508068015630974234ULL);
                    arr_42 [i_8 - 1] [i_9] [i_9] [i_11] [i_8] [i_12] = ((/* implicit */unsigned long long int) arr_39 [4LL] [i_9] [i_9] [7ULL] [i_9] [i_9]);
                    /* LoopSeq 1 */
                    for (unsigned int i_13 = 1; i_13 < 9; i_13 += 1) 
                    {
                        arr_45 [6ULL] &= ((/* implicit */unsigned short) 2879703369U);
                        var_24 -= var_14;
                        arr_46 [i_8] [i_9] [i_9] [i_11] [(_Bool)1] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_13] [i_13 + 1] [i_9] [i_11 - 3] [i_11] [3ULL] [i_9]))) - (3480371161290994833ULL)));
                    }
                }
                for (unsigned long long int i_14 = 2; i_14 < 7; i_14 += 1) 
                {
                    arr_51 [i_8] [i_8] [i_11] [i_8] [i_14] = ((/* implicit */signed char) ((unsigned char) var_1));
                    arr_52 [i_8] [i_8] [i_8] [i_11] [2ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_8] [i_9] [i_11 - 1] [i_14 + 3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (410345120371673239LL) : (-1280327882087223478LL)))) : (((((/* implicit */_Bool) var_1)) ? (var_2) : (arr_37 [(unsigned short)1] [(unsigned short)1] [(unsigned short)9] [i_8])))));
                }
                for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 3) 
                {
                    arr_56 [i_8] [i_11] [i_9] [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */unsigned long long int) var_11)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [(unsigned short)8] [i_8] [i_8] [i_11 - 1])))));
                    var_25 = ((/* implicit */unsigned int) max((var_25), ((-(((arr_48 [6ULL] [(unsigned char)0] [(unsigned char)0] [i_8]) & (arr_16 [i_8 - 1] [i_9] [i_11 + 1] [i_11 - 2] [i_15])))))));
                    arr_57 [i_8] [i_8] [i_9] [i_9] [i_11] [1ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_11 [i_8 - 1] [i_8] [i_11] [i_11])) % (((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22289)))))));
                    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((unsigned long long int) var_14)))));
                }
                /* LoopNest 2 */
                for (unsigned short i_16 = 0; i_16 < 10; i_16 += 1) 
                {
                    for (long long int i_17 = 1; i_17 < 7; i_17 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((((/* implicit */_Bool) 16938676058078577382ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27482))) : (5926492430397370358ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
                            arr_65 [i_8] [i_9] = ((/* implicit */unsigned int) var_10);
                            arr_66 [i_8] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_3)))) : (((((/* implicit */_Bool) var_10)) ? (var_11) : (var_6))));
                        }
                    } 
                } 
                var_28 *= ((/* implicit */unsigned int) var_2);
                var_29 = ((unsigned short) arr_20 [i_8 - 1] [i_11 - 1] [i_11 + 1] [i_11 - 1] [i_11 - 1]);
            }
            for (int i_18 = 0; i_18 < 10; i_18 += 3) 
            {
                arr_69 [i_8 - 1] [i_9] [i_8] = ((/* implicit */short) arr_11 [i_9] [12LL] [(unsigned short)13] [i_18]);
                var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)32750))));
                /* LoopSeq 1 */
                for (unsigned int i_19 = 3; i_19 < 8; i_19 += 1) 
                {
                    arr_73 [i_8] = ((/* implicit */unsigned long long int) ((unsigned int) -2147483647));
                    var_31 = var_12;
                    var_32 -= ((/* implicit */int) var_7);
                }
                var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) : (-328297693899074169LL)))) ? (var_4) : (((/* implicit */unsigned long long int) arr_72 [2ULL] [2ULL])))))));
            }
            for (long long int i_20 = 3; i_20 < 9; i_20 += 1) 
            {
                var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */long long int) var_10))))) * (var_4))))));
                /* LoopNest 2 */
                for (unsigned long long int i_21 = 0; i_21 < 10; i_21 += 1) 
                {
                    for (unsigned char i_22 = 1; i_22 < 7; i_22 += 1) 
                    {
                        {
                            var_35 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_8] [i_8] [i_20] [i_21] [i_20]))) : (var_11)));
                            var_36 *= ((/* implicit */int) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) -18014398509481984LL)) : (arr_37 [8U] [i_21] [i_9] [8U])))));
                            var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [6ULL])) ? (var_10) : (((/* implicit */int) var_9)))))));
                        }
                    } 
                } 
                arr_81 [i_8] [i_9] [i_8] = ((/* implicit */unsigned int) var_3);
            }
            arr_82 [i_8] [i_8] = ((/* implicit */unsigned int) var_14);
            var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 16128U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (var_2)));
            var_39 = ((/* implicit */short) arr_61 [i_9] [i_8]);
        }
    }
    for (unsigned short i_23 = 1; i_23 < 22; i_23 += 1) 
    {
        arr_87 [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (min((arr_83 [i_23 + 2] [i_23 - 1]), (arr_83 [i_23 + 2] [i_23 - 1]))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_10)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)61))) : (arr_85 [i_23]))))))));
        arr_88 [i_23 + 2] [i_23] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_13)) ? (arr_84 [i_23 + 1]) : (((/* implicit */unsigned int) 1901533954)))) << (((((((/* implicit */long long int) arr_85 [i_23 + 2])) + (var_6))) - (6699770516360441710LL)))));
    }
    /* vectorizable */
    for (unsigned char i_24 = 0; i_24 < 20; i_24 += 1) 
    {
        var_40 = var_6;
        var_41 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)24241)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_24] [i_24])))));
        var_42 = ((/* implicit */unsigned long long int) ((long long int) var_13));
        arr_92 [i_24] = ((/* implicit */unsigned char) var_12);
    }
    var_43 = ((/* implicit */unsigned short) var_10);
    var_44 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) != (16156816076968351204ULL)));
}
