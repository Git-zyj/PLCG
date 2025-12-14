/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51952
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
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_19 = ((/* implicit */short) var_13);
            /* LoopSeq 4 */
            for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0 - 2])) ? (((/* implicit */int) arr_4 [i_2 - 2])) : (((/* implicit */int) var_14))));
                            arr_13 [5] [i_1] [i_2] [i_3] [i_4] = var_0;
                            var_20 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)8238))));
                            arr_14 [i_4] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0 + 3])) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                        }
                    } 
                } 
                var_21 = ((((/* implicit */_Bool) arr_3 [i_2 + 1] [i_2 - 2])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2 + 1] [i_2 + 1]))));
                arr_15 [i_2] [i_0] [i_0] [i_0] = var_4;
                var_22 = ((/* implicit */unsigned char) arr_6 [i_0] [i_0 + 1] [i_2 + 2] [11ULL]);
            }
            for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                /* LoopSeq 4 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_23 = ((/* implicit */int) var_14);
                    arr_20 [i_5] [i_1] [i_5] [7U] [(unsigned char)8] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((long long int) arr_1 [i_0 - 3]))));
                }
                for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    var_24 *= ((unsigned int) arr_1 [i_5]);
                    arr_24 [i_1] [i_5] [0ULL] [i_7] [i_7] = ((/* implicit */short) ((arr_18 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_7] [i_0 - 3]) ? (var_6) : (var_6)));
                    arr_25 [(_Bool)1] [i_1] [(unsigned short)2] [i_5] = ((/* implicit */unsigned char) var_0);
                    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_22 [i_0 + 2] [i_1] [i_1] [i_1]))));
                    arr_26 [i_5] [5LL] [i_5] [i_7] [i_1] [i_5] = ((/* implicit */long long int) var_14);
                }
                for (long long int i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    arr_30 [i_5] [9ULL] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) arr_23 [i_0] [i_0] [i_5] [(short)5] [i_0 + 1] [i_1]);
                    arr_31 [i_5] = (~(var_8));
                }
                for (unsigned long long int i_9 = 2; i_9 < 10; i_9 += 2) 
                {
                    var_26 &= ((((/* implicit */_Bool) var_6)) ? (var_8) : (var_15));
                    var_27 = ((/* implicit */unsigned int) var_16);
                    var_28 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0] [i_0 + 3]))));
                    arr_34 [i_5] = var_12;
                }
                var_29 = ((/* implicit */unsigned int) var_5);
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    for (int i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        {
                            arr_39 [i_0] [i_0 - 1] [i_1] [i_5] [i_10] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_0] [(unsigned short)3] [i_5]))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_0 - 2] [i_0 - 2] [i_0 - 3] [i_0 - 3] [i_5])))));
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))) ? (((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned int) var_5)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_13))))));
                        }
                    } 
                } 
            }
            for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_13 = 1; i_13 < 11; i_13 += 1) 
                {
                    for (unsigned int i_14 = 0; i_14 < 12; i_14 += 3) 
                    {
                        {
                            arr_47 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 3] [i_12 + 1]))) | (var_18)));
                            var_31 = ((/* implicit */long long int) (~(((/* implicit */int) var_3))));
                            var_32 = ((/* implicit */short) (!(arr_42 [i_12 + 1] [i_0 - 3])));
                        }
                    } 
                } 
                var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) var_12))));
                var_34 = ((arr_32 [10ULL] [i_1] [i_12]) % (((/* implicit */long long int) ((/* implicit */int) ((short) var_7)))));
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                arr_50 [i_15] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_46 [i_0 - 1])) ? (((/* implicit */int) var_11)) : (arr_46 [i_0 - 1])));
                arr_51 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_15] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_48 [i_0] [i_0 - 2] [7U] [i_15]))));
            }
        }
        for (unsigned int i_16 = 2; i_16 < 11; i_16 += 3) 
        {
            /* LoopNest 2 */
            for (short i_17 = 0; i_17 < 12; i_17 += 2) 
            {
                for (unsigned int i_18 = 0; i_18 < 12; i_18 += 2) 
                {
                    {
                        var_35 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_41 [1U] [(unsigned char)3] [i_16 + 1] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 - 1] [i_0] [i_16] [i_17] [i_18]))) : (var_12))));
                        var_36 = ((((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_0 + 2] [3U] [i_17] [i_18])) || (((/* implicit */_Bool) var_15))))) >= (((/* implicit */int) arr_10 [i_0 + 3] [i_16 + 1] [i_18] [i_18] [i_18])));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_19 = 0; i_19 < 12; i_19 += 2) 
            {
                for (unsigned char i_20 = 1; i_20 < 10; i_20 += 3) 
                {
                    for (unsigned short i_21 = 0; i_21 < 12; i_21 += 2) 
                    {
                        {
                            var_37 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_20 + 2] [i_16 - 2])) ? (((/* implicit */int) arr_3 [i_20 - 1] [i_16 + 1])) : (((/* implicit */int) var_0))));
                            arr_67 [i_16] = (+(18446744073709551588ULL));
                            var_38 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (2436384153U) : (4253778486U)));
                        }
                    } 
                } 
            } 
            arr_68 [i_16] [i_16] = ((/* implicit */unsigned int) ((unsigned long long int) var_12));
            /* LoopNest 2 */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                for (unsigned long long int i_23 = 1; i_23 < 10; i_23 += 2) 
                {
                    {
                        arr_73 [i_0 - 3] [i_16 - 1] [i_16] [i_23] = var_15;
                        var_39 = ((/* implicit */unsigned char) (+(arr_9 [i_0 + 3] [i_16 + 1] [i_23 + 2])));
                        var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_23 + 1])) ? (((/* implicit */int) arr_4 [i_0 + 3])) : (((/* implicit */int) arr_4 [i_23 + 1]))));
                    }
                } 
            } 
        }
        var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)27532)) ? (3194983665U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61331))))))));
        arr_74 [i_0] &= ((/* implicit */long long int) (-(((((/* implicit */_Bool) (short)-32765)) ? (3439697931U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)9686)))))));
    }
    for (unsigned int i_24 = 3; i_24 < 9; i_24 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
        {
            for (short i_26 = 2; i_26 < 9; i_26 += 2) 
            {
                for (int i_27 = 0; i_27 < 12; i_27 += 4) 
                {
                    {
                        arr_85 [i_26] [i_26] [i_26] [i_26 - 2] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_0 [i_24 + 1]))))));
                        var_42 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_78 [(unsigned char)6]) / (arr_9 [i_26 - 2] [i_24 - 2] [i_26]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (short i_28 = 0; i_28 < 12; i_28 += 2) 
        {
            for (unsigned int i_29 = 2; i_29 < 11; i_29 += 2) 
            {
                for (long long int i_30 = 0; i_30 < 12; i_30 += 2) 
                {
                    {
                        var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6237991920752092102LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (6237991920752092121LL)))) || (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) -1394510757418222854LL)) ? (3035257735U) : (3439697931U)))))));
                        /* LoopSeq 3 */
                        for (long long int i_31 = 0; i_31 < 12; i_31 += 2) 
                        {
                            var_44 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_91 [i_24 + 1] [i_28] [i_24] [(_Bool)1] [i_31] [i_28])) ? (((/* implicit */int) arr_91 [i_24 + 1] [i_24 - 3] [i_24] [6U] [6U] [i_24])) : (((/* implicit */int) arr_91 [i_24 - 3] [i_28] [i_29] [i_30] [i_31] [i_29])))) != (((/* implicit */int) ((_Bool) var_16)))));
                            arr_95 [i_24 + 2] [4U] [2U] [4U] [2U] [7LL] [3LL] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_16)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_24] [i_24 + 3] [i_24 + 3] [i_29 + 1] [i_29 + 1]))))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_24] [i_24 + 1] [i_24] [i_29 - 1] [i_30])))));
                        }
                        for (unsigned char i_32 = 0; i_32 < 12; i_32 += 4) /* same iter space */
                        {
                            var_45 = ((/* implicit */_Bool) min((arr_17 [i_28] [i_29 - 1] [i_30] [i_32]), (((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) var_8))))) ? (min((((/* implicit */unsigned int) var_16)), (arr_81 [i_30] [i_29] [i_28]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                            var_46 |= ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_24])) ? (((/* implicit */long long int) ((/* implicit */int) min((var_16), (((/* implicit */short) var_11)))))) : (min((var_1), (((/* implicit */long long int) var_13)))))));
                            arr_100 [i_24] [i_32] [i_29] [i_30] [i_30] [i_24] [i_29] = ((/* implicit */short) min((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (min((var_8), (((/* implicit */unsigned int) arr_37 [i_32])))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))))));
                            var_47 -= (~(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_88 [i_24 + 1])))));
                        }
                        for (unsigned char i_33 = 0; i_33 < 12; i_33 += 4) /* same iter space */
                        {
                            arr_104 [(short)0] [i_28] [i_29 + 1] [i_30] [i_29] [(unsigned short)1] [i_33] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [11] [i_24 - 1] [i_33] [11])) ? (((/* implicit */int) arr_37 [i_30])) : (((/* implicit */int) arr_60 [i_29] [i_24 - 3] [i_30]))))) ? (((((/* implicit */_Bool) ((unsigned int) arr_41 [11U] [i_30] [i_30] [i_30]))) ? (arr_58 [i_24] [i_24 - 3]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_62 [i_24])) ? (((/* implicit */int) arr_77 [i_24])) : (((/* implicit */int) arr_37 [i_33]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_4))))))))));
                            arr_105 [i_24] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) ^ (max((arr_79 [i_29 - 2]), (((/* implicit */unsigned long long int) var_5))))));
                            var_48 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_72 [i_24] [i_24] [i_30]) : (((/* implicit */unsigned long long int) arr_29 [i_29 - 1] [i_29 - 1] [i_29]))))) ? (((/* implicit */unsigned long long int) arr_21 [i_24 - 3])) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_2))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))));
                            var_49 &= ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))))), (max((((long long int) var_6)), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [(_Bool)1])) ? (((/* implicit */int) arr_49 [i_29])) : (((/* implicit */int) arr_44 [i_24] [i_24] [i_24] [i_29] [i_24] [i_24])))))))));
                            arr_106 [i_24 - 2] [i_24] [i_24] [i_24] [i_24 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((short) -8166829868886704973LL)))))) ? (max(((-(var_6))), (((/* implicit */unsigned long long int) ((526698679U) + (1302998985U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_29])))));
                        }
                        arr_107 [i_24] [i_28] [i_24] [i_29] [i_30] &= ((/* implicit */unsigned short) var_14);
                        var_50 = ((/* implicit */int) ((((/* implicit */_Bool) var_18)) ? (var_2) : (((var_9) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_34 = 2; i_34 < 14; i_34 += 2) 
    {
        var_51 |= ((/* implicit */long long int) var_9);
        arr_110 [i_34 - 2] = ((/* implicit */long long int) arr_109 [i_34 - 2]);
        arr_111 [i_34] = ((/* implicit */long long int) (-((+(((/* implicit */int) var_10))))));
    }
    var_52 = max(((-(var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) << (((var_15) - (3423308174U)))))));
    var_53 = ((/* implicit */unsigned long long int) ((((_Bool) ((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_15)))))));
}
