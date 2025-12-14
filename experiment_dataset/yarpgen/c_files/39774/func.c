/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39774
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
    /* vectorizable */
    for (unsigned long long int i_0 = 4; i_0 < 24; i_0 += 3) /* same iter space */
    {
        var_10 = ((/* implicit */unsigned short) ((arr_1 [i_0 - 2]) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 7157606412927747492LL)))))));
        var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)223)) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_4)))) : (((((/* implicit */int) arr_2 [i_0] [i_0])) + (((/* implicit */int) arr_1 [i_0 - 4]))))));
    }
    for (unsigned long long int i_1 = 4; i_1 < 24; i_1 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */signed char) (_Bool)1);
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_2 = 2; i_2 < 24; i_2 += 4) /* same iter space */
        {
            arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_2]);
            var_13 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)62)) ? (375086213) : (((/* implicit */int) arr_5 [i_2 - 2] [i_1 - 3]))));
            var_14 = arr_0 [i_1 - 1];
            /* LoopSeq 2 */
            for (int i_3 = 1; i_3 < 24; i_3 += 3) 
            {
                var_15 = ((/* implicit */long long int) max((var_15), (((arr_3 [i_1 - 4]) % (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 3])))))));
                arr_11 [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) arr_8 [i_1 + 1] [i_2 - 2] [21ULL])) / (var_5)));
                arr_12 [i_1] [i_1] = ((arr_0 [i_1 - 4]) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2]))) > (arr_3 [i_3])))));
            }
            for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                var_16 ^= ((((/* implicit */int) arr_2 [i_1 - 1] [i_2 - 2])) - (((((/* implicit */int) (short)-23092)) & (((/* implicit */int) arr_14 [(_Bool)1] [i_1])))));
                var_17 = ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_2])) && (((/* implicit */_Bool) ((((arr_3 [i_4]) + (9223372036854775807LL))) << (((((/* implicit */int) arr_1 [i_1])) - (1)))))));
                arr_15 [i_1] [i_1] [i_2] [i_1] = (((-(((/* implicit */int) (short)-18595)))) | (arr_8 [i_2] [i_2] [i_1]));
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_6 = 1; i_6 < 24; i_6 += 3) 
                    {
                        var_18 = ((/* implicit */short) ((int) ((arr_8 [i_1] [i_1] [i_1]) / (((/* implicit */int) (_Bool)1)))));
                        var_19 *= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_2 [i_1 - 2] [i_2]))));
                        var_20 = ((/* implicit */unsigned short) arr_18 [i_1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_1]);
                        var_21 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_16 [i_1 - 3] [i_2] [i_5] [i_5])) : (((/* implicit */int) arr_6 [i_1] [i_2])))) != (((/* implicit */int) var_7))));
                    }
                    arr_21 [i_1] [(_Bool)1] [i_1] [i_5] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (375086201)));
                }
            }
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_8 [i_1 - 2] [16LL] [i_2 + 1]))));
        }
        for (int i_7 = 2; i_7 < 24; i_7 += 4) /* same iter space */
        {
            var_23 ^= ((/* implicit */signed char) (((_Bool)1) ? (max((((/* implicit */unsigned long long int) arr_20 [i_1 - 1] [i_1 - 3] [i_1] [i_1 - 1] [i_7 - 1] [i_7])), (21ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_7])))));
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_24 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-123)), ((unsigned short)13)))) ? (((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */int) (unsigned char)106)) : (((/* implicit */int) (signed char)-123)))) : ((+(((/* implicit */int) arr_16 [i_7] [i_1] [i_1] [(short)1]))))))), (min((((/* implicit */long long int) -1)), (8627988597342914708LL)))));
                        /* LoopSeq 2 */
                        for (unsigned short i_10 = 1; i_10 < 24; i_10 += 2) 
                        {
                            arr_30 [i_1] [i_1] [i_8] [i_8] [i_1] [i_10] [i_10 + 1] = ((/* implicit */int) ((unsigned char) min((arr_0 [i_1 - 4]), (((/* implicit */long long int) ((((((/* implicit */int) arr_10 [22] [i_8] [i_1] [i_1])) + (2147483647))) << (((((/* implicit */int) var_0)) - (60)))))))));
                            arr_31 [i_1] [i_7] [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) -375086201)) ? (((/* implicit */int) (short)-5913)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) arr_9 [i_7 - 2] [i_10 - 1])) < (((/* implicit */int) (unsigned short)65535)))))));
                        }
                        /* vectorizable */
                        for (long long int i_11 = 0; i_11 < 25; i_11 += 2) 
                        {
                            arr_35 [i_1] [i_8] = (i_1 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_17 [i_1] [i_1] [i_9] [i_11]) ? (((/* implicit */long long int) -1)) : (arr_24 [i_1] [i_9] [i_11])))) ? (((arr_24 [i_1] [i_8] [i_1]) << (((/* implicit */int) arr_26 [i_1])))) : (((/* implicit */long long int) ((((/* implicit */int) arr_26 [i_1])) << (((131071LL) - (131061LL))))))))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_17 [i_1] [i_1] [i_9] [i_11]) ? (((/* implicit */long long int) -1)) : (arr_24 [i_1] [i_9] [i_11])))) ? (((((arr_24 [i_1] [i_8] [i_1]) + (9223372036854775807LL))) << (((/* implicit */int) arr_26 [i_1])))) : (((/* implicit */long long int) ((((/* implicit */int) arr_26 [i_1])) << (((131071LL) - (131061LL)))))))));
                            var_25 -= ((/* implicit */short) (unsigned char)32);
                        }
                    }
                } 
            } 
        }
        for (int i_12 = 2; i_12 < 24; i_12 += 4) /* same iter space */
        {
            arr_38 [i_1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) arr_28 [i_1 - 1] [i_1 - 3] [i_1 - 2] [i_12 - 2])) | (arr_8 [i_12] [i_12 + 1] [i_12]))) ^ (max((((/* implicit */int) arr_10 [i_1 - 3] [i_1 - 3] [20ULL] [i_12 + 1])), ((~(((/* implicit */int) arr_37 [i_12 - 2] [i_1] [i_1 - 1]))))))));
            /* LoopSeq 3 */
            for (int i_13 = 0; i_13 < 25; i_13 += 2) /* same iter space */
            {
                arr_41 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)112))));
                arr_42 [i_1] = ((/* implicit */unsigned long long int) ((signed char) arr_20 [i_1] [i_1] [i_1] [i_12] [i_13] [i_13]));
                var_26 = ((/* implicit */_Bool) arr_29 [i_1]);
            }
            /* vectorizable */
            for (int i_14 = 0; i_14 < 25; i_14 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_15 = 0; i_15 < 25; i_15 += 4) 
                {
                    for (int i_16 = 3; i_16 < 22; i_16 += 3) 
                    {
                        {
                            var_27 += ((((/* implicit */_Bool) arr_36 [i_15])) ? (((/* implicit */int) arr_36 [i_15])) : (((/* implicit */int) (_Bool)1)));
                            var_28 = ((/* implicit */_Bool) min((var_28), (((((/* implicit */_Bool) -871098580)) || (((/* implicit */_Bool) arr_39 [i_16 - 2]))))));
                            var_29 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_10 [i_16] [i_14] [i_12 - 2] [i_1])) ? (arr_40 [i_1] [i_12] [i_15] [i_16]) : (((/* implicit */int) var_7)))));
                        }
                    } 
                } 
                var_30 &= ((((/* implicit */_Bool) -2648002486830988694LL)) ? (((/* implicit */int) arr_44 [i_12] [i_12])) : (((/* implicit */int) arr_44 [i_12] [i_14])));
                /* LoopNest 2 */
                for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                {
                    for (long long int i_18 = 2; i_18 < 23; i_18 += 4) 
                    {
                        {
                            arr_56 [i_1] [i_12 - 2] [6ULL] [(unsigned char)24] [i_1] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (0))))));
                            var_31 &= ((((/* implicit */_Bool) ((unsigned short) arr_55 [i_1] [i_12] [i_14]))) ? (var_8) : (arr_29 [i_14]));
                        }
                    } 
                } 
                var_32 = ((/* implicit */int) (short)32763);
            }
            /* vectorizable */
            for (int i_19 = 0; i_19 < 25; i_19 += 2) /* same iter space */
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_20 = 4; i_20 < 24; i_20 += 3) 
                {
                    arr_64 [i_20] [i_20] [i_1] [i_1] [(signed char)9] [i_1 - 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_32 [i_1] [i_1] [i_1] [i_19] [i_1] [(unsigned short)12])) : (((/* implicit */int) ((var_2) >= (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
                    var_33 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_12] [i_20 - 1])) ? (((/* implicit */int) arr_27 [0ULL] [i_12] [i_19] [i_19])) : (((/* implicit */int) arr_27 [i_20] [i_12] [i_12] [0]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (7896951462243788274LL) : (((/* implicit */long long int) var_1)))))));
                    var_34 -= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [20LL] [i_12] [i_19]))) > (arr_50 [i_1] [i_1] [i_1] [i_20]))));
                }
                for (long long int i_21 = 0; i_21 < 25; i_21 += 1) /* same iter space */
                {
                    var_35 = (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((((arr_27 [i_1] [i_1] [i_1] [i_1]) ? (arr_46 [i_21] [i_21] [i_21] [i_21]) : (arr_55 [i_1 - 4] [i_1] [i_1]))) - (9782921471367647522ULL))));
                    arr_68 [i_1] [i_19] [i_1] = ((/* implicit */int) arr_53 [i_1] [i_12] [i_19] [i_21]);
                }
                for (long long int i_22 = 0; i_22 < 25; i_22 += 1) /* same iter space */
                {
                    var_36 -= ((/* implicit */signed char) arr_10 [i_12 - 2] [i_1 - 2] [i_1] [i_1 - 1]);
                    var_37 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (arr_40 [i_1] [4ULL] [(_Bool)1] [i_22])));
                }
                for (long long int i_23 = 0; i_23 < 25; i_23 += 1) /* same iter space */
                {
                    var_38 = ((_Bool) arr_10 [i_1] [i_1] [i_19] [i_19]);
                    arr_73 [i_1] [(_Bool)1] [i_23] = ((/* implicit */unsigned char) arr_57 [i_1] [i_1] [i_23]);
                }
                var_39 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_51 [i_12] [i_12 + 1] [i_12 + 1] [i_12] [i_12]))))) ? (((((/* implicit */_Bool) var_1)) ? (arr_71 [2] [i_12]) : (((/* implicit */long long int) arr_40 [i_1] [i_12] [i_1] [i_1])))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (short)5509)) : (((/* implicit */int) var_7))))));
                /* LoopSeq 1 */
                for (int i_24 = 3; i_24 < 24; i_24 += 1) 
                {
                    var_40 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_0)))))) ^ (((((/* implicit */_Bool) arr_54 [i_19] [i_19] [i_19] [i_24] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_2)))));
                    var_41 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)50156)) || (((/* implicit */_Bool) (unsigned char)73))));
                    arr_77 [i_24] [i_1] [i_19] [i_12] [i_1] [i_1] = ((/* implicit */unsigned char) var_7);
                }
                arr_78 [i_1] [i_1] [1] = ((/* implicit */_Bool) (+(arr_59 [i_1])));
            }
            arr_79 [i_12] [i_12] [i_1] = (_Bool)1;
            var_42 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_22 [(unsigned char)10] [i_12 + 1])) & (((((/* implicit */int) arr_18 [i_12] [i_12 - 1] [i_12 + 1] [i_12 - 1] [i_12])) << (((/* implicit */int) arr_18 [i_12] [i_12 + 1] [i_12] [i_1] [i_12]))))));
            var_43 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_25 = 0; i_25 < 25; i_25 += 3) 
        {
            var_44 += var_9;
            var_45 -= ((/* implicit */signed char) (((_Bool)1) || (((/* implicit */_Bool) -1))));
        }
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
        {
            arr_84 [i_1] [i_26] = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) ((((/* implicit */int) arr_16 [i_1] [(unsigned char)2] [i_1] [i_26])) <= (((/* implicit */int) arr_10 [i_1] [16] [i_26] [i_26]))))))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)24877)) && (((/* implicit */_Bool) arr_24 [i_1] [i_26] [i_1 - 4])))))));
            var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_1] [i_1] [i_1])) ? (arr_3 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_1] [(_Bool)1] [i_1] [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_4)) ? (-5259842196336606829LL) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [18]))))))) != (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)249))))))))));
            var_47 = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) arr_26 [i_1])) : (arr_52 [(_Bool)1] [i_1] [i_1] [i_26] [i_26] [i_26]))), (min((((/* implicit */int) arr_80 [i_1] [i_1])), (-20))))) >> (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))));
        }
        /* LoopNest 3 */
        for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
        {
            for (signed char i_28 = 0; i_28 < 25; i_28 += 1) 
            {
                for (unsigned char i_29 = 2; i_29 < 24; i_29 += 1) 
                {
                    {
                        var_48 = ((/* implicit */int) min((var_48), (((((((/* implicit */_Bool) arr_63 [i_1 - 1])) ? (((/* implicit */int) arr_63 [i_1 - 1])) : (((/* implicit */int) (signed char)-93)))) + ((+(((/* implicit */int) arr_63 [i_1 - 4]))))))));
                        var_49 = arr_29 [i_1];
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_30 = 3; i_30 < 24; i_30 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_31 = 0; i_31 < 25; i_31 += 2) 
            {
                var_50 *= ((/* implicit */signed char) (!((_Bool)1)));
                arr_99 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) arr_34 [i_30 - 1] [(unsigned char)16] [i_1 + 1] [(unsigned char)16] [i_1 - 4] [i_1] [i_31])) ? (((/* implicit */int) arr_34 [i_30 - 2] [i_30 - 2] [i_1 - 2] [i_30] [(_Bool)1] [i_1] [i_1 - 2])) : (((/* implicit */int) arr_34 [i_30 - 1] [i_30 - 1] [i_1 - 2] [i_31] [i_1 - 2] [i_30 - 3] [i_30])));
                var_51 = ((/* implicit */int) ((var_8) - (((/* implicit */long long int) ((((/* implicit */int) arr_67 [8ULL] [i_30] [i_30] [i_30])) - (((/* implicit */int) var_9)))))));
            }
            var_52 = ((/* implicit */unsigned long long int) arr_67 [i_1 - 1] [i_1 + 1] [i_30 - 3] [i_30 - 3]);
            var_53 = ((/* implicit */int) ((var_5) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [i_1]))) == (1030488515313901329ULL)))))));
        }
        /* vectorizable */
        for (short i_32 = 2; i_32 < 24; i_32 += 4) 
        {
            var_54 -= ((/* implicit */short) arr_83 [i_1 - 4] [i_32] [i_32 - 1]);
            arr_102 [i_1] [i_32] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_76 [i_1])) ? (arr_76 [i_1]) : (arr_76 [i_1])));
        }
    }
    /* LoopNest 2 */
    for (int i_33 = 4; i_33 < 12; i_33 += 4) 
    {
        for (short i_34 = 0; i_34 < 13; i_34 += 2) 
        {
            {
                var_55 -= ((/* implicit */unsigned char) arr_70 [i_33 - 4] [i_33]);
                arr_109 [i_33] = ((((((/* implicit */_Bool) arr_67 [(_Bool)1] [(signed char)23] [i_33 - 2] [i_33])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_17 [i_34] [i_33] [i_33] [i_33 - 3])))) >= (((/* implicit */int) arr_104 [i_33 - 2] [i_33 - 2])));
                var_56 = ((/* implicit */unsigned short) arr_48 [i_33] [i_33] [i_33] [i_33] [i_33]);
                var_57 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (2855358690895677779ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))) ? (((/* implicit */int) arr_28 [i_33 - 2] [i_33] [i_33] [i_33 - 1])) : (arr_47 [(unsigned short)11] [i_34])))) ? (min((2658412523583964207ULL), (arr_46 [5] [i_33 - 4] [i_34] [i_34]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -982628172030705175LL)) || (((/* implicit */_Bool) arr_10 [i_33 + 1] [i_33] [i_33 - 1] [i_33 + 1]))))))));
            }
        } 
    } 
}
