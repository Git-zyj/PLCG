/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242001
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
    var_10 = ((/* implicit */unsigned short) var_3);
    var_11 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0] [i_1])) ^ ((~(((/* implicit */int) arr_5 [i_0] [i_1]))))));
                var_12 = ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) arr_1 [i_0] [9U])))), ((!(((/* implicit */_Bool) arr_3 [i_0] [i_1]))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_2 = 4; i_2 < 9; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            /* LoopSeq 2 */
            for (short i_4 = 3; i_4 < 10; i_4 += 2) 
            {
                /* LoopSeq 4 */
                for (short i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        var_13 *= ((/* implicit */short) ((unsigned long long int) arr_4 [i_4 - 3]));
                        var_14 = ((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_4 - 3] [i_4 + 1] [i_4] [i_4 - 3] [(_Bool)1] [i_4] [(_Bool)1])) % (((/* implicit */int) arr_20 [i_4 - 1] [i_4 + 1] [i_4] [i_4 + 1] [i_4] [i_4] [i_4 + 2]))));
                    }
                    for (unsigned long long int i_7 = 3; i_7 < 9; i_7 += 3) 
                    {
                        arr_26 [i_5] = ((/* implicit */short) (+(arr_23 [i_2 + 2] [i_2 + 2] [i_3] [i_4 - 3] [i_7 - 3] [(signed char)4] [3U])));
                        arr_27 [i_5] [i_7] [i_4] [i_7 - 3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_7] [i_7] [i_7 - 1] [(unsigned short)10] [i_7 + 1] [i_7] [i_7 + 1])) ? (((/* implicit */int) arr_2 [i_2] [i_5])) : (((/* implicit */int) arr_1 [i_2 - 4] [i_7 - 3]))));
                        arr_28 [i_2] [i_3] [(unsigned short)7] [i_5] [i_3] |= ((((/* implicit */int) arr_21 [i_4 - 3] [i_4 + 1] [i_4 + 1] [i_5] [i_7] [(unsigned short)9])) ^ (((/* implicit */int) ((((/* implicit */int) arr_22 [i_2] [i_2 - 1] [i_2] [i_2] [i_5] [1LL] [(_Bool)0])) < (((/* implicit */int) var_3))))));
                        arr_29 [i_2 - 2] [i_2] [i_2 - 3] [i_2] [i_2] = ((/* implicit */short) arr_9 [i_4 - 3] [i_2 - 2]);
                    }
                    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        arr_32 [i_2] [i_5] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_15 [i_2 + 3]))));
                        arr_33 [i_8] [(unsigned short)4] = ((/* implicit */int) ((unsigned short) arr_15 [i_4 - 3]));
                        var_15 = ((/* implicit */short) (~(((/* implicit */int) arr_19 [i_4 + 1] [i_4 - 1] [(short)2] [i_4 - 2]))));
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_2 - 2] [i_2] [i_3] [i_4] [8] [(unsigned short)1] [i_8])) ? (arr_23 [i_2 + 3] [(_Bool)0] [i_2 + 3] [i_4] [i_4 - 3] [1LL] [i_4]) : (((/* implicit */long long int) var_9))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        var_17 = ((/* implicit */int) max((var_17), ((-(((/* implicit */int) ((signed char) var_8)))))));
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) arr_36 [i_2 - 1] [i_4] [i_4 - 2] [i_4 + 1] [i_4 + 1])) % (((3416252457U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8184))))))))));
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_20 [i_2] [1U] [i_3] [i_4] [i_5] [i_3] [i_3]))));
                    }
                }
                for (unsigned short i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    var_20 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? ((~(((/* implicit */int) arr_17 [i_10] [i_4] [i_3] [i_2 - 3])))) : (((/* implicit */int) arr_20 [i_10] [i_4 + 1] [i_4] [i_4] [i_4 + 1] [i_4 + 2] [i_4]))));
                    arr_40 [i_10] [i_3] [i_4] [i_10] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)17485)) <= (((/* implicit */int) (unsigned short)57912)))))));
                    var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) && (((/* implicit */_Bool) var_8))));
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (((arr_39 [i_10] [i_10] [i_4 + 2] [i_3] [i_2]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4] [i_4 + 2]))))))))));
                }
                for (unsigned int i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    arr_43 [i_2 - 2] [i_3] [i_4 + 2] [i_11] = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_3)) | (((/* implicit */int) arr_31 [i_2] [i_3] [i_4] [i_3] [i_11]))))));
                    /* LoopSeq 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        arr_46 [i_2] [i_11] [i_2] = ((/* implicit */unsigned short) ((arr_9 [i_4 + 1] [i_2 - 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4] [i_3])))));
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((unsigned int) arr_20 [i_4 - 1] [i_4 - 1] [1] [i_4 + 1] [i_4] [i_4 + 1] [i_4])))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */long long int) ((arr_4 [i_2 + 1]) <= (2973813908U)));
                        var_25 += (_Bool)1;
                    }
                    arr_50 [i_11] [i_11] = ((/* implicit */unsigned int) 2147483621);
                }
                for (signed char i_14 = 4; i_14 < 8; i_14 += 4) 
                {
                    arr_53 [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_4 + 1] [i_14 + 1] [(short)0]))));
                    var_26 ^= ((/* implicit */signed char) ((((/* implicit */int) var_0)) * (((/* implicit */int) ((((/* implicit */int) (unsigned short)57925)) == (((/* implicit */int) arr_37 [i_2 + 3] [i_3] [i_4] [i_14])))))));
                }
                arr_54 [(unsigned short)10] [i_3] [i_4] &= ((/* implicit */signed char) 307505782U);
                var_27 += ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
            }
            for (unsigned int i_15 = 3; i_15 < 9; i_15 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_16 = 0; i_16 < 12; i_16 += 4) 
                {
                    for (unsigned char i_17 = 0; i_17 < 12; i_17 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_55 [i_2] [i_2 - 3] [i_3] [i_15 - 1])) < (((/* implicit */int) arr_3 [i_2 + 3] [i_2 + 3]))));
                            var_29 = ((/* implicit */int) arr_8 [i_2]);
                        }
                    } 
                } 
                var_30 = ((/* implicit */short) var_7);
                var_31 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_48 [i_15 + 3] [i_3] [i_3] [i_2 - 3] [i_3] [i_3])) / (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)))))));
                var_32 = ((/* implicit */unsigned long long int) arr_31 [i_2] [3LL] [i_2] [i_2] [i_2]);
                var_33 -= var_6;
            }
            var_34 = ((/* implicit */short) ((arr_19 [i_2] [i_2] [i_2] [i_3]) ? (((/* implicit */int) arr_3 [i_2 - 1] [i_2 + 2])) : (var_9)));
            /* LoopSeq 2 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                arr_65 [i_2] [i_2] = ((/* implicit */unsigned char) var_8);
                var_35 += ((/* implicit */long long int) (~(((/* implicit */int) arr_60 [i_2] [i_3] [(short)6] [i_2] [i_18] [i_2 + 1]))));
            }
            for (unsigned int i_19 = 0; i_19 < 12; i_19 += 1) 
            {
                arr_68 [(short)1] [i_3] [i_19] [i_19] = ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
                arr_69 [i_2] [i_3] [i_19] [i_2] = ((/* implicit */unsigned char) ((arr_18 [i_2] [i_2 - 2] [i_2 + 3] [i_2 - 1]) * (arr_18 [i_2] [i_2] [i_2 - 3] [i_2 + 3])));
            }
            arr_70 [i_3] = ((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_2 - 4] [i_2 - 4])) == (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
            var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) (~(((/* implicit */int) arr_2 [i_2] [i_2 - 3])))))));
        }
        /* LoopSeq 3 */
        for (unsigned char i_20 = 0; i_20 < 12; i_20 += 1) 
        {
            var_37 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_58 [i_2 - 2] [8U] [i_20] [i_20])) - (((/* implicit */int) arr_66 [i_2 - 4] [i_20] [i_20]))));
            /* LoopSeq 2 */
            for (signed char i_21 = 0; i_21 < 12; i_21 += 3) 
            {
                arr_76 [i_20] [i_21] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_47 [i_2] [i_2] [i_2 + 1] [i_2 - 1] [i_20]))));
                arr_77 [i_20] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_2 + 3] [i_2 - 4])) <= (((/* implicit */int) arr_10 [i_2 + 1] [i_2 - 4]))));
            }
            for (short i_22 = 0; i_22 < 12; i_22 += 2) 
            {
                /* LoopSeq 4 */
                for (short i_23 = 1; i_23 < 10; i_23 += 3) /* same iter space */
                {
                    arr_86 [i_2] [(unsigned short)3] [i_20] [i_2 - 1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_80 [i_2 + 3] [i_22] [i_22]))) + (arr_62 [i_2 + 3] [i_2 + 3] [i_2] [i_2])));
                    arr_87 [i_20] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_61 [i_2] [i_20] [i_22] [i_23] [i_23 + 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned char) -6855315376265541457LL)))));
                }
                for (short i_24 = 1; i_24 < 10; i_24 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_25 = 2; i_25 < 9; i_25 += 1) 
                    {
                        var_38 += ((/* implicit */unsigned int) arr_90 [i_24 + 2] [i_24] [i_25 + 3]);
                        arr_93 [i_20] [(signed char)4] [i_25 + 2] [i_24 + 1] = arr_82 [2U] [i_20] [i_20] [i_20];
                    }
                    arr_94 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22] &= ((/* implicit */int) arr_85 [i_24 + 1] [i_2 + 2] [i_2 - 4] [i_2]);
                }
                for (unsigned short i_26 = 2; i_26 < 9; i_26 += 1) 
                {
                    arr_98 [i_20] = ((/* implicit */int) (!(var_3)));
                    var_39 *= ((/* implicit */unsigned int) ((var_3) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_72 [i_2] [i_2] [i_2]))))) : (((/* implicit */int) (signed char)126))));
                }
                for (signed char i_27 = 0; i_27 < 12; i_27 += 3) 
                {
                    var_40 ^= ((/* implicit */short) (signed char)-115);
                    arr_101 [i_20] [(_Bool)1] [i_2] [i_27] &= ((/* implicit */short) arr_88 [i_27] [i_22]);
                }
                var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_80 [i_2 + 2] [i_20] [i_22])) != (((/* implicit */int) var_8))))) % (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_41 [i_2] [i_2] [i_2] [i_2]))))))))));
            }
        }
        for (unsigned short i_28 = 2; i_28 < 11; i_28 += 1) 
        {
            /* LoopNest 2 */
            for (int i_29 = 0; i_29 < 12; i_29 += 3) 
            {
                for (unsigned short i_30 = 0; i_30 < 12; i_30 += 4) 
                {
                    {
                        arr_110 [i_29] [i_2] [i_29] [i_30] [i_30] [i_2] = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_71 [(unsigned short)4] [i_29] [i_29])))) - (((/* implicit */int) ((((/* implicit */int) arr_10 [i_28] [i_30])) != (((/* implicit */int) var_8)))))));
                        var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) arr_81 [i_2] [i_29] [i_28 - 2] [i_2]))));
                    }
                } 
            } 
            arr_111 [i_2 - 4] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_31 [i_2] [i_2 - 2] [i_2] [i_28 - 1] [i_28])) % (((/* implicit */int) var_1))));
            var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) var_1))));
        }
        for (short i_31 = 3; i_31 < 10; i_31 += 3) 
        {
            var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) ((((/* implicit */int) arr_104 [i_2 + 1] [i_2 + 1])) % (((/* implicit */int) arr_48 [i_2 - 1] [i_2] [i_31 - 3] [i_2] [i_31] [i_2])))))));
            /* LoopSeq 3 */
            for (unsigned short i_32 = 1; i_32 < 11; i_32 += 3) 
            {
                var_45 &= ((/* implicit */unsigned char) arr_45 [i_2] [i_31] [i_31] [i_32 - 1] [i_2]);
                arr_116 [i_31] [i_2] = ((/* implicit */unsigned char) arr_10 [i_2 - 4] [i_2 - 4]);
                var_46 = ((/* implicit */unsigned int) arr_59 [(unsigned short)0] [i_32] [i_32] [i_32 + 1] [i_32 - 1]);
                arr_117 [i_2] [i_31 + 1] [i_32 - 1] &= (+(((/* implicit */int) (unsigned short)8192)));
                arr_118 [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_24 [i_2] [i_31 + 1] [i_2] [i_31 - 2] [i_2] [i_32 + 1] [(unsigned char)2])) + (((/* implicit */int) var_8)))) == (((/* implicit */int) var_6))));
            }
            for (signed char i_33 = 0; i_33 < 12; i_33 += 2) 
            {
                var_47 = ((/* implicit */signed char) max((var_47), (((/* implicit */signed char) ((short) arr_85 [4LL] [i_31] [i_33] [i_31 + 1])))));
                var_48 = ((((/* implicit */_Bool) arr_49 [i_2] [i_31 - 3] [i_33] [i_2 - 3] [i_2])) ? (((((/* implicit */int) arr_24 [(unsigned short)8] [i_31] [i_31] [i_2] [i_2] [i_2 - 2] [9])) / (((/* implicit */int) var_6)))) : (((/* implicit */int) var_3)));
            }
            for (unsigned int i_34 = 0; i_34 < 12; i_34 += 1) 
            {
                var_49 = ((/* implicit */short) max((var_49), (((/* implicit */short) ((arr_59 [i_2 + 1] [i_31 - 2] [i_34] [i_2 - 4] [i_2]) % (((/* implicit */long long int) -1248419779)))))));
                arr_124 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_119 [i_31 - 3] [i_31] [i_2 - 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)52095)) && (((/* implicit */_Bool) var_5))))) : ((-(((/* implicit */int) var_5))))));
            }
            arr_125 [i_31 - 3] [(unsigned short)10] = ((/* implicit */int) ((var_3) && (((/* implicit */_Bool) arr_16 [i_2 - 3] [i_31 + 2]))));
            /* LoopSeq 2 */
            for (unsigned short i_35 = 0; i_35 < 12; i_35 += 4) 
            {
                arr_129 [i_2] [i_31 + 2] [i_31] [i_35] &= ((((/* implicit */_Bool) arr_128 [i_31 - 1] [i_31 - 2] [i_31 - 2] [i_2 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_83 [i_31 - 3] [i_31 - 3] [i_31 + 2] [i_2 - 1]))) : (arr_128 [i_31 - 1] [i_31 + 2] [i_31 - 2] [i_2 + 2]));
                /* LoopSeq 1 */
                for (unsigned char i_36 = 0; i_36 < 12; i_36 += 4) 
                {
                    var_50 = ((/* implicit */short) var_4);
                    arr_132 [i_2] [i_31 - 1] [i_35] [i_2] [i_35] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_126 [i_31] [(short)1] [i_35])) <= (((/* implicit */int) arr_91 [i_2] [i_35] [i_2 - 1] [i_36] [i_31] [i_2])))))) - (arr_9 [i_35] [i_36])));
                    var_51 = ((/* implicit */unsigned char) (+(arr_12 [i_2 + 2] [i_31 - 3])));
                }
            }
            for (unsigned int i_37 = 0; i_37 < 12; i_37 += 2) 
            {
                arr_135 [i_37] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) <= (arr_62 [i_2 - 3] [i_31 - 1] [i_37] [i_2 - 4])));
                var_52 = ((/* implicit */signed char) (+(arr_23 [i_31] [i_31 - 2] [i_31 - 1] [i_2 + 2] [i_2 + 3] [i_2] [i_2])));
                var_53 = ((((/* implicit */long long int) ((/* implicit */int) var_7))) != (arr_41 [(short)9] [i_37] [i_31] [i_31 - 1]));
            }
        }
    }
    for (unsigned short i_38 = 0; i_38 < 17; i_38 += 2) 
    {
        var_54 = ((/* implicit */short) max((var_54), (((/* implicit */short) (-(((((/* implicit */unsigned int) (+(((/* implicit */int) arr_137 [i_38] [i_38]))))) + (max((arr_4 [i_38]), (((/* implicit */unsigned int) -1817006593)))))))))));
        var_55 = ((/* implicit */signed char) var_1);
        /* LoopNest 2 */
        for (unsigned char i_39 = 3; i_39 < 15; i_39 += 1) 
        {
            for (unsigned int i_40 = 1; i_40 < 16; i_40 += 4) 
            {
                {
                    arr_143 [i_40] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) arr_137 [i_39] [i_40 + 1])))), (var_7)))), (min((arr_4 [i_40]), (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (2147483647))))))));
                    var_56 = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((arr_4 [i_40 + 1]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57336)))))) + (arr_141 [i_40 - 1] [i_39 + 2] [15LL]))) ^ (((/* implicit */long long int) var_9))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_41 = 4; i_41 < 22; i_41 += 4) 
    {
        var_57 *= ((/* implicit */unsigned int) var_3);
        arr_147 [i_41] [i_41 - 3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_144 [i_41 - 4] [i_41 - 4]))));
    }
}
