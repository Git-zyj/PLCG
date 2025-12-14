/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42875
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)91))) ^ (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_15 = ((/* implicit */long long int) arr_0 [i_0]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (short i_3 = 1; i_3 < 18; i_3 += 3) 
                {
                    for (short i_4 = 2; i_4 < 20; i_4 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) ((signed char) (-(((/* implicit */int) var_4)))));
                            var_17 = ((/* implicit */short) ((((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) << (((((/* implicit */int) arr_8 [i_0] [i_0])) - (28808))))) >> (((((/* implicit */int) var_7)) - (43540)))));
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_1 + 2])) != (((/* implicit */int) ((unsigned short) arr_12 [i_1] [i_0])))));
            /* LoopSeq 1 */
            for (short i_5 = 2; i_5 < 18; i_5 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_6 = 1; i_6 < 20; i_6 += 4) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned short) max((var_19), (var_4)));
                    var_20 = -7460867381511683381LL;
                    var_21 -= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1 + 1] [i_6 + 1]))) ^ (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_5]))) : (arr_0 [i_0])))));
                }
                for (unsigned int i_7 = 1; i_7 < 20; i_7 += 4) /* same iter space */
                {
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) arr_4 [i_0] [i_0]))));
                    var_23 ^= arr_2 [i_5] [i_1 - 2] [i_7];
                    var_24 = ((/* implicit */long long int) arr_14 [i_0] [i_0] [i_5] [i_5]);
                }
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        {
                            var_25 &= ((/* implicit */unsigned int) ((((long long int) (unsigned char)187)) / (((/* implicit */long long int) arr_2 [i_8] [i_0] [i_8]))));
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1924144574U)) ? (-1388597411) : (((/* implicit */int) (_Bool)0)))))));
                            var_27 = ((/* implicit */unsigned int) -3865712335400599679LL);
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((short) var_5)))));
            }
            /* LoopSeq 1 */
            for (long long int i_10 = 1; i_10 < 18; i_10 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 21; i_11 += 4) 
                {
                    for (unsigned int i_12 = 0; i_12 < 21; i_12 += 1) 
                    {
                        {
                            var_29 += ((/* implicit */unsigned int) arr_32 [i_0 + 2] [i_1 - 1] [i_10] [i_11]);
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) 1396259038919706878LL))));
                            var_31 &= ((/* implicit */short) var_7);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_13 = 3; i_13 < 19; i_13 += 1) 
                {
                    for (long long int i_14 = 3; i_14 < 19; i_14 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned int) var_8);
                            arr_38 [i_0] [i_0] [i_10 + 1] [i_10 + 3] [i_13] [i_13] [i_14 - 1] = ((/* implicit */_Bool) (~(var_13)));
                        }
                    } 
                } 
            }
        }
    }
    for (short i_15 = 0; i_15 < 10; i_15 += 1) /* same iter space */
    {
        var_33 = ((/* implicit */short) ((int) ((long long int) max((((/* implicit */long long int) var_5)), (9223372036854775807LL)))));
        /* LoopSeq 3 */
        for (unsigned int i_16 = 2; i_16 < 9; i_16 += 2) 
        {
            var_34 ^= arr_43 [i_16] [i_16];
            arr_44 [i_16 + 1] = ((/* implicit */unsigned char) max((-6562725824990079976LL), (((/* implicit */long long int) var_4))));
        }
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_18 = 0; i_18 < 10; i_18 += 3) 
            {
                for (unsigned int i_19 = 2; i_19 < 9; i_19 += 3) 
                {
                    {
                        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((((/* implicit */int) ((short) var_13))) / (((((/* implicit */_Bool) (unsigned char)176)) ? (((/* implicit */int) arr_33 [i_19 + 1] [i_19 + 1] [i_19 - 1] [i_19 - 2] [i_19 - 2])) : (((/* implicit */int) arr_33 [i_19 - 1] [i_19 - 1] [i_19 - 1] [i_19 - 2] [i_19 - 2])))))))));
                        arr_51 [i_17] [i_17] [i_19] [i_17] = 1712743994U;
                        var_36 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_20 = 1; i_20 < 8; i_20 += 1) 
            {
                for (signed char i_21 = 0; i_21 < 10; i_21 += 2) 
                {
                    {
                        arr_59 [i_20] [i_17] [i_21] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)32767))));
                        arr_60 [i_15] [i_15] [i_20] [i_21] |= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) min((((/* implicit */long long int) arr_3 [i_15] [i_15])), (var_6)))))) & (arr_19 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21])));
                        var_37 = ((/* implicit */int) (!(((/* implicit */_Bool) ((short) 5453272820552945999LL)))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                for (short i_23 = 0; i_23 < 10; i_23 += 3) 
                {
                    for (unsigned char i_24 = 1; i_24 < 7; i_24 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)0)))))));
                            var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) ((((((long long int) arr_14 [i_15] [6U] [i_23] [6U])) >= (((/* implicit */long long int) ((/* implicit */int) ((signed char) (short)24889)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))))));
                        }
                    } 
                } 
            } 
            var_40 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-5)) + (2147483647))) << (((var_12) - (778585153U)))))), ((~(arr_14 [i_15] [(unsigned short)8] [i_17] [i_15])))));
            /* LoopNest 3 */
            for (unsigned int i_25 = 0; i_25 < 10; i_25 += 3) 
            {
                for (short i_26 = 3; i_26 < 8; i_26 += 3) 
                {
                    for (unsigned int i_27 = 1; i_27 < 7; i_27 += 1) 
                    {
                        {
                            var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)1)))))));
                            var_42 &= ((/* implicit */int) (+(((((/* implicit */_Bool) max((((/* implicit */long long int) var_10)), (3694906217215860245LL)))) ? (((2370822722U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2410))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [20U] [i_17] [i_17] [i_17] [i_17] [i_17])))))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_28 = 1; i_28 < 6; i_28 += 1) 
        {
            /* LoopNest 3 */
            for (short i_29 = 1; i_29 < 9; i_29 += 3) 
            {
                for (long long int i_30 = 0; i_30 < 10; i_30 += 2) 
                {
                    for (unsigned short i_31 = 0; i_31 < 10; i_31 += 3) 
                    {
                        {
                            arr_84 [i_29] [i_28] [i_28] [i_30] [i_31] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_81 [i_15] [i_15] [i_15] [i_15])) ? (1924144594U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_81 [i_31] [i_30] [i_28 - 1] [i_15]))))) << (((max((((/* implicit */unsigned int) arr_81 [i_15] [i_15] [i_15] [i_15])), (17U))) - (4294967145U)))));
                            var_43 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) == (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)29087)) % (((/* implicit */int) (signed char)127))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)69))) % (2370822721U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned short)0))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_32 = 3; i_32 < 7; i_32 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_33 = 0; i_33 < 10; i_33 += 1) 
                {
                    for (short i_34 = 2; i_34 < 8; i_34 += 4) 
                    {
                        {
                            var_44 = ((/* implicit */signed char) 6950908308628170417LL);
                            var_45 = ((/* implicit */signed char) ((_Bool) min((2971471534U), (((/* implicit */unsigned int) arr_83 [i_34] [i_32] [i_34] [i_34 - 1] [i_34 + 2])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_35 = 3; i_35 < 9; i_35 += 4) 
                {
                    for (long long int i_36 = 1; i_36 < 8; i_36 += 3) 
                    {
                        {
                            arr_100 [i_15] [i_15] [i_32] [i_32] [i_15] = ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) var_6)))));
                            var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) 2370822721U)))))) > (arr_46 [i_35 - 1] [i_15]))))));
                            var_47 = max((((((/* implicit */int) arr_99 [i_36 + 2] [i_36] [i_36 + 1] [i_36] [i_36])) - (((/* implicit */int) arr_99 [i_36] [i_36 + 1] [i_36 + 2] [i_36] [i_36])))), (((((/* implicit */_Bool) arr_99 [i_36] [i_36] [i_36 + 1] [i_36] [i_36])) ? (((/* implicit */int) arr_99 [i_36] [i_36] [i_36 + 1] [i_36] [i_36])) : (((/* implicit */int) arr_99 [i_36] [i_36 + 1] [i_36 - 1] [i_36] [i_36])))));
                            arr_101 [i_32] [i_28 + 2] [i_28] [i_28 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) 1924144579U))) ? (((/* implicit */int) ((unsigned short) ((long long int) 0)))) : (((/* implicit */int) arr_76 [i_35]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_37 = 0; i_37 < 10; i_37 += 3) 
                {
                    for (long long int i_38 = 4; i_38 < 8; i_38 += 4) 
                    {
                        {
                            var_48 = ((/* implicit */signed char) -1762825255);
                            arr_107 [i_15] [i_15] [i_15] [i_15] [i_32] [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((~(((/* implicit */int) arr_78 [i_32])))), (((/* implicit */int) arr_78 [i_32]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 297064857U)))) : ((-(651633950U)))));
                            var_49 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1924144573U)) && (((/* implicit */_Bool) (signed char)96))));
                        }
                    } 
                } 
            }
        }
        var_50 = ((/* implicit */long long int) (unsigned short)29087);
    }
    for (short i_39 = 0; i_39 < 10; i_39 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_40 = 1; i_40 < 9; i_40 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_41 = 0; i_41 < 10; i_41 += 4) 
            {
                for (long long int i_42 = 1; i_42 < 7; i_42 += 3) 
                {
                    {
                        var_51 = ((/* implicit */long long int) ((signed char) arr_82 [i_39] [i_40] [i_42 + 2]));
                        arr_118 [i_40] [i_41] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)2305)) ? (((/* implicit */unsigned int) ((int) (signed char)-91))) : (4294967295U)));
                        var_52 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65532)) || (((/* implicit */_Bool) -1537180893))));
                        arr_119 [i_39] [i_40 - 1] [i_39] [i_40] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_27 [i_39] [i_41] [i_42])) < (((/* implicit */int) (short)32767))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_43 = 0; i_43 < 10; i_43 += 2) 
            {
                for (signed char i_44 = 0; i_44 < 10; i_44 += 3) 
                {
                    for (unsigned int i_45 = 0; i_45 < 10; i_45 += 3) 
                    {
                        {
                            var_53 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)69)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)180))) : (arr_69 [i_39] [i_40 + 1] [i_40 + 1] [i_39])));
                            var_54 = ((/* implicit */signed char) (~(arr_117 [i_40] [i_40] [i_40 - 1] [i_40 + 1] [i_40])));
                            var_55 = ((/* implicit */long long int) min((var_55), (((/* implicit */long long int) (+(((/* implicit */int) arr_13 [i_40 + 1] [i_40 - 1] [i_43] [i_43] [i_40 + 1] [i_40])))))));
                            var_56 = ((((/* implicit */_Bool) 2370822721U)) ? (9223372036854775807LL) : (((/* implicit */long long int) 1787614399U)));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (short i_46 = 2; i_46 < 9; i_46 += 4) 
            {
                for (unsigned short i_47 = 0; i_47 < 10; i_47 += 1) 
                {
                    for (int i_48 = 0; i_48 < 10; i_48 += 1) 
                    {
                        {
                            arr_136 [i_39] [i_40] [i_39] [i_47] [i_48] [i_46] = (~(792191758U));
                            var_57 = ((((/* implicit */_Bool) var_5)) ? (-3974686709949987985LL) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)184)) * (((/* implicit */int) (signed char)75))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_49 = 0; i_49 < 10; i_49 += 4) 
            {
                for (unsigned int i_50 = 0; i_50 < 10; i_50 += 4) 
                {
                    for (long long int i_51 = 0; i_51 < 10; i_51 += 3) 
                    {
                        {
                            arr_144 [i_39] = ((/* implicit */signed char) (~(((/* implicit */int) (short)-9323))));
                            var_58 = ((/* implicit */unsigned short) max((var_58), (((/* implicit */unsigned short) var_0))));
                            var_59 = ((/* implicit */_Bool) (-(9223372036854775807LL)));
                            arr_145 [i_39] [i_39] [i_39] [i_39] [i_39] = ((/* implicit */unsigned int) ((_Bool) arr_138 [i_39] [i_39] [i_40 + 1] [i_40 - 1]));
                        }
                    } 
                } 
            } 
        }
        var_60 = ((/* implicit */unsigned short) min((var_60), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-21971)) ? (max((((/* implicit */long long int) (unsigned short)42786)), (var_11))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)92)))))) || (((/* implicit */_Bool) 9223372036854775786LL)))))));
        /* LoopNest 3 */
        for (signed char i_52 = 0; i_52 < 10; i_52 += 1) 
        {
            for (long long int i_53 = 3; i_53 < 7; i_53 += 3) 
            {
                for (int i_54 = 0; i_54 < 10; i_54 += 3) 
                {
                    {
                        var_61 = ((/* implicit */short) (((-(8576141898434203471LL))) != (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32767)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-28494))) : (2370822721U))))));
                        var_62 = ((/* implicit */unsigned short) ((-9223372036854775787LL) + (((/* implicit */long long int) ((/* implicit */int) (short)3072)))));
                    }
                } 
            } 
        } 
    }
}
