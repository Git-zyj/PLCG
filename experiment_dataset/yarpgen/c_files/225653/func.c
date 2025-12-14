/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225653
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_17 = ((/* implicit */long long int) min((var_17), (var_15)));
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_14 [i_2] &= ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_13 [i_2])) + (((/* implicit */int) arr_13 [i_4]))))));
                            arr_15 [i_3] = ((/* implicit */short) ((int) (unsigned short)8));
                            arr_16 [i_3] [i_3] [(unsigned char)9] [(unsigned char)9] [i_4] = ((/* implicit */unsigned short) var_4);
                            var_18 = ((/* implicit */signed char) min(((unsigned short)19), ((unsigned short)2)));
                        }
                    } 
                } 
                arr_17 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) var_10)), ((unsigned short)1)))) / ((-(((/* implicit */int) var_9))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_13 [i_0])) < (((/* implicit */int) ((short) arr_4 [i_0])))))) : ((+((+(((/* implicit */int) arr_13 [i_1]))))))));
            }
            /* vectorizable */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_19 ^= ((/* implicit */signed char) arr_13 [i_1]);
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_10 [i_0] [i_1] [0] [i_5] [i_0] [i_5]))));
            }
            var_21 = ((/* implicit */long long int) min(((unsigned short)17), ((unsigned short)65518)));
            /* LoopNest 3 */
            for (short i_6 = 1; i_6 < 10; i_6 += 2) 
            {
                for (signed char i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        {
                            arr_29 [i_0] [(_Bool)1] [(_Bool)1] [i_7] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_6 + 1] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) arr_20 [8U] [i_6 + 1] [i_6 + 2] [i_6 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65530))) : (arr_20 [i_0] [i_6 - 1] [i_6 + 2] [i_6 + 1])))));
                            arr_30 [i_6] [9ULL] [i_6 + 1] [i_1] [i_6] = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) var_8))))) ? (arr_7 [i_7] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) arr_10 [i_6] [i_6] [i_6] [i_6] [i_6] [6]))));
                            var_22 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_0] [i_6 + 2] [i_6 + 2] [2] [i_8]))) : (arr_10 [i_8] [i_6 + 2] [i_6] [i_7] [i_6] [i_6]))), (((/* implicit */unsigned int) ((short) (unsigned short)25)))));
                            var_23 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) arr_25 [i_8] [i_1] [(_Bool)1])), (((((/* implicit */_Bool) arr_12 [i_7])) ? (arr_12 [i_0]) : (arr_10 [i_8] [i_7] [i_7] [i_7] [i_6] [i_8])))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (short i_9 = 0; i_9 < 12; i_9 += 3) 
            {
                for (signed char i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    for (unsigned long long int i_11 = 3; i_11 < 10; i_11 += 3) 
                    {
                        {
                            var_24 |= ((/* implicit */short) (-(((/* implicit */int) (unsigned short)65510))));
                            var_25 = ((/* implicit */long long int) (~((+(arr_10 [i_0] [i_1] [8LL] [i_11 + 2] [i_11] [i_9])))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            arr_44 [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65493)) ? (((/* implicit */int) (unsigned short)65534)) : (2147483647)));
            var_26 = ((/* implicit */unsigned char) arr_18 [i_0] [i_0] [i_12]);
            arr_45 [i_0] &= arr_12 [i_0];
        }
        /* LoopSeq 1 */
        for (long long int i_13 = 0; i_13 < 12; i_13 += 3) 
        {
            arr_49 [i_13] = ((/* implicit */unsigned char) var_9);
            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((int) var_4))) ? (arr_48 [i_0] [i_13] [i_13]) : (((/* implicit */int) arr_36 [i_0] [i_0] [(short)8] [i_13])))) < (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((var_5) ? (2147483640) : (((/* implicit */int) arr_36 [i_0] [i_0] [i_13] [i_13])))))))))))));
            var_28 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) arr_21 [i_0] [i_0] [i_0] [i_0])), (var_15))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_40 [i_0] [i_13])) : (((/* implicit */int) arr_47 [i_13])))))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)226))) : (var_13)))) * (((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_13]))) / (arr_31 [i_13] [i_0] [i_0] [i_0]))))) : (((/* implicit */long long int) ((49367404U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
            arr_50 [i_0] [i_13] = ((/* implicit */unsigned long long int) min((max((arr_31 [i_0] [i_13] [(short)1] [(_Bool)1]), (((var_14) ? (arr_18 [i_0] [i_13] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_13]))))))), (((/* implicit */long long int) arr_2 [i_0]))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_14 = 0; i_14 < 12; i_14 += 3) 
        {
            arr_54 [i_0] = ((/* implicit */int) ((min((27349272414221207LL), (((/* implicit */long long int) min((arr_13 [4U]), (((/* implicit */short) (_Bool)1))))))) * (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_0] [i_0])))));
            arr_55 [(_Bool)1] [i_14] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 416767030)) ? (((/* implicit */int) (short)-32760)) : (((/* implicit */int) (unsigned char)130))));
            /* LoopSeq 1 */
            for (int i_15 = 0; i_15 < 12; i_15 += 3) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_16 = 2; i_16 < 9; i_16 += 1) 
                {
                    arr_61 [i_0] [i_14] [i_15] [i_15] [i_15] [i_14] = ((/* implicit */unsigned int) var_11);
                    var_29 = ((/* implicit */unsigned int) ((arr_11 [i_16 + 2] [i_16] [i_16 - 2] [i_15] [i_16]) + (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_16 + 2] [6] [i_16 - 1] [i_16 - 1] [i_16 + 2])))));
                }
                for (unsigned char i_17 = 2; i_17 < 10; i_17 += 3) 
                {
                    var_30 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_17 + 2] [i_17 - 1] [i_17] [i_17 - 2])) ? (arr_11 [i_0] [(signed char)6] [(short)2] [i_0] [i_17]) : (((/* implicit */long long int) (-(-416767026))))))) ? (arr_20 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */int) arr_59 [9] [i_14] [9] [i_14])) : (((((/* implicit */int) (unsigned short)0)) ^ (((/* implicit */int) var_7))))))));
                    arr_65 [i_0] [i_14] [i_15] [i_17] [i_17 - 1] [i_15] = ((/* implicit */int) arr_10 [i_0] [i_14] [i_15] [i_17] [i_15] [i_14]);
                }
                for (unsigned short i_18 = 1; i_18 < 9; i_18 += 3) 
                {
                    arr_69 [i_0] [i_15] [i_0] [i_18 + 3] = ((/* implicit */unsigned int) ((min((((/* implicit */int) arr_56 [i_18] [i_18] [i_18 + 2] [i_18 + 3])), (arr_67 [i_15] [3] [i_18 - 1] [i_15]))) != (((((/* implicit */int) arr_56 [i_18] [i_18] [i_18 + 1] [i_18 + 2])) ^ (arr_67 [i_15] [10U] [i_18 - 1] [i_15])))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                    {
                        var_31 = ((/* implicit */short) var_5);
                        arr_72 [i_0] [i_0] [i_19 - 1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) ^ (arr_71 [(short)11] [i_14] [i_14] [i_14] [(short)11])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_12)));
                        var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_59 [i_18 + 2] [4ULL] [i_19 - 1] [i_19 - 1])) + (((/* implicit */int) arr_59 [i_18 + 2] [(_Bool)1] [i_19 - 1] [i_19 - 1])))))));
                    }
                    for (unsigned short i_20 = 0; i_20 < 12; i_20 += 1) 
                    {
                        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) arr_52 [i_18])) ? (((((/* implicit */_Bool) (unsigned short)65534)) ? (65408U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)106))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) min((var_16), (((/* implicit */unsigned char) arr_73 [i_15] [(unsigned char)0] [(unsigned char)0] [(unsigned char)0]))))))))));
                        arr_75 [i_15] [i_0] [i_14] [i_15] [i_18] [i_18] [i_20] = ((((/* implicit */_Bool) ((((var_5) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_3 [i_14] [i_15])))) / (((/* implicit */int) ((((/* implicit */int) (short)-23298)) != (((/* implicit */int) arr_1 [i_18])))))))) ? ((~(arr_67 [i_0] [i_0] [i_0] [i_15]))) : (((/* implicit */int) ((_Bool) (unsigned char)246))));
                        var_34 += ((/* implicit */unsigned short) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3))) <= (arr_12 [i_18 + 1]))));
                    }
                    /* vectorizable */
                    for (unsigned char i_21 = 0; i_21 < 12; i_21 += 2) 
                    {
                        var_35 = ((/* implicit */unsigned short) ((arr_39 [i_18] [i_18 + 1] [i_18] [i_18] [i_18]) ? (((/* implicit */int) arr_77 [(unsigned short)7] [i_14] [i_15] [i_14] [(_Bool)1] [i_18 + 1] [i_18])) : (((/* implicit */int) arr_39 [i_18] [i_18 + 1] [i_15] [i_15] [i_14]))));
                        var_36 = ((/* implicit */unsigned int) ((2) != (((/* implicit */int) (_Bool)1))));
                    }
                }
                arr_80 [i_15] [i_14] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)18757)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_22 = 2; i_22 < 10; i_22 += 3) 
                {
                    arr_84 [i_0] [i_15] [i_15] [(signed char)8] = ((/* implicit */long long int) (-(((/* implicit */int) ((signed char) var_1)))));
                    var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) ((((((/* implicit */int) arr_73 [i_0] [i_14] [i_15] [i_22])) <= (((/* implicit */int) (unsigned short)12)))) ? (var_11) : (((((/* implicit */int) arr_39 [i_0] [i_14] [i_14] [i_15] [i_22])) - (arr_48 [i_0] [i_14] [i_15]))))))));
                }
                /* vectorizable */
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    arr_88 [i_0] [i_15] [i_15] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (short)-5138))));
                    /* LoopSeq 3 */
                    for (signed char i_24 = 0; i_24 < 12; i_24 += 1) 
                    {
                        arr_92 [i_15] [(_Bool)1] [i_15] [i_23] [i_24] = var_15;
                        var_38 = ((/* implicit */unsigned int) ((unsigned long long int) arr_36 [i_0] [i_0] [i_15] [i_0]));
                        var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) ((((/* implicit */int) arr_43 [i_15] [i_15])) >> (((/* implicit */int) arr_43 [i_0] [i_23])))))));
                        var_40 *= ((/* implicit */_Bool) ((unsigned int) (short)-32754));
                    }
                    for (unsigned int i_25 = 0; i_25 < 12; i_25 += 3) 
                    {
                        var_41 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_82 [i_0] [i_0] [i_15] [i_23] [i_15] [i_0]))) <= (arr_87 [i_0] [i_0] [i_0] [i_0])));
                        arr_97 [i_0] [i_15] [i_15] [i_23] [i_25] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_79 [(_Bool)1] [i_14] [i_15] [i_15] [i_14] [i_25])) ? (((/* implicit */int) arr_86 [i_15] [i_15])) : (((/* implicit */int) arr_23 [1LL] [i_14] [i_14] [i_0]))));
                        arr_98 [i_25] [(signed char)3] [i_15] [i_14] [i_0] = ((/* implicit */unsigned long long int) arr_51 [i_15]);
                        arr_99 [10] [10] [i_0] [i_23] [i_25] &= ((/* implicit */unsigned char) arr_9 [i_0] [i_23] [i_0] [i_0]);
                    }
                    for (unsigned int i_26 = 4; i_26 < 9; i_26 += 2) 
                    {
                        var_42 = ((/* implicit */unsigned long long int) arr_60 [i_26] [i_26 - 3] [i_26] [i_26 + 1] [i_26 - 1] [i_26 - 2]);
                        var_43 = ((/* implicit */unsigned int) ((signed char) arr_63 [i_26] [i_15] [i_26 + 1] [i_15] [i_23]));
                    }
                }
                for (signed char i_27 = 0; i_27 < 12; i_27 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_28 = 1; i_28 < 11; i_28 += 3) 
                    {
                        var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_38 [i_28 - 1] [i_27] [i_15] [5ULL] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? ((~(((/* implicit */int) arr_51 [i_28])))) : (arr_57 [i_14] [i_28 + 1] [8U])));
                        var_45 -= ((/* implicit */unsigned char) (unsigned short)65510);
                        arr_109 [(unsigned char)8] [(unsigned char)8] [i_15] [i_0] [(unsigned char)8] [i_15] |= ((/* implicit */long long int) ((unsigned short) var_11));
                        var_46 = ((/* implicit */unsigned short) ((var_15) >= (((/* implicit */long long int) ((arr_64 [i_15] [2LL] [i_15] [i_15]) * (arr_107 [i_0] [i_15] [i_0]))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_29 = 2; i_29 < 10; i_29 += 3) 
                    {
                        arr_114 [i_0] [i_27] [i_15] [2] [i_0] [i_0] &= ((/* implicit */signed char) ((int) var_0));
                        var_47 ^= ((/* implicit */short) arr_93 [(signed char)0] [i_27] [1U] [i_14] [i_0]);
                    }
                    var_48 = ((/* implicit */unsigned short) arr_67 [i_0] [i_0] [i_0] [i_15]);
                }
                arr_115 [i_15] = ((/* implicit */signed char) arr_85 [i_0] [i_14] [i_14] [i_15]);
            }
            arr_116 [i_0] [i_14] [i_14] = ((/* implicit */unsigned char) arr_58 [9] [i_0] [9] [i_14]);
        }
    }
    var_49 = ((/* implicit */unsigned short) (short)-1);
    var_50 *= ((/* implicit */_Bool) ((long long int) var_5));
    var_51 = ((/* implicit */unsigned long long int) ((var_9) ? (((var_4) / (((/* implicit */long long int) (+((-2147483647 - 1))))))) : (min((((/* implicit */long long int) var_1)), (max((var_15), (((/* implicit */long long int) 3114554037U))))))));
}
