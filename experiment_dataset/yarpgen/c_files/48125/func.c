/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48125
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
    var_19 = ((/* implicit */unsigned int) var_0);
    var_20 = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((var_10), (var_10)))) && ((!(((/* implicit */_Bool) 73662667U)))))), (((var_8) || (((/* implicit */_Bool) var_7))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] [18U] = var_3;
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2 - 1] [i_3])) ? (((/* implicit */int) min((arr_1 [i_1 + 4]), (arr_1 [i_1 - 2])))) : (((/* implicit */int) max(((!(((/* implicit */_Bool) (unsigned short)58936)))), (arr_8 [(short)13] [(unsigned char)4] [i_2 - 1] [i_2] [i_3 + 2] [i_2]))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            var_22 *= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 0ULL))))), ((~(max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_10 [i_3] [i_1 + 1] [i_1 + 1] [i_0]))))))));
                            arr_13 [(short)0] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_2 - 1] [i_3 + 1] [(unsigned short)15] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (unsigned short)36974)), (4611686018393833472ULL)));
                            var_23 = ((/* implicit */short) max((var_23), ((short)(-32767 - 1))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            arr_18 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(6623929306264807738LL)))) ? (((/* implicit */int) arr_4 [i_5] [i_5] [i_0])) : (((((/* implicit */_Bool) var_13)) ? (arr_6 [2ULL] [i_0] [i_0] [i_0]) : (((/* implicit */int) var_0))))));
            var_24 = ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) & (0U));
        }
    }
    for (signed char i_6 = 0; i_6 < 13; i_6 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            var_25 = ((/* implicit */int) min((((arr_0 [i_6] [i_7]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) ((_Bool) (signed char)-112)))));
            var_26 ^= min((((/* implicit */unsigned long long int) ((unsigned short) (signed char)-44))), ((+(((var_10) / (((/* implicit */unsigned long long int) arr_7 [i_6] [i_6] [i_7] [i_6])))))));
            arr_23 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(18446744073709551612ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_7] [i_6])) ? (((/* implicit */int) var_8)) : (-2147483633)))) : (min((((/* implicit */unsigned long long int) var_14)), (arr_0 [i_6] [i_6])))));
            var_27 ^= ((/* implicit */unsigned long long int) arr_16 [i_6]);
            /* LoopNest 2 */
            for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        arr_31 [i_6] [i_9] = ((/* implicit */long long int) (((~(arr_22 [i_7] [(unsigned short)7]))) ^ (((/* implicit */unsigned long long int) arr_15 [i_6]))));
                        arr_32 [i_6] [i_7] [i_8] [i_9] [i_9] [i_6] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_7 [(unsigned char)11] [(unsigned char)11] [i_8] [i_9])) ? (var_10) : (((/* implicit */unsigned long long int) arr_5 [2LL] [15ULL] [i_8] [i_9])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1887868847)) ? (((/* implicit */unsigned int) arr_7 [i_6] [i_7] [i_8] [i_9])) : (3678941491U))))));
                    }
                } 
            } 
        }
        for (int i_10 = 0; i_10 < 13; i_10 += 4) 
        {
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(583435211U))), (((unsigned int) (-9223372036854775807LL - 1LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (min((((/* implicit */unsigned int) 222969561)), (505656663U)))));
            var_29 = arr_16 [5];
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 13; i_11 += 2) 
        {
            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_11 [i_6] [i_6] [i_6] [i_6] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_6] [i_11])))));
            arr_39 [i_6] [i_6] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */int) arr_1 [i_11])) : (((/* implicit */int) arr_1 [i_6]))));
            /* LoopSeq 4 */
            for (long long int i_12 = 2; i_12 < 11; i_12 += 2) 
            {
                /* LoopSeq 2 */
                for (long long int i_13 = 1; i_13 < 10; i_13 += 1) 
                {
                    arr_45 [(unsigned char)11] [(unsigned char)11] [i_12 - 1] [(unsigned char)11] [3U] = ((/* implicit */short) (unsigned short)9073);
                    arr_46 [i_11] = ((((/* implicit */_Bool) arr_25 [i_12 + 1] [i_12 - 1] [i_12 - 1])) ? (((((/* implicit */_Bool) -3274411138222010868LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)64))) : (-9223372036854775799LL))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)36482))))));
                }
                for (unsigned char i_14 = 0; i_14 < 13; i_14 += 4) 
                {
                    var_31 = ((/* implicit */short) (~((+(5801561494564918093ULL)))));
                    arr_49 [i_12] [i_14] = ((/* implicit */unsigned short) (+((+(6462623819866855089LL)))));
                    var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_12 + 1] [i_11])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_6])) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) arr_44 [i_6] [i_6] [i_6] [i_14] [i_14]))))) : (arr_43 [i_6] [8] [i_12 + 2] [i_12 + 2]))))));
                    arr_50 [i_6] [i_11] [i_12 + 2] [i_12 + 2] = ((/* implicit */unsigned long long int) 3398286611U);
                }
                /* LoopNest 2 */
                for (unsigned short i_15 = 3; i_15 < 12; i_15 += 4) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 13; i_16 += 4) 
                    {
                        {
                            arr_58 [i_12] [(unsigned short)5] [i_15] [i_12] [i_12 + 2] [1U] [i_12 - 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_29 [i_12 + 1] [i_12 - 1] [i_12 - 2] [i_15] [i_15 - 1] [i_15 - 1]))));
                            arr_59 [i_15] [i_11] [(signed char)1] [2ULL] [i_16] [i_15] [i_15 + 1] = ((/* implicit */signed char) arr_25 [i_6] [i_6] [i_6]);
                            arr_60 [i_15] [i_15] [i_15 + 1] [i_11] [i_11] [i_11] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 1565982896))));
                            var_33 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_16] [i_16] [i_12 + 1] [12U] [i_16] [12U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_11] [i_11] [i_15 - 1] [0LL]))) : (var_1)))) ? (((/* implicit */unsigned long long int) var_1)) : (2603655701117331752ULL));
                        }
                    } 
                } 
                var_34 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_17)) : (var_6)))));
            }
            for (short i_17 = 1; i_17 < 10; i_17 += 3) 
            {
                arr_63 [i_6] [i_17] [12] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_33 [1U] [i_11])) ? (693365145U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44615)))))));
                var_35 ^= ((/* implicit */unsigned int) (+(arr_56 [12ULL] [2LL] [i_11] [i_17 + 3] [12LL])));
                /* LoopSeq 4 */
                for (unsigned short i_18 = 0; i_18 < 13; i_18 += 4) 
                {
                    arr_66 [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_11] [i_17 + 3])) ? (((/* implicit */unsigned int) arr_6 [i_6] [i_17 - 1] [i_17 - 1] [i_17 - 1])) : (arr_64 [i_6])));
                    var_36 ^= ((/* implicit */int) (+((-(arr_26 [i_6] [0ULL] [0ULL] [i_6])))));
                }
                for (int i_19 = 1; i_19 < 12; i_19 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_20 = 1; i_20 < 12; i_20 += 1) 
                    {
                        arr_73 [i_17] = ((/* implicit */int) var_2);
                        arr_74 [9U] [(unsigned char)10] [9U] [i_17] [i_19] [i_20 - 1] = ((/* implicit */unsigned long long int) (unsigned char)153);
                        var_37 *= ((/* implicit */unsigned long long int) arr_26 [(unsigned short)1] [i_17] [i_19] [i_20]);
                        var_38 = (+(((int) 111349357U)));
                        var_39 *= ((/* implicit */int) ((0U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)23)))));
                    }
                    for (signed char i_21 = 4; i_21 < 10; i_21 += 3) 
                    {
                        arr_77 [i_17 + 1] [i_17] = ((/* implicit */unsigned char) var_8);
                        var_40 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))));
                    }
                    arr_78 [i_17] [i_11] [i_17] [i_17] [i_19 - 1] = ((/* implicit */long long int) arr_19 [i_6]);
                    var_41 = ((/* implicit */unsigned char) var_15);
                }
                for (unsigned int i_22 = 0; i_22 < 13; i_22 += 3) 
                {
                    arr_82 [i_6] [(_Bool)1] [i_11] [i_17] [i_22] = ((/* implicit */unsigned long long int) arr_10 [i_6] [i_11] [i_17 + 2] [i_22]);
                    var_42 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)24))));
                }
                for (unsigned short i_23 = 0; i_23 < 13; i_23 += 4) 
                {
                    var_43 += ((/* implicit */long long int) (~(1726808502U)));
                    var_44 = ((/* implicit */unsigned int) min((var_44), (arr_68 [i_6] [i_11] [i_23] [i_6])));
                    arr_87 [i_6] [i_6] [i_6] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_65 [i_17 + 1] [i_17 + 1] [i_17 + 1] [i_17 + 3])) || (((arr_83 [i_6] [i_6] [i_6] [i_6] [i_17] [i_6]) || (var_16)))));
                    var_45 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_6] [i_6] [i_6])) && (((/* implicit */_Bool) arr_86 [i_23]))));
                    arr_88 [i_6] [5LL] [i_17 + 3] [i_17] = ((/* implicit */unsigned int) arr_19 [i_6]);
                }
            }
            for (long long int i_24 = 4; i_24 < 9; i_24 += 1) 
            {
                arr_92 [i_11] [i_11] [i_24] [i_6] = arr_20 [i_6];
                /* LoopSeq 2 */
                for (unsigned int i_25 = 3; i_25 < 9; i_25 += 2) 
                {
                    arr_96 [i_6] [i_11] [(unsigned short)8] [i_25] [i_24] [i_25 + 3] = ((/* implicit */unsigned short) arr_15 [i_6]);
                    var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)112)) ? (14497758912794221957ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                    arr_97 [i_24] [i_11] [i_25 + 3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_80 [i_24 + 1] [i_24 + 1] [i_25 - 1] [i_6])) ? (((/* implicit */int) (unsigned char)1)) : (arr_80 [i_24 - 4] [i_11] [i_25 + 2] [i_25 + 3])));
                }
                for (unsigned short i_26 = 1; i_26 < 12; i_26 += 4) 
                {
                    arr_101 [i_6] [i_11] [i_24] [i_26] [12U] [i_24] = ((unsigned char) arr_43 [i_26 + 1] [i_26 + 1] [i_26 - 1] [i_26 + 1]);
                    var_47 = ((/* implicit */unsigned char) var_9);
                    var_48 = ((/* implicit */unsigned char) (-(var_18)));
                }
            }
            for (unsigned long long int i_27 = 0; i_27 < 13; i_27 += 3) 
            {
                var_49 = ((/* implicit */signed char) var_16);
                var_50 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_76 [(unsigned short)11] [i_27] [i_11] [i_11] [i_11] [6LL] [i_6])) ? (((/* implicit */int) arr_4 [i_6] [i_11] [(unsigned short)4])) : (arr_76 [(signed char)4] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])));
                arr_105 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) arr_52 [i_6]);
            }
        }
        var_51 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_71 [8U])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_71 [(unsigned short)4])))))), (((((/* implicit */_Bool) ((unsigned short) (-2147483647 - 1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_10)))) : (8528794509289833351ULL))));
        arr_106 [0LL] = ((/* implicit */unsigned char) var_7);
        var_52 = ((/* implicit */unsigned short) min((var_52), (((/* implicit */unsigned short) var_18))));
    }
    for (long long int i_28 = 2; i_28 < 14; i_28 += 2) 
    {
        arr_111 [i_28] [i_28] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) 3147055295U)))))), ((((!(((/* implicit */_Bool) -6515941978376254199LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13772))) : (min((arr_12 [i_28] [i_28 - 1]), (((/* implicit */unsigned int) arr_17 [(signed char)12]))))))));
        arr_112 [(_Bool)1] = ((/* implicit */signed char) (short)32748);
        var_53 ^= ((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_110 [i_28 - 2]))) >= (var_6)))), (((signed char) arr_17 [i_28 - 1]))));
    }
    var_54 |= ((/* implicit */_Bool) min((996024359U), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)14))))), ((unsigned short)8190))))));
}
