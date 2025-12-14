/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240361
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
    for (long long int i_0 = 2; i_0 < 19; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    {
                        var_14 = ((/* implicit */_Bool) min((((/* implicit */short) ((_Bool) arr_6 [i_2]))), ((short)30279)));
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_0] [(short)10] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)30261))))), (var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)189)), ((short)-30300))))) : (((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)128)))) & (min((arr_0 [i_3]), (((/* implicit */long long int) var_0))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_5 = 3; i_5 < 22; i_5 += 2) /* same iter space */
            {
                var_15 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) arr_9 [i_5 + 1] [i_0 - 2] [i_0 - 2] [i_0 - 2])) ^ (((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_6 = 2; i_6 < 21; i_6 += 3) 
                {
                    arr_22 [i_6] [i_4] [i_4] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0 + 3])) ? (((arr_17 [(_Bool)1] [i_5] [i_4]) / (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4] [i_4]))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_23 [i_5] [(unsigned char)13] [i_5 + 1] [i_4] = ((unsigned char) ((_Bool) arr_10 [i_0] [i_4] [i_5 - 2] [i_6] [i_6]));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_26 [3LL] [i_4] [i_4] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)74)) ? (((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (signed char)-82))));
                    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) min(((-(((/* implicit */int) arr_20 [i_5 - 1] [i_5 - 3] [i_0 + 1] [i_0 + 2] [i_0 + 4] [i_0 + 4])))), (((/* implicit */int) arr_20 [i_5 + 1] [i_5 - 2] [i_0 + 4] [i_0 + 2] [i_0 + 3] [i_0 + 1])))))));
                    var_17 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (arr_2 [i_0 - 2]) : (arr_2 [i_0 - 2])))));
                }
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */short) (unsigned char)181);
                            var_19 = ((/* implicit */_Bool) ((unsigned char) (unsigned char)127));
                        }
                    } 
                } 
                arr_32 [i_4] [i_0] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 2]))) / (var_12)))) ? (((/* implicit */int) ((signed char) arr_4 [i_0 + 3]))) : (((/* implicit */int) max((arr_4 [i_0 + 1]), (arr_4 [i_0 + 2]))))));
            }
            for (unsigned char i_10 = 3; i_10 < 22; i_10 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (signed char i_12 = 0; i_12 < 23; i_12 += 2) 
                    {
                        {
                            var_20 += ((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_0 - 1])) * (((/* implicit */int) max((arr_13 [i_0 - 2]), (arr_13 [i_0 + 3]))))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)22)) / (((/* implicit */int) arr_12 [i_4] [i_10] [i_4]))))) ? (((long long int) arr_12 [i_4] [i_0 - 1] [i_4])) : (((long long int) (unsigned char)246))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 23; i_13 += 3) 
                {
                    for (signed char i_14 = 0; i_14 < 23; i_14 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) ((_Bool) min((((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_30 [(unsigned char)18] [(unsigned char)18] [i_4] [i_10] [i_13] [i_14] [i_4]))), (((/* implicit */long long int) min((((/* implicit */unsigned char) arr_36 [i_0] [i_0] [i_10] [i_4] [i_14])), ((unsigned char)131)))))));
                            arr_48 [i_0] [i_0] [i_14] [i_0] [i_0] [i_0] &= ((/* implicit */signed char) ((unsigned char) arr_19 [i_0] [i_0 - 2] [i_0] [i_0] [i_14] [i_0]));
                            var_23 *= (unsigned char)211;
                        }
                    } 
                } 
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? ((~(((/* implicit */int) arr_5 [i_0 - 1] [i_10 - 2])))) : (((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_5 [i_0 - 1] [i_10 - 2]))))));
            }
            /* LoopSeq 3 */
            for (long long int i_15 = 0; i_15 < 23; i_15 += 4) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_38 [i_0 - 2] [(unsigned char)0] [i_0 + 1] [(_Bool)1] [(unsigned char)0] [(signed char)22]))))));
                var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) min(((+((+(((/* implicit */int) arr_37 [i_15] [i_4] [i_4] [i_0] [i_15])))))), ((+(((((/* implicit */_Bool) -8420062474057843271LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_37 [i_15] [i_4] [i_15] [i_4] [i_4])))))))))));
                /* LoopNest 2 */
                for (signed char i_16 = 2; i_16 < 22; i_16 += 3) 
                {
                    for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */short) arr_5 [i_0] [i_16 + 1]);
                            arr_57 [i_0] [i_0] [i_15] [i_4] [i_17] = ((/* implicit */unsigned char) arr_45 [i_4] [i_4] [i_15] [i_15] [i_17 + 1]);
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (0LL)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */int) arr_13 [i_0])) >= (((/* implicit */int) var_8)))))))) : (max((((/* implicit */long long int) min((((/* implicit */unsigned char) var_1)), ((unsigned char)75)))), (652405806967335249LL)))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (long long int i_18 = 0; i_18 < 23; i_18 += 4) /* same iter space */
            {
                arr_60 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)74))) != (-6547044471329733736LL)));
                var_29 = ((/* implicit */_Bool) ((((/* implicit */int) arr_56 [i_4] [i_0 + 2] [i_0 + 2] [i_4] [i_18])) % (((/* implicit */int) arr_56 [(short)3] [i_0 + 2] [i_18] [i_18] [i_18]))));
                arr_61 [i_18] [i_4] [i_4] [7LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [i_0] [11LL] [i_0] [(_Bool)1] [i_0] [i_4])) ? (8711416533641376898LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                /* LoopSeq 1 */
                for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                {
                    var_30 = ((/* implicit */short) ((arr_39 [i_0 + 2] [i_4] [(unsigned char)22]) ? (((/* implicit */int) arr_39 [i_0 + 2] [i_0 + 1] [i_18])) : (((/* implicit */int) arr_39 [i_0 + 2] [i_4] [10LL]))));
                    var_31 = ((_Bool) (((_Bool)1) ? (arr_30 [i_0] [i_4] [i_19 - 1] [i_19 - 1] [i_4] [i_4] [i_4]) : (-10LL)));
                }
                arr_64 [i_0] [i_4] [i_4] = ((/* implicit */_Bool) arr_51 [i_0] [i_0]);
            }
            for (long long int i_20 = 0; i_20 < 23; i_20 += 4) /* same iter space */
            {
                var_32 = ((/* implicit */short) min((((/* implicit */long long int) min(((unsigned char)109), (((/* implicit */unsigned char) (_Bool)0))))), ((+(((8711416533641376898LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)69)))))))));
                var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) var_5))));
                arr_68 [i_0] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) (unsigned char)69))) % (((/* implicit */int) max(((signed char)127), (((/* implicit */signed char) (_Bool)1)))))));
            }
            var_34 = ((/* implicit */unsigned char) (!(((_Bool) (_Bool)1))));
            var_35 = ((/* implicit */unsigned char) (-((+(((((/* implicit */_Bool) (short)13338)) ? (((/* implicit */int) (unsigned char)102)) : (((/* implicit */int) (signed char)36))))))));
        }
        /* LoopNest 2 */
        for (unsigned char i_21 = 0; i_21 < 23; i_21 += 2) 
        {
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_23 = 1; i_23 < 19; i_23 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_24 = 0; i_24 < 23; i_24 += 2) 
                        {
                            var_36 = ((/* implicit */_Bool) ((unsigned char) (~(var_12))));
                            var_37 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_65 [i_22] [i_0 + 2] [i_0 + 2] [i_0 - 2]))));
                        }
                        /* vectorizable */
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                        {
                            var_38 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_37 [i_22] [i_23 - 1] [i_22] [i_22] [i_22]))));
                            var_39 = ((/* implicit */signed char) ((unsigned char) var_5));
                            var_40 = var_1;
                            var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_73 [i_22] [i_23 + 3] [i_23] [i_25])) ? (((((/* implicit */_Bool) -6LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)31)))) : (((/* implicit */int) var_4))));
                        }
                        arr_81 [i_0] [i_0] [i_0] [i_22] = ((/* implicit */unsigned char) ((((min((var_3), (((/* implicit */long long int) var_9)))) >> (((/* implicit */int) arr_62 [i_0] [i_0] [i_0] [i_23])))) <= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_23] [i_23])))));
                        var_42 = ((/* implicit */signed char) (~(max((((((/* implicit */_Bool) (short)-13346)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)12348)))), (((/* implicit */int) var_13))))));
                    }
                    var_43 = ((/* implicit */_Bool) min(((unsigned char)235), (((/* implicit */unsigned char) (signed char)18))));
                }
            } 
        } 
        var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((_Bool) var_2)) ? ((-(((/* implicit */int) var_8)))) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))) ? (max((2305843009213693952LL), (min((((/* implicit */long long int) (signed char)-14)), (var_7))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) / (((/* implicit */int) (unsigned char)22)))))))))));
    }
    for (long long int i_26 = 2; i_26 < 19; i_26 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_27 = 3; i_27 < 21; i_27 += 2) 
        {
            for (unsigned char i_28 = 0; i_28 < 23; i_28 += 1) 
            {
                for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                {
                    {
                        var_45 = ((/* implicit */_Bool) max((min((((/* implicit */long long int) arr_67 [i_26 + 1] [i_26] [i_26] [i_26 + 3])), (var_3))), (((/* implicit */long long int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) min((((/* implicit */short) arr_53 [i_26] [i_26])), ((short)30544)))))))));
                        arr_91 [i_26] [i_27 - 1] [i_28] [i_26] = min((((((/* implicit */int) (signed char)(-127 - 1))) > (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_26] [i_27] [i_26]))) + (var_12)))) || (((/* implicit */_Bool) var_3)))));
                    }
                } 
            } 
        } 
        arr_92 [i_26] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (short)22480)) ? (((/* implicit */int) max(((short)-13346), ((short)13348)))) : (((/* implicit */int) min(((short)-32749), (((/* implicit */short) (unsigned char)0)))))))));
    }
    /* vectorizable */
    for (long long int i_30 = 2; i_30 < 19; i_30 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_31 = 0; i_31 < 23; i_31 += 3) 
        {
            for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
            {
                for (_Bool i_33 = 1; i_33 < 1; i_33 += 1) 
                {
                    {
                        var_46 = ((/* implicit */_Bool) var_4);
                        var_47 = ((/* implicit */_Bool) arr_10 [i_30] [i_31] [i_30] [i_33] [i_32]);
                        var_48 = ((/* implicit */_Bool) max((var_48), (((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_33 - 1] [(signed char)16] [i_33] [i_33 - 1] [(signed char)16] [(unsigned char)0])))))));
                    }
                } 
            } 
        } 
        arr_104 [i_30] |= ((/* implicit */short) ((((/* implicit */int) arr_16 [i_30] [i_30] [i_30 + 4] [(unsigned char)0])) + (((/* implicit */int) var_13))));
        /* LoopNest 2 */
        for (short i_34 = 2; i_34 < 21; i_34 += 3) 
        {
            for (long long int i_35 = 0; i_35 < 23; i_35 += 3) 
            {
                {
                    var_49 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_34 + 1])) ? (((/* implicit */int) arr_83 [i_34] [i_30 + 1])) : (((/* implicit */int) arr_83 [i_34] [i_30 + 4]))));
                    var_50 = arr_49 [i_30] [i_34] [i_35];
                }
            } 
        } 
    }
    var_51 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)123)) | (((/* implicit */int) (unsigned char)127))));
}
