/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215480
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (unsigned short i_3 = 2; i_3 < 17; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        {
                            arr_15 [i_1] [i_1 - 3] [i_2] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / (((min((((/* implicit */unsigned int) arr_13 [i_0] [i_1] [i_2] [19LL] [i_3] [i_3] [i_4])), (arr_14 [i_0]))) + (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))));
                            var_19 -= ((/* implicit */long long int) var_9);
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                for (long long int i_6 = 4; i_6 < 17; i_6 += 3) 
                {
                    for (unsigned short i_7 = 2; i_7 < 18; i_7 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_10 [i_7] [i_7])) : (min((var_17), (((/* implicit */int) var_10)))))), (((/* implicit */int) var_11)))))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) & (((/* implicit */int) arr_2 [i_7]))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 1) 
        {
            var_22 = var_7;
            /* LoopSeq 2 */
            for (unsigned char i_9 = 0; i_9 < 20; i_9 += 4) 
            {
                var_23 = ((/* implicit */short) var_14);
                arr_29 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? ((~(var_14))) : (((/* implicit */long long int) arr_14 [i_0])));
                /* LoopSeq 3 */
                for (signed char i_10 = 0; i_10 < 20; i_10 += 3) 
                {
                    arr_33 [i_10] [i_0] [i_0] [i_8] [i_0] [i_0] = ((/* implicit */unsigned int) ((long long int) arr_3 [i_0] [i_8]));
                    var_24 *= ((/* implicit */signed char) var_7);
                    var_25 = ((/* implicit */long long int) ((int) arr_26 [i_0]));
                    arr_34 [i_0] [i_0] [i_0] [(short)19] = ((/* implicit */unsigned short) ((int) ((unsigned long long int) arr_14 [i_0])));
                }
                for (long long int i_11 = 2; i_11 < 17; i_11 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_12 = 1; i_12 < 19; i_12 += 3) 
                    {
                        arr_42 [i_0] [(_Bool)1] [(_Bool)1] [i_9] [i_11] [i_0] = var_5;
                        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((var_7) & ((~(arr_39 [5LL]))))))));
                        var_27 -= ((/* implicit */unsigned long long int) ((unsigned short) (-(var_15))));
                    }
                    var_28 = ((/* implicit */long long int) max((var_28), (arr_37 [i_0] [17LL] [i_0] [i_11 + 2] [i_8])));
                    arr_43 [i_0] [i_0] [i_0] [i_8] [(unsigned short)10] [(unsigned short)1] = arr_32 [i_0] [i_0] [(unsigned short)11] [i_11] [i_11 + 1];
                    arr_44 [i_0] [i_8] [i_9] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_16)) + (var_7)));
                }
                for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 1) 
                {
                    var_29 = ((((/* implicit */int) var_0)) % ((+(((/* implicit */int) arr_25 [i_0] [i_0])))));
                    var_30 &= ((/* implicit */unsigned long long int) arr_27 [i_9] [i_0]);
                    arr_47 [i_13] [i_0] [i_0] [i_0] = ((((var_7) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-30))))) + (((/* implicit */long long int) ((/* implicit */int) var_18))));
                }
            }
            for (int i_14 = 0; i_14 < 20; i_14 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (signed char i_16 = 0; i_16 < 20; i_16 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_51 [i_15] [i_0])) * (((/* implicit */int) ((var_17) == (((/* implicit */int) var_10))))))))));
                            arr_58 [i_16] &= ((/* implicit */unsigned char) ((unsigned short) (~(arr_23 [i_16] [i_15] [i_16]))));
                            var_32 = ((/* implicit */unsigned int) var_14);
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned long long int i_17 = 3; i_17 < 18; i_17 += 3) 
                {
                    var_33 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)35049)) ? (((/* implicit */int) (signed char)5)) : (2147483647))) | (((int) var_7))));
                    arr_61 [i_0] [i_0] [i_0] [i_14] [i_14] [i_17] = ((/* implicit */long long int) var_3);
                    /* LoopSeq 1 */
                    for (unsigned char i_18 = 0; i_18 < 20; i_18 += 1) 
                    {
                        arr_64 [i_0] [i_0] [(signed char)14] [(signed char)14] = ((/* implicit */unsigned short) var_6);
                        arr_65 [i_0] = ((/* implicit */signed char) var_1);
                    }
                }
                for (unsigned char i_19 = 0; i_19 < 20; i_19 += 2) 
                {
                    var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) arr_3 [i_14] [i_0]))));
                    arr_69 [i_0] = ((/* implicit */_Bool) var_5);
                    var_35 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_52 [i_19] [i_14] [i_8] [(_Bool)1])) || (((/* implicit */_Bool) arr_12 [i_0] [i_8] [i_0] [i_19] [i_8]))));
                }
                for (unsigned short i_20 = 3; i_20 < 16; i_20 += 2) 
                {
                    arr_72 [i_0] [i_0] [i_8] [i_14] [18ULL] = ((/* implicit */short) (signed char)124);
                    arr_73 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_20])) || (((/* implicit */_Bool) var_1)))) ? (var_16) : ((-(((/* implicit */int) var_18))))));
                }
                for (int i_21 = 0; i_21 < 20; i_21 += 3) 
                {
                    var_36 |= arr_20 [12ULL] [i_21] [i_14] [i_8] [12ULL];
                    arr_76 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) % (arr_32 [i_21] [i_0] [i_8] [i_0] [i_0])));
                    var_37 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) var_0)))));
                    arr_77 [i_0] [i_0] [i_14] [i_0] [i_21] = (i_0 % 2 == 0) ? (((/* implicit */short) ((var_7) << (((((((/* implicit */int) arr_17 [i_21] [i_0] [i_0] [i_0])) + (23132))) - (40)))))) : (((/* implicit */short) ((var_7) << (((((((((/* implicit */int) arr_17 [i_21] [i_0] [i_0] [i_0])) + (23132))) - (40))) - (14413))))));
                }
                arr_78 [i_0] [i_8] [i_8] [i_14] = ((/* implicit */long long int) (((((~(((/* implicit */int) var_18)))) + (2147483647))) >> (((var_1) - (14331772268232067538ULL)))));
                /* LoopSeq 3 */
                for (unsigned char i_22 = 0; i_22 < 20; i_22 += 1) 
                {
                    var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_2) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_75 [i_0] [i_0]))) + (var_2)))));
                    var_39 = ((/* implicit */_Bool) max((var_39), (((((/* implicit */_Bool) arr_66 [i_0] [i_8] [(unsigned short)10] [i_22])) || (((((/* implicit */int) var_10)) > (((/* implicit */int) var_3))))))));
                    arr_82 [i_0] [i_0] [i_0] [16] = (!(((/* implicit */_Bool) var_18)));
                }
                for (long long int i_23 = 0; i_23 < 20; i_23 += 2) 
                {
                    arr_85 [(unsigned char)12] [i_0] [i_0] [i_0] = (((+(var_7))) % (((/* implicit */long long int) ((/* implicit */int) var_12))));
                    /* LoopSeq 2 */
                    for (long long int i_24 = 2; i_24 < 17; i_24 += 4) 
                    {
                        var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (((/* implicit */int) arr_51 [(signed char)18] [6LL]))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) var_0)) + (((/* implicit */int) var_12))))));
                        arr_88 [i_0] [i_0] [i_8] [i_8] [(signed char)3] [(signed char)17] = ((/* implicit */unsigned short) var_13);
                    }
                    for (signed char i_25 = 0; i_25 < 20; i_25 += 4) 
                    {
                        var_41 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)13)) % (((/* implicit */int) (unsigned char)13))))) && (((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_3))))));
                        var_42 = var_18;
                    }
                    var_43 = ((/* implicit */int) var_13);
                    /* LoopSeq 3 */
                    for (unsigned short i_26 = 2; i_26 < 17; i_26 += 1) 
                    {
                        arr_95 [i_23] |= ((/* implicit */long long int) ((arr_56 [i_26 - 2] [i_26 + 3] [19LL] [i_26 + 2] [i_26 - 1] [i_26 - 1]) > (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
                        var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_28 [(unsigned char)3] [i_26 - 2])) < (((var_15) / (2147483633))))))));
                        var_45 = ((/* implicit */int) var_4);
                    }
                    for (short i_27 = 0; i_27 < 20; i_27 += 1) 
                    {
                        var_46 = ((/* implicit */int) min((var_46), (((((((/* implicit */_Bool) var_18)) ? (arr_45 [i_0] [i_0] [i_14] [i_23] [i_27]) : (((/* implicit */int) var_4)))) ^ (((((((/* implicit */int) var_0)) + (2147483647))) << (((((/* implicit */int) var_3)) - (122)))))))));
                        var_47 *= ((/* implicit */signed char) ((((/* implicit */int) arr_98 [i_23])) & (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) >= (arr_94 [i_23]))))));
                    }
                    for (unsigned long long int i_28 = 0; i_28 < 20; i_28 += 1) 
                    {
                        arr_104 [14LL] [14LL] [14LL] [i_14] [i_23] [i_0] [i_28] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0])) ? (arr_50 [i_0] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) & (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_1))))));
                        arr_105 [i_28] [i_0] [i_0] = ((/* implicit */int) var_10);
                        arr_106 [i_0] [(signed char)9] [i_23] [i_23] [i_14] [i_8] [i_0] = ((/* implicit */long long int) ((arr_21 [i_28] [i_0] [i_0] [i_8] [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_48 [i_0] [i_8])) || (((/* implicit */_Bool) var_10))))))));
                        arr_107 [i_0] [i_8] [i_14] [i_14] [(unsigned char)19] [i_0] [i_14] = ((/* implicit */unsigned long long int) var_14);
                    }
                }
                for (short i_29 = 0; i_29 < 20; i_29 += 3) 
                {
                    var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) ((((/* implicit */int) var_3)) / (((/* implicit */int) arr_8 [(unsigned char)4] [i_14])))))));
                    arr_111 [(short)2] [i_14] [i_8] [(short)2] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_29] [(unsigned short)6] [(unsigned char)12] [i_0] [i_0])) ? (((/* implicit */long long int) (-(var_16)))) : (arr_23 [i_0] [i_0] [0])));
                    var_49 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_55 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_14 [i_0]))));
                }
                var_50 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_11))));
            }
            /* LoopNest 2 */
            for (int i_30 = 0; i_30 < 20; i_30 += 2) 
            {
                for (short i_31 = 0; i_31 < 20; i_31 += 1) 
                {
                    {
                        var_51 &= ((/* implicit */_Bool) var_12);
                        var_52 = ((/* implicit */unsigned int) max((var_52), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_12 [i_0] [i_0] [i_8] [i_30] [8]))) ? (arr_112 [i_0] [i_8] [i_30]) : (((/* implicit */int) arr_96 [i_30] [i_30] [i_8] [i_30])))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_32 = 0; i_32 < 20; i_32 += 2) 
        {
            arr_119 [i_32] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)124))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_39 [i_0])))) || (((/* implicit */_Bool) arr_24 [i_32] [(unsigned short)3] [i_0] [i_0] [i_0]))))) : (((((/* implicit */int) (signed char)120)) % (((/* implicit */int) (unsigned char)64))))));
            var_53 = (+(((((/* implicit */_Bool) ((unsigned short) var_12))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (arr_87 [i_0] [i_32] [i_0] [i_32] [i_0] [i_0])))) : (var_7))));
            arr_120 [i_0] = ((/* implicit */short) var_1);
        }
        var_54 = ((/* implicit */signed char) (-(max((((((/* implicit */int) var_8)) % (var_16))), ((~(((/* implicit */int) var_4))))))));
        var_55 *= ((/* implicit */unsigned long long int) ((unsigned char) min((arr_71 [(short)14] [i_0] [i_0] [i_0] [(short)14]), (((/* implicit */unsigned int) var_15)))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_33 = 0; i_33 < 16; i_33 += 4) 
    {
        arr_123 [i_33] [i_33] = ((/* implicit */long long int) (~(18446744073709551615ULL)));
        var_56 = ((/* implicit */int) max((var_56), ((-(((/* implicit */int) ((((var_7) << (((((/* implicit */int) var_9)) - (163))))) >= (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_49 [i_33] [i_33] [i_33] [i_33])))))))))));
    }
    var_57 = ((/* implicit */unsigned short) ((long long int) ((((((/* implicit */int) var_4)) & (((/* implicit */int) var_18)))) > ((~(var_16))))));
}
