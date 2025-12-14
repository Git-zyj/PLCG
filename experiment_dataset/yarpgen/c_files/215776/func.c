/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215776
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
    var_11 = ((/* implicit */int) 0LL);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_12 -= ((/* implicit */unsigned short) ((arr_0 [i_0] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 0LL)) != (1781938601182859024ULL)))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_13 = ((/* implicit */int) ((unsigned short) (signed char)0));
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (signed char i_3 = 1; i_3 < 8; i_3 += 3) 
                {
                    {
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 269124147U)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned char)97))));
                        var_15 = ((/* implicit */signed char) arr_7 [(signed char)2] [2] [i_3 + 3] [i_3 - 1]);
                        var_16 = (~(((/* implicit */int) arr_4 [0] [i_3 + 3] [i_3])));
                        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (unsigned short)7031))));
                        /* LoopSeq 2 */
                        for (int i_4 = 1; i_4 < 9; i_4 += 3) 
                        {
                            var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */int) arr_5 [2ULL])) : (((/* implicit */int) arr_1 [i_0]))))));
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_4 - 1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_10 [i_3] [i_3 - 1] [i_3] [i_3] [i_3])));
                            var_20 *= ((/* implicit */unsigned long long int) var_8);
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (4025843149U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))));
                            arr_12 [i_4] [i_2] [i_3 + 3] [i_2] [(signed char)4] [i_2] [i_0] = ((/* implicit */int) var_2);
                        }
                        for (short i_5 = 0; i_5 < 11; i_5 += 3) 
                        {
                            var_22 = ((/* implicit */int) ((2396892462807920474ULL) ^ (arr_11 [i_0] [2ULL] [(_Bool)1] [2ULL] [i_5])));
                            arr_15 [(signed char)4] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) arr_5 [i_2]);
                        }
                    }
                } 
            } 
        }
        var_23 -= (~((~(((/* implicit */int) var_10)))));
    }
    for (int i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_7 = 1; i_7 < 9; i_7 += 3) 
        {
            for (unsigned long long int i_8 = 3; i_8 < 9; i_8 += 3) 
            {
                {
                    arr_25 [i_6] [(signed char)6] [i_6] &= (~((~(((((/* implicit */long long int) ((/* implicit */int) (signed char)13))) ^ (var_7))))));
                    var_24 *= ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-15))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_6] [(unsigned short)3]))) : (arr_23 [i_6] [(unsigned short)8] [(unsigned short)2]));
                    arr_26 [0LL] [0LL] [i_7] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_22 [i_7] [i_7 + 1] [i_7])) >= (((/* implicit */int) arr_22 [i_7] [i_7 + 1] [i_7])))))));
                }
            } 
        } 
        arr_27 [i_6] [i_6] &= ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))));
    }
    for (int i_9 = 0; i_9 < 10; i_9 += 3) /* same iter space */
    {
        arr_31 [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_2 [i_9] [(unsigned short)4])), (arr_17 [i_9])))) && (((/* implicit */_Bool) ((arr_29 [i_9]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_9]))))))));
        /* LoopSeq 4 */
        for (signed char i_10 = 0; i_10 < 10; i_10 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_11 = 0; i_11 < 10; i_11 += 3) 
            {
                var_25 = ((/* implicit */unsigned long long int) arr_6 [i_11]);
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 3) 
                {
                    for (unsigned long long int i_13 = 3; i_13 < 7; i_13 += 3) 
                    {
                        {
                            arr_42 [i_9] [i_9] [i_9] [i_9] [i_11] [i_9] = ((/* implicit */signed char) (((~(-344120330))) - (((/* implicit */int) arr_24 [0U]))));
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((arr_10 [i_11] [(unsigned char)5] [8ULL] [i_13] [i_13 - 1]) / (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)119)) % (((/* implicit */int) arr_33 [i_11] [i_10] [i_9]))))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_14 = 0; i_14 < 10; i_14 += 3) 
                {
                    arr_46 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) (+(var_7)));
                    var_27 = ((((/* implicit */_Bool) arr_0 [i_10] [i_11])) && (((/* implicit */_Bool) arr_16 [(unsigned char)3] [(unsigned char)3])));
                    var_28 -= var_4;
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [3U])) ? (((/* implicit */int) arr_40 [0LL] [i_11] [i_11] [4ULL] [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_40 [i_9] [i_10] [i_11] [i_10] [i_14] [i_14] [i_14]))));
                }
                arr_47 [(unsigned short)1] [i_10] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_9] [i_9])) || (((/* implicit */_Bool) var_10))));
                arr_48 [i_11] = ((-571791973) & (((/* implicit */int) arr_18 [i_11] [i_10])));
            }
            arr_49 [i_9] [i_9] = ((/* implicit */int) arr_35 [i_9] [i_9] [(signed char)1]);
            arr_50 [(signed char)6] [(short)3] [i_9] = ((/* implicit */signed char) arr_36 [i_9]);
        }
        for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_16 = 1; i_16 < 7; i_16 += 3) 
            {
                var_30 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(var_3)))) * (((((/* implicit */unsigned long long int) 941778455U)) ^ (arr_20 [i_16 - 1] [i_16])))));
                arr_58 [i_15] [3] [i_15] = ((((((arr_44 [i_16 + 2] [i_16 - 1] [i_15] [i_9] [i_9]) / (((/* implicit */int) arr_24 [i_9])))) >= (((((/* implicit */_Bool) arr_51 [i_15])) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) var_1)))))) ? (((int) arr_14 [i_16 + 1] [i_16 + 1] [i_16] [i_16 + 2] [i_16 + 1] [i_16] [2])) : (((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) > (arr_10 [i_9] [i_9] [i_9] [i_9] [i_9])))) : (((/* implicit */int) (signed char)98)))));
                var_31 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)104))))) ? (((/* implicit */int) arr_18 [i_9] [i_9])) : (((/* implicit */int) arr_4 [10] [i_16 + 3] [i_16 + 3])))));
            }
            /* LoopNest 3 */
            for (signed char i_17 = 0; i_17 < 10; i_17 += 3) 
            {
                for (unsigned short i_18 = 0; i_18 < 10; i_18 += 3) 
                {
                    for (unsigned char i_19 = 1; i_19 < 7; i_19 += 3) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) ((67108832ULL) > (((/* implicit */unsigned long long int) -1LL)))))))));
                            arr_69 [i_9] [(signed char)6] [i_18] [i_17] [i_17] [(signed char)6] [i_9] |= ((/* implicit */unsigned char) var_10);
                            arr_70 [i_15] [i_15] [3U] [(unsigned char)9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_41 [i_19] [i_15] [i_19 + 3] [i_19 + 3] [(signed char)3] [i_19] [i_19])))) ? (((((/* implicit */unsigned long long int) var_7)) | (arr_41 [i_19 - 1] [i_15] [i_19 + 3] [i_19 + 3] [i_19 + 3] [i_19] [i_19]))) : (arr_41 [i_19] [i_15] [i_19 + 3] [i_19 + 1] [i_19] [(unsigned char)6] [i_19 + 1])));
                        }
                    } 
                } 
            } 
            /* LoopSeq 4 */
            for (unsigned long long int i_20 = 3; i_20 < 7; i_20 += 3) 
            {
                var_33 = ((/* implicit */unsigned char) (~((~(arr_11 [i_15] [i_15] [i_20 - 1] [i_20 - 1] [i_20])))));
                /* LoopSeq 1 */
                for (signed char i_21 = 0; i_21 < 10; i_21 += 3) 
                {
                    var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) (~(((/* implicit */int) max(((unsigned char)97), (((/* implicit */unsigned char) (signed char)0))))))))));
                    var_35 = ((/* implicit */long long int) (unsigned char)73);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_22 = 0; i_22 < 10; i_22 += 3) 
                    {
                        var_36 |= ((/* implicit */unsigned char) (unsigned short)64586);
                        var_37 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_72 [i_20 + 3] [i_20 - 1]))));
                        arr_78 [i_9] [(signed char)3] [i_9] [i_15] [i_9] [(signed char)3] = ((/* implicit */long long int) arr_21 [i_20 + 1] [i_15] [i_20]);
                        arr_79 [i_9] [i_9] [i_15] [i_9] [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_8)) | (((/* implicit */int) arr_39 [i_15] [(unsigned short)5] [i_21] [(unsigned short)7] [i_15] [i_15] [i_15])))) / (((/* implicit */int) arr_33 [(unsigned short)5] [i_21] [(unsigned short)5]))));
                    }
                }
            }
            for (short i_23 = 0; i_23 < 10; i_23 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_24 = 0; i_24 < 10; i_24 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_25 = 0; i_25 < 10; i_25 += 3) 
                    {
                        var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) max((((/* implicit */unsigned long long int) ((short) arr_77 [i_9] [0ULL] [8U] [i_24] [i_25]))), (((unsigned long long int) (unsigned short)58505)))))));
                        arr_88 [i_25] [2U] [i_15] [i_23] [i_15] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_39 [i_15] [(unsigned short)2] [(signed char)5] [i_9] [i_15] [i_9] [i_15])) ? (arr_68 [i_15] [i_15]) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((unsigned char) (_Bool)0)))))) ? (((((var_4) - (((/* implicit */unsigned long long int) arr_44 [i_25] [i_23] [i_23] [(signed char)5] [(signed char)5])))) / (min((((/* implicit */unsigned long long int) arr_55 [i_15])), (8045691406580781430ULL))))) : (((/* implicit */unsigned long long int) (+((-(var_3))))))));
                        arr_89 [i_15] [i_15] [i_23] [(short)5] [i_24] [i_23] [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_20 [1ULL] [i_15]))));
                        var_39 = ((/* implicit */long long int) ((unsigned char) (~(((((((/* implicit */int) var_10)) + (2147483647))) << (((((((/* implicit */int) (signed char)-38)) + (60))) - (22))))))));
                    }
                    arr_90 [(unsigned char)1] [(unsigned char)5] [i_15] [i_23] [i_24] [i_15] = ((/* implicit */signed char) arr_17 [8ULL]);
                }
                for (short i_26 = 0; i_26 < 10; i_26 += 3) /* same iter space */
                {
                    arr_95 [(unsigned char)5] [i_15] [i_26] = (unsigned short)65024;
                    arr_96 [i_15] = ((/* implicit */unsigned long long int) (signed char)93);
                    var_40 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_9]))))) ? ((+(((/* implicit */int) (signed char)0)))) : (arr_94 [i_9] [i_9] [i_15] [i_9])));
                }
                /* vectorizable */
                for (short i_27 = 0; i_27 < 10; i_27 += 3) /* same iter space */
                {
                    var_41 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [(unsigned char)2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-13))))) ? (((/* implicit */unsigned int) arr_44 [i_27] [i_23] [i_9] [i_9] [i_9])) : ((~(arr_60 [i_9] [i_9])))));
                    arr_99 [i_15] [i_15] = ((((/* implicit */int) var_8)) + (((/* implicit */int) (unsigned char)73)));
                    arr_100 [i_23] [i_15] [i_9] = ((/* implicit */int) (!((!(((/* implicit */_Bool) 67108832ULL))))));
                }
                var_42 = min((((/* implicit */long long int) ((int) (+(((/* implicit */int) arr_4 [i_9] [i_9] [i_9])))))), (var_9));
                var_43 *= (unsigned char)143;
            }
            for (unsigned int i_28 = 2; i_28 < 7; i_28 += 3) 
            {
                arr_104 [i_9] [i_9] [i_15] = ((/* implicit */unsigned long long int) (signed char)46);
                arr_105 [i_15] [i_15] = ((/* implicit */unsigned long long int) ((((var_3) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7031))))) && (((/* implicit */_Bool) arr_23 [i_9] [i_15] [i_15]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_29 = 4; i_29 < 8; i_29 += 3) 
                {
                    arr_109 [i_9] [4U] [i_9] [i_15] = ((/* implicit */short) 828079038);
                    var_44 = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) (unsigned char)180)), (124ULL)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_30 = 0; i_30 < 10; i_30 += 3) 
                    {
                        arr_114 [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_43 [i_15] [i_9] [i_29 + 1])) ? ((+(((/* implicit */int) arr_36 [i_28 + 1])))) : (((/* implicit */int) var_0))))));
                        arr_115 [i_9] [(_Bool)1] [i_15] [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */long long int) (~(((((/* implicit */int) (signed char)68)) >> (((((/* implicit */int) (short)32767)) - (32744)))))))) & (max((0LL), (5669976230678478871LL)))));
                    }
                    var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) ((unsigned char) (-(((/* implicit */int) (unsigned short)4851))))))));
                }
            }
            /* vectorizable */
            for (unsigned long long int i_31 = 0; i_31 < 10; i_31 += 3) 
            {
                var_46 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)49))) + (3484952007816384543ULL));
                var_47 = ((/* implicit */unsigned char) ((signed char) (-(arr_20 [i_9] [i_31]))));
            }
            var_48 = ((/* implicit */short) ((((((/* implicit */_Bool) max((arr_29 [i_9]), (((/* implicit */unsigned long long int) var_7))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) | (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 11391391365108446445ULL)))))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_9] [(short)0] [i_9] [i_9] [i_15] [i_15]))) / (var_6)))));
        }
        for (short i_32 = 0; i_32 < 10; i_32 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_33 = 0; i_33 < 10; i_33 += 3) 
            {
                for (unsigned long long int i_34 = 2; i_34 < 6; i_34 += 3) 
                {
                    {
                        var_49 ^= max((((((/* implicit */_Bool) ((unsigned char) 0ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_5)))) : (((arr_112 [7] [i_33] [1U] [7] [i_32] [i_9]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10820))))))), (((/* implicit */unsigned long long int) ((int) var_3))));
                        arr_127 [i_9] [i_9] [(signed char)1] [i_32] = ((/* implicit */unsigned long long int) var_8);
                    }
                } 
            } 
            var_50 -= ((/* implicit */signed char) ((((((/* implicit */int) arr_39 [(unsigned char)8] [4] [i_32] [i_32] [i_32] [i_9] [(unsigned char)8])) >= (((/* implicit */int) arr_39 [(short)6] [i_32] [i_32] [i_32] [i_32] [i_32] [i_32])))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_39 [(unsigned char)4] [i_32] [i_32] [i_32] [i_32] [i_32] [(signed char)2]))))) : (min((4604951724634712647LL), (((/* implicit */long long int) var_0))))));
            var_51 += ((signed char) ((9484678102051181435ULL) ^ (((/* implicit */unsigned long long int) -3587204189232470808LL))));
        }
        /* vectorizable */
        for (short i_35 = 0; i_35 < 10; i_35 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_36 = 4; i_36 < 8; i_36 += 3) 
            {
                for (short i_37 = 0; i_37 < 10; i_37 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_38 = 0; i_38 < 10; i_38 += 3) 
                        {
                            arr_139 [i_38] [i_37] [(signed char)2] [i_35] [i_9] |= ((((/* implicit */_Bool) arr_61 [0] [i_35] [i_35] [i_36 - 4])) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) (signed char)3)));
                            arr_140 [(unsigned char)0] [i_36] [i_36] [i_38] = var_8;
                            var_52 = ((/* implicit */signed char) var_6);
                        }
                        for (signed char i_39 = 1; i_39 < 9; i_39 += 3) 
                        {
                            var_53 = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_36 - 1] [i_37])) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)30))) * (4257548538U)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_119 [i_9] [i_37] [i_39]))) / (arr_97 [i_9] [i_35] [i_36] [(unsigned short)7])))));
                            arr_143 [i_36] [i_36 - 3] [2ULL] [i_36] [i_36] [i_36 + 2] [i_36 + 1] |= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) >= (5604981868049426622ULL))));
                            arr_144 [i_39] [i_36] [i_9] [i_9] [i_36] [i_9] = ((/* implicit */int) arr_52 [i_36]);
                            arr_145 [i_9] [i_35] [i_35] [i_36] = ((/* implicit */signed char) ((((/* implicit */_Bool) 9891826077135628774ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_36 - 2] [i_36 - 1] [i_39]))));
                            arr_146 [i_9] [i_36] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) (signed char)-24);
                        }
                        for (unsigned char i_40 = 0; i_40 < 10; i_40 += 3) 
                        {
                            var_54 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_94 [i_36 - 3] [4ULL] [4ULL] [i_35])) ? (((/* implicit */long long int) arr_94 [i_36 - 3] [(short)2] [(short)2] [i_9])) : (var_7)));
                            arr_150 [i_9] [8ULL] [i_36] [(unsigned char)4] [i_9] = ((/* implicit */unsigned long long int) ((unsigned char) (signed char)-68));
                        }
                        var_55 = ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_36])) != (((/* implicit */int) (unsigned char)141))));
                    }
                } 
            } 
            var_56 = ((/* implicit */_Bool) max((var_56), (((/* implicit */_Bool) (-(((/* implicit */int) arr_40 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))))));
        }
    }
    var_57 = ((/* implicit */int) ((unsigned int) (short)32767));
}
