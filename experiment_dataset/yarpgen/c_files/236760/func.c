/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236760
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
    var_12 = ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) ((_Bool) ((short) ((var_0) ? (((/* implicit */int) arr_6 [i_0 - 4] [i_1] [i_2])) : (((/* implicit */int) var_8))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (short)24830))) : ((-9223372036854775807LL - 1LL))));
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_10), (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551606ULL)) || (((/* implicit */_Bool) (short)-31663)))))))) || (((/* implicit */_Bool) 3172320337U))));
                            var_15 |= ((/* implicit */unsigned char) ((_Bool) (+(var_10))));
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 2; i_5 < 22; i_5 += 2) 
                        {
                            arr_19 [13U] [13U] [i_0] [i_5] = ((/* implicit */unsigned short) arr_6 [i_5] [i_1] [i_0]);
                            var_16 = ((/* implicit */unsigned short) ((_Bool) var_11));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_6 = 1; i_6 < 19; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                for (long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    {
                        arr_29 [i_0] [i_6 + 3] [i_6] [i_0] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-1201080977) | (((var_0) ? (((/* implicit */int) (unsigned short)63668)) : (((/* implicit */int) var_2))))))) ? ((~(((long long int) arr_4 [(unsigned char)19] [i_0] [i_8])))) : (min((((/* implicit */long long int) var_3)), (-4832278531165218235LL)))));
                        arr_30 [i_0] [i_6] [i_6 + 3] [i_7 + 1] [i_0] [i_8] = ((/* implicit */unsigned char) ((_Bool) var_6));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 19; i_9 += 4) 
        {
            for (unsigned short i_10 = 0; i_10 < 23; i_10 += 4) 
            {
                {
                    var_17 = ((/* implicit */_Bool) ((max((((((/* implicit */int) arr_22 [i_0] [i_0])) & (((/* implicit */int) (_Bool)0)))), (min((((/* implicit */int) (unsigned short)63668)), (arr_10 [i_0] [3LL] [i_10] [3LL] [i_10]))))) ^ ((~(((/* implicit */int) var_4))))));
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (+(max((((((/* implicit */_Bool) arr_1 [(short)19] [i_9 + 3])) ? (arr_23 [i_0] [i_0] [i_10] [i_0]) : (((/* implicit */int) arr_14 [i_10] [i_9] [i_9] [i_9] [i_0] [i_0])))), (((arr_20 [i_9] [i_0]) - (1986295863))))))))));
                    var_19 = ((/* implicit */_Bool) var_6);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_11 = 0; i_11 < 10; i_11 += 1) 
    {
        var_20 = arr_5 [(short)22] [(short)22];
        /* LoopSeq 2 */
        for (unsigned int i_12 = 2; i_12 < 8; i_12 += 4) 
        {
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 7; i_13 += 2) 
            {
                for (unsigned char i_14 = 0; i_14 < 10; i_14 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) var_9)) % (arr_18 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [(unsigned char)18]))));
                        var_22 *= ((/* implicit */_Bool) ((long long int) var_8));
                        arr_49 [i_14] = ((/* implicit */unsigned short) ((arr_45 [i_13 - 1] [i_13 + 3] [i_13 + 1]) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_13 - 1] [i_13 + 3] [i_13 + 1])))));
                        var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) ((unsigned char) var_5))) : (((/* implicit */int) var_0))));
                    }
                } 
            } 
            arr_50 [(unsigned short)6] = ((/* implicit */unsigned short) var_3);
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 10; i_15 += 3) 
            {
                for (int i_16 = 0; i_16 < 10; i_16 += 1) 
                {
                    {
                        var_24 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_35 [i_12 - 1] [i_12 + 1]))) != (2362137392622130478LL)));
                        arr_55 [i_11] [i_12] [i_15] [i_16] = ((/* implicit */unsigned char) var_0);
                    }
                } 
            } 
            var_25 += ((var_2) ? (((((-1986295862) + (2147483647))) >> (((((/* implicit */int) var_1)) - (25979))))) : (((/* implicit */int) (_Bool)0)));
        }
        for (short i_17 = 0; i_17 < 10; i_17 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_18 = 3; i_18 < 8; i_18 += 1) 
            {
                for (unsigned char i_19 = 0; i_19 < 10; i_19 += 3) 
                {
                    {
                        arr_63 [i_19] [i_17] = ((/* implicit */short) (signed char)127);
                        var_26 *= ((/* implicit */short) ((((236301191067581888ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_26 [i_17])))) : (((/* implicit */int) (!(var_0))))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (long long int i_20 = 0; i_20 < 10; i_20 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_21 = 0; i_21 < 10; i_21 += 4) 
                {
                    var_27 = ((/* implicit */unsigned char) (+(((var_6) / (var_6)))));
                    arr_71 [i_21] [i_20] [i_20] [i_17] [i_11] = ((/* implicit */_Bool) arr_25 [i_20] [i_17] [i_20]);
                    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)11)) != ((+(((/* implicit */int) arr_26 [i_20]))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_22 = 0; i_22 < 10; i_22 += 1) 
                {
                    for (unsigned int i_23 = 1; i_23 < 9; i_23 += 4) 
                    {
                        {
                            var_29 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) var_1))));
                            var_30 -= ((/* implicit */long long int) ((unsigned char) (_Bool)0));
                            var_31 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_33 [i_11] [i_17]))))) || (((/* implicit */_Bool) (((_Bool)1) ? (arr_9 [i_23 - 1] [i_22] [i_11] [i_11] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                            var_32 = ((/* implicit */int) var_1);
                        }
                    } 
                } 
                var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) (+(((((/* implicit */_Bool) (signed char)120)) ? (16570709166236132173ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))));
            }
            for (unsigned char i_24 = 0; i_24 < 10; i_24 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_25 = 2; i_25 < 9; i_25 += 4) 
                {
                    for (unsigned short i_26 = 0; i_26 < 10; i_26 += 3) 
                    {
                        {
                            arr_85 [i_24] [i_24] [i_24] [i_17] [i_24] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_81 [i_11] [i_11] [i_11] [i_11] [(signed char)5])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned long long int) ((0U) | (((/* implicit */unsigned int) -1986295864))))) : ((~(arr_57 [i_11])))));
                            var_34 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_82 [i_25 - 1] [i_25 - 1] [i_25] [i_25] [i_25] [i_25 - 2])) ? (arr_82 [i_25 - 1] [i_25] [i_25] [i_25] [i_25] [i_25 + 1]) : (((/* implicit */int) arr_62 [i_25 - 1] [i_17] [(signed char)2] [i_25]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_27 = 0; i_27 < 10; i_27 += 3) 
                {
                    for (unsigned int i_28 = 0; i_28 < 10; i_28 += 2) 
                    {
                        {
                            var_35 ^= ((/* implicit */_Bool) var_11);
                            var_36 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)63677))))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_8)))))));
                        }
                    } 
                } 
            }
            for (signed char i_29 = 0; i_29 < 10; i_29 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_30 = 4; i_30 < 7; i_30 += 2) 
                {
                    /* LoopSeq 1 */
                    for (short i_31 = 2; i_31 < 8; i_31 += 2) 
                    {
                        var_37 ^= ((/* implicit */_Bool) (((_Bool)1) ? (var_10) : (arr_31 [i_31 - 1] [i_17] [i_29])));
                        arr_100 [i_31] [i_30] [i_29] [i_17] [6LL] = ((/* implicit */long long int) (short)25271);
                    }
                    var_38 ^= ((/* implicit */unsigned short) var_7);
                }
                var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_17])) ? (arr_28 [i_11]) : (arr_28 [i_11])));
                arr_101 [i_11] [i_29] = ((/* implicit */long long int) arr_45 [i_11] [i_17] [i_17]);
            }
            /* LoopSeq 2 */
            for (signed char i_32 = 0; i_32 < 10; i_32 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_33 = 2; i_33 < 9; i_33 += 1) 
                {
                    arr_107 [i_11] [i_17] [i_32] [i_33] = ((/* implicit */long long int) ((unsigned int) ((_Bool) arr_58 [i_17] [i_33 - 2])));
                    var_40 ^= (+(arr_73 [i_11] [i_11] [i_33 - 1] [i_33]));
                    var_41 = ((/* implicit */long long int) (+((+(((/* implicit */int) arr_103 [i_33] [i_17] [i_32] [2]))))));
                }
                for (unsigned short i_34 = 0; i_34 < 10; i_34 += 1) 
                {
                    var_42 = ((/* implicit */_Bool) arr_108 [i_11] [i_17] [i_32] [i_34]);
                    var_43 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_106 [i_11] [i_17] [i_11] [i_34])) != (((((/* implicit */_Bool) arr_67 [i_11] [i_11] [i_17] [i_32] [i_34])) ? (-3888499225254708101LL) : (var_6)))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_35 = 0; i_35 < 10; i_35 += 4) 
                {
                    for (unsigned short i_36 = 1; i_36 < 9; i_36 += 3) 
                    {
                        {
                            arr_116 [i_35] [i_17] [i_35] [i_35] [i_36] &= ((/* implicit */_Bool) ((((/* implicit */int) arr_60 [i_17])) / ((+(((/* implicit */int) var_8))))));
                            var_44 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_54 [i_36] [(unsigned short)0] [i_36])) || (((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (arr_12 [i_36] [i_36 + 1] [i_36 + 1] [i_36] [i_36] [i_36] [i_36])));
                            var_45 = ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) | (((/* implicit */int) (_Bool)0))))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_7))) : (((/* implicit */unsigned int) var_10)));
                            var_46 = ((/* implicit */short) ((unsigned long long int) var_8));
                        }
                    } 
                } 
                var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)20857))))) ? (((long long int) arr_56 [i_11])) : (-3511480397097948898LL)));
                var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_112 [i_32] [i_17] [i_17] [0ULL] [i_11]))));
            }
            for (unsigned short i_37 = 1; i_37 < 9; i_37 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
                {
                    for (unsigned long long int i_39 = 3; i_39 < 8; i_39 += 4) 
                    {
                        {
                            arr_124 [2U] [(unsigned short)0] [i_38] [i_37] [(unsigned short)0] [i_11] [i_11] = ((/* implicit */_Bool) ((arr_43 [i_37 + 1] [i_39 + 2] [i_37 + 1]) + (arr_43 [i_37 + 1] [i_39 + 2] [i_39])));
                            var_49 &= ((/* implicit */unsigned int) ((int) var_9));
                        }
                    } 
                } 
                var_50 = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_11))));
            }
        }
    }
    var_51 -= ((/* implicit */short) (unsigned short)44679);
}
