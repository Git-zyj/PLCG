/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221911
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0 + 1])) < (((/* implicit */int) arr_2 [i_0] [i_0 + 1])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 8; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_17 [i_1] [i_0] [i_1] [i_1] [i_1] [i_1] [(unsigned char)3] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */short) var_5)), (var_14)))) + (min((((/* implicit */int) arr_2 [i_2] [i_3 + 1])), (var_1)))))) - (max((((/* implicit */unsigned long long int) var_0)), (((unsigned long long int) arr_3 [i_0]))))));
                                var_21 = ((/* implicit */int) ((min((var_13), (((/* implicit */int) arr_16 [i_0] [(short)6] [i_3 + 1] [i_3 + 3])))) > ((-(((((/* implicit */_Bool) arr_16 [6LL] [i_0] [(_Bool)1] [(unsigned char)4])) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_4])) : (((/* implicit */int) var_18))))))));
                                var_22 = arr_10 [i_0 + 1] [0LL] [4U] [i_0];
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            {
                                arr_23 [i_0] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (var_4))), ((+(((((/* implicit */_Bool) arr_14 [i_6] [(unsigned char)5] [(short)4] [(short)4] [(short)0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_0] [i_0]))) : (arr_18 [i_0] [i_2] [i_1] [i_0])))))));
                                arr_24 [i_0] [3ULL] [3ULL] [i_1] = ((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1]);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_25 [i_0] [i_0] = ((/* implicit */unsigned char) arr_22 [i_0] [i_0] [i_0]);
        /* LoopSeq 2 */
        for (long long int i_7 = 3; i_7 < 10; i_7 += 4) 
        {
            arr_28 [i_0] [i_0] = (((!(((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0] [i_0]))))))) ? (((12667099621411929472ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-30834))))))) : (((/* implicit */unsigned long long int) min((((arr_18 [i_0] [i_0] [i_7] [i_7]) % (((/* implicit */long long int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_0] [i_7] [i_0] [i_0])))))))));
            var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(((/* implicit */int) var_3)))), (((((/* implicit */_Bool) arr_22 [i_0] [i_0] [4ULL])) ? (((/* implicit */int) arr_8 [i_0] [i_7 - 2] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((((/* implicit */int) arr_7 [i_7] [i_0 + 1] [i_0])) + (2147483647))) << (((var_10) - (1657753487256387981LL)))))) != (min((var_4), (((/* implicit */long long int) arr_20 [3ULL] [i_7] [i_7 - 2] [i_0 + 1] [i_0 + 1])))))))) : (min((((/* implicit */long long int) max((arr_26 [(_Bool)1] [(short)2] [i_7]), (((/* implicit */unsigned int) arr_8 [(unsigned char)9] [i_7] [i_0]))))), (((((/* implicit */_Bool) arr_9 [i_0] [2] [2LL] [2LL])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [7LL])))))))));
            var_24 = ((/* implicit */short) arr_26 [1ULL] [i_0] [i_7 - 1]);
            arr_29 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_7] [10ULL] [7])) * (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */short) ((12667099621411929472ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23978)))))))))));
        }
        for (short i_8 = 1; i_8 < 8; i_8 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_9 = 4; i_9 < 10; i_9 += 1) 
            {
                for (long long int i_10 = 2; i_10 < 7; i_10 += 3) 
                {
                    for (int i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        {
                            var_25 &= ((/* implicit */unsigned int) var_9);
                            var_26 = ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) 3795652553U)) - (14856157708234490911ULL)))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_12 = 0; i_12 < 11; i_12 += 2) /* same iter space */
            {
                arr_46 [i_0] [i_8] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) : (arr_40 [i_0])))) ? (((/* implicit */int) max((arr_4 [i_0]), (arr_4 [i_0])))) : (((/* implicit */int) max((((/* implicit */short) arr_4 [i_0])), (arr_1 [i_0]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_13 = 0; i_13 < 11; i_13 += 3) 
                {
                    var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0]))))) * (((arr_6 [i_0 + 1]) / (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_12] [i_12] [i_12] [i_12] [i_12]))))))))));
                    var_28 = ((/* implicit */long long int) var_8);
                    arr_49 [i_0 + 1] [i_8] [i_12] [i_8] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_8] [i_12] [(_Bool)1]))) + (arr_26 [i_0] [i_0] [i_0])));
                }
                /* LoopSeq 1 */
                for (signed char i_14 = 0; i_14 < 11; i_14 += 4) 
                {
                    var_29 -= ((/* implicit */unsigned long long int) min((arr_40 [i_12]), (max((((/* implicit */long long int) (+(arr_14 [i_0] [i_0] [i_0] [2LL] [i_0])))), (arr_52 [i_0 + 1] [i_14] [i_14] [i_8])))));
                    var_30 = ((/* implicit */int) ((min((arr_39 [i_8 - 1] [i_8] [(_Bool)1] [i_0 + 1]), (((/* implicit */long long int) var_11)))) / (max((arr_39 [i_8] [i_8] [(unsigned char)6] [i_0 + 1]), (arr_39 [i_0] [i_0] [i_12] [i_0 + 1])))));
                    var_31 = ((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) arr_27 [i_8] [i_0] [i_8]))))), (max((((((/* implicit */_Bool) arr_50 [(signed char)7] [i_8 - 1] [(signed char)7] [(signed char)7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_12] [i_8] [i_0]))) : (var_9))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_12] [i_8] [i_0])) ? (((/* implicit */int) arr_20 [i_0] [1U] [i_0] [i_14] [i_12])) : (((/* implicit */int) arr_10 [i_12] [(_Bool)1] [(_Bool)1] [i_0])))))))));
                }
            }
            for (unsigned char i_15 = 0; i_15 < 11; i_15 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_16 = 2; i_16 < 7; i_16 += 1) 
                {
                    for (unsigned char i_17 = 0; i_17 < 11; i_17 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_0] [i_8 + 3] [(unsigned char)4] [i_16 + 4] [i_0])) - (((/* implicit */int) arr_34 [i_16] [i_16] [i_0]))))), (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_17)))))) ? (((/* implicit */unsigned int) ((var_1) * (((((/* implicit */_Bool) arr_21 [i_0] [i_8] [i_15] [i_0] [i_0])) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_4 [i_0 + 1]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_0] [i_15] [i_0])) ? (var_0) : (arr_22 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_8 - 1] [i_8 - 1]))) : (arr_26 [(signed char)10] [i_0] [i_15])))));
                            var_33 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_48 [i_8 - 1] [i_16] [i_0] [(unsigned char)6]), (arr_48 [i_8 - 1] [2U] [i_0] [i_17]))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_18 = 0; i_18 < 11; i_18 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_19 = 0; i_19 < 11; i_19 += 4) 
                    {
                        arr_66 [i_0] [i_18] [i_18] [i_15] [i_8 + 1] [i_0] = ((/* implicit */short) min((((((var_10) & (((/* implicit */long long int) ((/* implicit */int) arr_15 [(_Bool)1] [i_8] [i_8 + 1] [i_8]))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))), (((min((((/* implicit */long long int) var_15)), (var_4))) - (((/* implicit */long long int) ((/* implicit */int) max((arr_48 [i_0] [(signed char)1] [i_0] [i_19]), (((/* implicit */unsigned short) var_6))))))))));
                        var_34 = ((/* implicit */short) ((min((((((/* implicit */int) var_2)) + (((/* implicit */int) arr_63 [i_0] [i_0] [i_15] [i_18] [i_19])))), (((/* implicit */int) arr_5 [i_0 + 1] [i_8 + 2])))) - (((/* implicit */int) var_8))));
                    }
                    arr_67 [i_0] [i_15] [i_8] [i_8] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_17))));
                }
                for (unsigned char i_20 = 3; i_20 < 10; i_20 += 2) 
                {
                    var_35 = ((/* implicit */short) arr_35 [i_0] [9] [i_15]);
                    arr_70 [i_0] [(short)4] = ((/* implicit */unsigned long long int) max((((arr_52 [i_0] [i_0] [i_20 - 2] [i_20]) & (arr_52 [(unsigned char)9] [i_0] [i_20 - 2] [i_20]))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-26688))) & (268369920U))))));
                    var_36 = (+(var_7));
                }
                arr_71 [i_0] [i_0] [i_0] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_0] [i_8] [(unsigned short)3] [i_0]))))) ? (arr_35 [(signed char)7] [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((min((((/* implicit */int) var_5)), (var_0))) & (min((var_11), (arr_68 [i_15] [i_0] [i_0]))))))));
                arr_72 [8LL] [i_0] [i_15] = ((/* implicit */unsigned short) max((((/* implicit */short) arr_43 [i_0] [i_0] [i_0])), (arr_62 [i_0] [i_8])));
            }
            var_37 -= ((/* implicit */unsigned long long int) ((long long int) arr_63 [i_0 + 1] [4U] [i_0 + 1] [i_8 + 3] [0ULL]));
        }
        var_38 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (short)-21473)), (5779644452297622141ULL))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14))))))))));
        var_39 = max((min((min((arr_32 [i_0]), (((/* implicit */unsigned long long int) var_16)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [(unsigned char)9])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_61 [i_0] [i_0])))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 + 1] [i_0]))))));
    }
    for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
    {
        var_40 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) var_18))) * (((/* implicit */int) ((((/* implicit */int) arr_73 [i_21 - 1])) <= (((/* implicit */int) arr_73 [i_21 - 1])))))));
        var_41 &= ((/* implicit */unsigned long long int) max((min((((long long int) arr_73 [i_21])), (((/* implicit */long long int) max((arr_74 [i_21] [i_21]), (arr_73 [i_21])))))), (((/* implicit */long long int) min((((((/* implicit */int) var_6)) | (((/* implicit */int) arr_73 [i_21])))), (((/* implicit */int) arr_74 [i_21 - 1] [i_21 - 1])))))));
        var_42 &= ((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */unsigned int) ((arr_74 [i_21 - 1] [i_21 - 1]) ? (((/* implicit */int) arr_74 [i_21 - 1] [i_21 - 1])) : (((/* implicit */int) (unsigned char)79))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) (short)24104)), (var_9)))) ? (4026597375U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)24104))) <= (215579539923737507ULL))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_22 = 0; i_22 < 25; i_22 += 1) 
        {
            arr_78 [(unsigned char)1] [i_21] [i_21] = ((/* implicit */unsigned char) (-(arr_77 [i_21 - 1] [i_21])));
            var_43 -= ((/* implicit */short) arr_76 [i_22] [14] [i_21]);
        }
    }
    /* LoopNest 3 */
    for (signed char i_23 = 0; i_23 < 25; i_23 += 2) 
    {
        for (long long int i_24 = 0; i_24 < 25; i_24 += 4) 
        {
            for (unsigned short i_25 = 2; i_25 < 24; i_25 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_26 = 1; i_26 < 22; i_26 += 2) 
                    {
                        for (int i_27 = 0; i_27 < 25; i_27 += 3) 
                        {
                            {
                                var_44 ^= ((/* implicit */signed char) max((((((((((/* implicit */int) arr_84 [19ULL] [3ULL] [i_23])) - (((/* implicit */int) var_12)))) + (2147483647))) << (((((((/* implicit */int) arr_83 [i_27] [i_24] [i_24])) << (((var_9) - (6502370201881584393LL))))) - (9280))))), (max((((var_13) - (((/* implicit */int) arr_81 [i_23] [i_23] [(_Bool)1])))), (((/* implicit */int) arr_89 [i_27] [i_27] [i_27] [i_27]))))));
                                var_45 = ((/* implicit */unsigned char) ((_Bool) max((arr_87 [i_27] [11LL] [i_27] [i_26 + 1]), (arr_87 [i_27] [i_27] [i_27] [i_26 + 2]))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_28 = 0; i_28 < 25; i_28 += 1) 
                    {
                        arr_95 [i_24] [i_24] [i_24] [i_24] = ((/* implicit */long long int) var_14);
                        var_46 = ((/* implicit */int) min((var_46), (((/* implicit */int) arr_81 [i_23] [i_23] [(short)17]))));
                    }
                    for (short i_29 = 0; i_29 < 25; i_29 += 1) 
                    {
                        var_47 = ((/* implicit */_Bool) ((((/* implicit */int) min((arr_88 [i_25] [i_25] [i_25] [i_25 - 2] [i_25 - 1] [i_25]), (((/* implicit */short) var_18))))) + (((/* implicit */int) max((((/* implicit */signed char) arr_85 [i_25] [i_25 + 1] [i_25] [i_25 - 1])), (var_12))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_30 = 4; i_30 < 22; i_30 += 3) 
                        {
                            var_48 = ((/* implicit */signed char) ((long long int) arr_99 [i_25 + 1] [i_30 - 2] [i_30] [i_30] [(short)9]));
                            arr_100 [i_30] = ((/* implicit */short) arr_84 [i_24] [i_25] [i_30]);
                            var_49 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_80 [i_25 + 1])) ? (((/* implicit */int) arr_75 [i_23] [i_25 - 2] [i_30 + 2])) : (((/* implicit */int) arr_75 [i_23] [i_25 - 1] [i_25 - 1]))));
                            var_50 = ((/* implicit */long long int) min((var_50), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_84 [i_25] [i_29] [i_30])) ? (arr_92 [8] [8] [20LL] [i_30 - 1]) : (((/* implicit */int) arr_88 [i_23] [(_Bool)1] [(unsigned char)7] [(unsigned char)12] [i_23] [(short)0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_75 [i_24] [i_24] [i_24])) || (var_2)))) : ((-(((/* implicit */int) arr_85 [i_23] [i_24] [i_25] [i_30])))))))));
                            var_51 = ((/* implicit */short) min((var_51), (((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_83 [i_30 - 4] [i_24] [i_24])) : (((/* implicit */int) arr_83 [i_30 + 3] [(short)9] [i_30])))))));
                        }
                        for (int i_31 = 0; i_31 < 25; i_31 += 1) 
                        {
                            arr_104 [i_23] [i_31] [i_23] [i_24] [i_31] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_92 [i_24] [i_25 + 1] [i_29] [i_23])) ? (((((/* implicit */_Bool) arr_89 [i_23] [i_29] [i_24] [i_23])) ? (arr_77 [i_25] [5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_84 [i_23] [i_23] [(signed char)17]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) * (((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), (((((/* implicit */int) arr_82 [12])) + (((/* implicit */int) arr_76 [i_23] [i_23] [i_23])))))))));
                            var_52 = ((/* implicit */unsigned char) max((min((((/* implicit */int) arr_76 [i_25 + 1] [i_25] [i_25 + 1])), (var_1))), (((/* implicit */int) ((signed char) arr_76 [i_25 + 1] [i_25] [i_25 + 1])))));
                            var_53 = ((/* implicit */long long int) min((var_53), ((+(max((min((((/* implicit */long long int) arr_76 [i_23] [i_25] [i_25])), (var_4))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_93 [i_23])))))))))));
                        }
                    }
                }
            } 
        } 
    } 
}
