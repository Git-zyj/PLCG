/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249335
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
    var_13 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)102)), (var_4)))) ? (((/* implicit */long long int) var_4)) : (var_0))));
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1]))));
        var_15 = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (16U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_3) : (var_3)))))), (((/* implicit */unsigned int) ((((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */short) arr_0 [i_0] [i_0]))))) ^ ((~(((/* implicit */int) arr_1 [i_0])))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
    {
        var_16 = ((signed char) ((((/* implicit */_Bool) ((arr_4 [4]) / (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((_Bool) arr_4 [i_1]))) : (arr_2 [i_1])));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_2 = 4; i_2 < 18; i_2 += 4) 
        {
            var_17 = ((/* implicit */unsigned short) var_9);
            arr_7 [i_1] = ((/* implicit */int) ((long long int) arr_4 [i_2 - 1]));
            /* LoopSeq 2 */
            for (signed char i_3 = 1; i_3 < 17; i_3 += 4) 
            {
                arr_11 [i_1] [2] [i_3] [i_3] = ((/* implicit */signed char) var_9);
                arr_12 [i_3] [i_3] = ((/* implicit */unsigned short) ((int) arr_5 [i_3 + 3] [i_2 - 3]));
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) arr_8 [i_2] [i_4] [i_3 + 3] [i_4]))));
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 2]))));
                }
            }
            for (int i_5 = 0; i_5 < 20; i_5 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
                {
                    var_20 = ((/* implicit */int) ((signed char) arr_8 [i_2 + 2] [i_5] [i_2 + 2] [i_2 - 4]));
                    var_21 = ((/* implicit */signed char) (-(arr_16 [i_2] [i_2] [i_2 - 3])));
                    arr_21 [i_6] [i_2] [6ULL] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_1] [i_1])) ? (((int) arr_16 [i_6] [i_6] [i_6])) : (((((/* implicit */_Bool) (signed char)86)) ? (((/* implicit */int) (signed char)-105)) : (65535)))));
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) (signed char)100)) | (((/* implicit */int) (unsigned char)5))))))));
                }
                for (unsigned int i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_5]))));
                    /* LoopSeq 3 */
                    for (signed char i_8 = 2; i_8 < 19; i_8 += 4) 
                    {
                        arr_29 [(signed char)15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (arr_25 [i_2] [i_2] [i_2 - 4]) : (((/* implicit */unsigned long long int) ((unsigned int) var_6)))));
                        var_24 = ((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2]))) <= (arr_5 [i_2] [i_2])))));
                        arr_30 [i_2] [(signed char)1] = ((/* implicit */int) ((unsigned short) var_10));
                    }
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 4) 
                    {
                        var_25 -= ((/* implicit */signed char) (~(((/* implicit */int) arr_31 [i_5] [i_2 - 1] [i_2] [i_2]))));
                        var_26 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)248))));
                        var_27 ^= ((/* implicit */unsigned short) ((((((var_3) + (2147483647))) >> (((((/* implicit */int) var_11)) - (22079))))) / ((+(arr_20 [6] [i_5] [i_7] [(signed char)10])))));
                        arr_34 [i_1] |= ((/* implicit */signed char) (-(arr_13 [i_2] [i_2 - 3] [i_2 - 3] [i_5] [i_7] [i_9])));
                    }
                    for (signed char i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        arr_37 [i_1] [i_1] [7LL] [i_5] [i_7] [i_10] = ((/* implicit */int) (-(var_7)));
                        arr_38 [i_1] [i_2] [i_5] [i_1] [i_10] = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)-8))));
                        arr_39 [i_1] [i_2] [i_5] [i_7] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_2 - 1] [i_5] [i_7] [i_5]))) / (arr_36 [i_2 - 4] [i_2 - 4] [i_2 - 4] [i_2] [i_2] [i_2] [i_2])));
                        var_28 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_6 [i_2] [(unsigned short)18]))) ? (((/* implicit */unsigned int) var_3)) : (((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_2] [(signed char)8] [i_7] [i_10])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1])))))));
                    }
                }
                arr_40 [i_1] [(signed char)16] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_2 - 1] [i_2 - 4] [i_2 - 2]))));
            }
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 20; i_11 += 4) 
        {
            var_29 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) (unsigned short)13593)) ? (-1720117477) : (((/* implicit */int) arr_3 [i_11])))));
            arr_44 [i_11] = ((/* implicit */unsigned long long int) ((short) arr_4 [i_1]));
            var_30 = ((/* implicit */unsigned int) ((arr_25 [i_1] [i_1] [i_11]) | (((/* implicit */unsigned long long int) arr_2 [i_1]))));
            /* LoopSeq 4 */
            for (short i_12 = 1; i_12 < 16; i_12 += 4) 
            {
                /* LoopSeq 2 */
                for (int i_13 = 0; i_13 < 20; i_13 += 4) 
                {
                    var_31 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_12 + 1]))) & (arr_18 [i_12 - 1] [i_12 - 1] [i_12 - 1]));
                    arr_49 [i_12] = ((/* implicit */_Bool) ((long long int) arr_23 [i_1] [i_1] [(signed char)7] [i_12] [i_13]));
                }
                for (signed char i_14 = 2; i_14 < 16; i_14 += 4) 
                {
                    arr_53 [i_1] [i_12] [i_12] [i_12] = ((arr_42 [i_12 + 3] [i_12 + 2] [i_12]) / (var_3));
                    var_32 |= ((/* implicit */long long int) (~(var_7)));
                }
                var_33 = ((/* implicit */signed char) ((arr_25 [i_12 + 2] [i_12 + 1] [i_12 + 2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_1] [i_1] [i_1] [i_1])))));
                var_34 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_47 [i_11] [i_12 - 1] [i_12])) ? (arr_14 [i_1] [i_11] [6] [i_12]) : (((/* implicit */unsigned long long int) ((unsigned int) arr_47 [i_1] [14] [i_12])))));
            }
            for (unsigned int i_15 = 1; i_15 < 16; i_15 += 4) /* same iter space */
            {
                arr_58 [i_1] [i_1] = ((/* implicit */unsigned short) (-(arr_4 [i_15 - 1])));
                /* LoopSeq 1 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    /* LoopSeq 4 */
                    for (signed char i_17 = 2; i_17 < 18; i_17 += 4) 
                    {
                        var_35 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-107))) & (-1151290813446782359LL)));
                        arr_63 [i_11] |= ((/* implicit */int) ((long long int) arr_15 [i_15 + 4] [i_17 - 1] [i_1] [i_17 + 1] [i_1]));
                        var_36 = ((/* implicit */int) ((unsigned int) arr_51 [i_15 + 4] [i_15 - 1] [i_17] [i_17 + 1] [i_17] [i_17 + 2]));
                    }
                    for (signed char i_18 = 0; i_18 < 20; i_18 += 4) 
                    {
                        var_37 &= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                        var_38 = arr_51 [13] [i_15 + 2] [i_11] [i_11] [13] [13];
                        arr_67 [i_1] [i_11] [i_15] [(short)6] = ((/* implicit */unsigned int) ((var_0) & (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_11] [i_15 + 4] [i_15 + 1])))));
                    }
                    for (unsigned long long int i_19 = 3; i_19 < 18; i_19 += 4) 
                    {
                        arr_71 [i_1] [i_11] [i_15] [i_16] [i_19] = ((((/* implicit */_Bool) ((int) (unsigned char)248))) ? (((/* implicit */int) (unsigned short)32767)) : (((/* implicit */int) (unsigned short)32783)));
                        var_39 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_68 [i_1] [i_11] [(unsigned char)19] [9LL])) || (((/* implicit */_Bool) var_9)))))));
                        var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_65 [i_15 + 4] [i_15 + 2] [i_16] [i_16] [i_19 + 1])) ? (arr_15 [i_15 + 3] [i_15 + 2] [i_11] [16U] [i_19 + 2]) : (arr_65 [i_15 + 2] [i_15 + 2] [(unsigned short)0] [i_19] [i_19 - 3])));
                        var_41 -= ((/* implicit */int) ((((/* implicit */int) var_2)) >= (arr_23 [i_19 - 3] [i_16] [i_15 + 2] [i_11] [i_1])));
                        var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_1))))))))));
                    }
                    for (unsigned short i_20 = 0; i_20 < 20; i_20 += 4) 
                    {
                        var_43 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_46 [i_15 + 4] [13] [i_15 + 3] [i_15 + 3])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_17 [i_16] [i_16])) : (((/* implicit */int) arr_6 [i_1] [i_16]))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) arr_20 [i_1] [i_11] [i_16] [i_20])) : (var_12)))));
                        var_44 = ((/* implicit */int) ((unsigned int) arr_8 [i_15 + 3] [i_11] [i_15 - 1] [i_15 + 2]));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_21 = 1; i_21 < 18; i_21 += 4) 
                    {
                        var_45 = (+(((((/* implicit */int) var_2)) | (var_5))));
                        var_46 = ((/* implicit */signed char) (+(((var_0) / (((/* implicit */long long int) var_5))))));
                    }
                }
                /* LoopNest 2 */
                for (signed char i_22 = 0; i_22 < 20; i_22 += 4) 
                {
                    for (signed char i_23 = 1; i_23 < 17; i_23 += 4) 
                    {
                        {
                            var_47 -= ((/* implicit */unsigned char) var_3);
                            var_48 -= ((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) var_5)))));
                            var_49 = ((/* implicit */unsigned short) (-(var_7)));
                            var_50 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_26 [i_15] [i_15] [i_15] [i_15 + 1] [i_15] [i_15 - 1] [i_23 - 1]))));
                            var_51 = ((/* implicit */signed char) ((int) arr_66 [7] [i_11] [i_15 + 4] [i_22] [i_22] [(_Bool)1]));
                        }
                    } 
                } 
            }
            for (unsigned int i_24 = 1; i_24 < 16; i_24 += 4) /* same iter space */
            {
                arr_86 [(unsigned short)10] [i_11] [i_24] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)114))) ^ (5521647150331839837LL)))) ? (((/* implicit */int) ((arr_85 [15] [i_11] [15] [i_11]) <= (((/* implicit */int) arr_83 [i_1] [i_1] [i_24]))))) : (((((/* implicit */_Bool) arr_33 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)65520)) : (((/* implicit */int) var_1))))));
                arr_87 [i_1] [i_1] [1] [i_24] = ((/* implicit */unsigned char) ((unsigned short) arr_8 [i_24 + 4] [i_11] [i_24] [i_24 + 1]));
            }
            for (unsigned int i_25 = 1; i_25 < 16; i_25 += 4) /* same iter space */
            {
                arr_90 [i_1] [i_11] [i_25] [i_1] = ((/* implicit */unsigned short) (unsigned char)22);
                /* LoopSeq 3 */
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    var_52 = ((/* implicit */short) ((_Bool) ((unsigned short) var_6)));
                    var_53 |= ((/* implicit */signed char) (~((~(((/* implicit */int) (signed char)-63))))));
                }
                for (short i_27 = 0; i_27 < 20; i_27 += 4) /* same iter space */
                {
                    var_54 = ((/* implicit */signed char) (-(((/* implicit */int) ((var_0) >= (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
                    /* LoopSeq 1 */
                    for (signed char i_28 = 1; i_28 < 18; i_28 += 4) 
                    {
                        arr_97 [i_28] [i_28] [i_28] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_81 [i_1] [i_1]))) ? (arr_25 [i_25 + 3] [i_25 + 3] [i_28 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                        arr_98 [i_28] [i_11] [(_Bool)1] [i_27] [i_28] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (arr_92 [i_1] [i_11] [i_25 - 1])));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_29 = 0; i_29 < 20; i_29 += 4) 
                    {
                        var_55 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) (signed char)-70)) && (((/* implicit */_Bool) (unsigned char)15))))));
                        var_56 = ((/* implicit */unsigned long long int) min((var_56), (((/* implicit */unsigned long long int) (-(arr_72 [12] [i_29]))))));
                        arr_103 [(unsigned short)9] [i_11] [3U] [3U] [i_27] [i_27] [i_29] = ((/* implicit */int) ((unsigned long long int) arr_16 [i_25 + 1] [i_11] [i_11]));
                        var_57 = ((/* implicit */signed char) ((short) arr_8 [i_25 + 1] [i_1] [2] [2]));
                    }
                }
                for (short i_30 = 0; i_30 < 20; i_30 += 4) /* same iter space */
                {
                    var_58 = (signed char)-5;
                    /* LoopSeq 3 */
                    for (signed char i_31 = 3; i_31 < 19; i_31 += 4) 
                    {
                        var_59 -= ((/* implicit */signed char) arr_13 [i_25 - 1] [i_25 + 3] [i_30] [i_30] [i_31] [i_31 - 3]);
                        var_60 = ((/* implicit */int) (((+(arr_22 [(unsigned short)4] [i_11] [i_11] [i_30] [i_31] [i_30]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_82 [i_11] [i_30])))));
                        var_61 = ((/* implicit */_Bool) arr_45 [i_11] [i_31]);
                    }
                    for (long long int i_32 = 0; i_32 < 20; i_32 += 4) 
                    {
                        var_62 = ((int) arr_66 [i_11] [i_11] [i_25] [i_25] [i_25] [i_25 - 1]);
                        var_63 &= ((/* implicit */unsigned char) arr_113 [i_25 + 2] [i_25 + 2] [i_25 - 1] [i_25 + 4]);
                    }
                    for (unsigned int i_33 = 0; i_33 < 20; i_33 += 4) 
                    {
                        var_64 -= ((/* implicit */unsigned short) var_0);
                        var_65 -= ((((/* implicit */_Bool) arr_101 [i_1] [i_1] [i_11] [i_25] [i_25] [i_30] [i_33])) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) arr_79 [i_25 + 3] [i_25 - 1] [i_25] [i_25 + 4])));
                        var_66 = ((/* implicit */signed char) ((unsigned short) var_8));
                        var_67 = ((/* implicit */unsigned short) (-(arr_62 [i_25 + 3] [i_25 + 2] [i_25] [i_25] [i_25 + 2])));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_34 = 0; i_34 < 20; i_34 += 4) 
                    {
                        var_68 = ((int) arr_51 [i_11] [(unsigned short)12] [i_25 + 3] [i_25 + 2] [i_25 + 2] [17]);
                        var_69 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_4)) / (arr_18 [i_25 + 2] [0] [(unsigned short)11])));
                        arr_119 [i_1] [i_11] [i_25] [i_30] [i_34] = ((/* implicit */int) var_8);
                    }
                    for (int i_35 = 0; i_35 < 20; i_35 += 4) 
                    {
                        var_70 &= ((/* implicit */unsigned short) ((unsigned long long int) (_Bool)1));
                        arr_124 [i_1] [i_1] [i_11] [i_11] [i_25] [i_30] [i_35] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_65 [i_25 + 2] [i_25 + 2] [i_25 - 1] [i_25 + 2] [i_25])) ? (arr_20 [i_25 - 1] [i_25] [i_25] [i_25 + 1]) : (arr_20 [i_1] [i_11] [i_25] [i_30])));
                        arr_125 [i_1] [i_11] [i_25] [i_30] [i_30] [i_35] [i_35] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_35])) ? (((/* implicit */int) arr_113 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_122 [i_1]))))) ? (((((/* implicit */_Bool) (unsigned char)44)) ? (arr_74 [i_11] [i_25] [i_30] [(signed char)15]) : (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
                        var_71 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_70 [i_25] [i_25 + 2]))));
                    }
                    arr_126 [i_30] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) (unsigned char)235))));
                }
            }
        }
        for (unsigned long long int i_36 = 1; i_36 < 18; i_36 += 4) 
        {
            var_72 = ((/* implicit */int) max((((((/* implicit */_Bool) (unsigned char)241)) ? (14126718547008578459ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-117))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_70 [i_1] [i_36])) ? (max((var_12), (((/* implicit */unsigned int) -232575169)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_36 - 1] [i_36 + 2]))))))));
            var_73 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) min((arr_92 [i_1] [i_36 + 1] [i_36 + 2]), (((/* implicit */int) var_8)))))));
        }
        var_74 = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) arr_23 [i_1] [i_1] [i_1] [i_1] [(signed char)5])))));
    }
    /* vectorizable */
    for (unsigned short i_37 = 0; i_37 < 20; i_37 += 4) /* same iter space */
    {
        arr_132 [i_37] [i_37] = ((/* implicit */long long int) arr_116 [i_37] [i_37] [i_37] [(_Bool)0] [1]);
        var_75 = ((/* implicit */int) min((var_75), (((/* implicit */int) ((unsigned long long int) arr_121 [i_37] [i_37] [(unsigned short)4] [i_37] [i_37])))));
        arr_133 [i_37] = ((/* implicit */int) (-(((((/* implicit */_Bool) var_0)) ? (arr_100 [i_37] [(short)17] [i_37] [i_37] [(unsigned char)10]) : (var_12)))));
    }
}
