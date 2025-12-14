/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243794
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
    var_13 = ((/* implicit */long long int) var_7);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        var_14 = ((/* implicit */int) max((var_14), (((int) arr_2 [i_0]))));
        arr_4 [i_0] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((short) var_4))) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(signed char)4] [6U]))))));
        var_15 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_16 = ((/* implicit */signed char) ((min((arr_2 [i_0 - 2]), (arr_2 [i_0 + 1]))) | (arr_2 [i_0 + 1])));
        var_17 = ((/* implicit */unsigned long long int) (((-(((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_1 [i_0])))))) / (((/* implicit */int) var_3))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15851)) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) (signed char)-49))))) ? (min((var_4), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_5 [i_1]))))))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)84))))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((arr_6 [i_1]) / (((((/* implicit */_Bool) max((var_4), (arr_5 [i_1])))) ? (((/* implicit */int) ((signed char) var_7))) : (((/* implicit */int) var_12))))));
                    var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */int) arr_10 [i_1] [i_2] [i_3] [i_1])) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1])))) / (((((/* implicit */int) var_6)) / (((/* implicit */int) arr_10 [i_1] [(unsigned char)23] [i_1] [i_1]))))));
                    arr_13 [i_1] = ((/* implicit */unsigned char) arr_6 [i_1]);
                }
            } 
        } 
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)63))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [(signed char)12] [i_1] [i_1])) ? (((/* implicit */int) arr_7 [(short)2] [i_1] [(signed char)16])) : (((/* implicit */int) (signed char)-63))))) : (((long long int) arr_7 [i_1] [i_1] [(unsigned short)14]))))) ? (((/* implicit */long long int) arr_12 [0] [(signed char)2] [22LL])) : ((+(arr_5 [i_1])))));
    }
    for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                for (unsigned short i_7 = 1; i_7 < 21; i_7 += 1) 
                {
                    {
                        arr_24 [i_4] [i_6] [i_4] = max((((/* implicit */long long int) (signed char)22)), (((((/* implicit */long long int) ((((/* implicit */int) arr_0 [(short)4] [i_6])) / (((/* implicit */int) var_3))))) % (arr_16 [21] [i_5] [i_6]))));
                        arr_25 [i_4] [i_6] [i_5] [i_4] = ((/* implicit */long long int) arr_19 [i_4] [i_5] [i_6] [(short)4]);
                        var_22 = ((/* implicit */unsigned short) ((signed char) arr_9 [i_4]));
                    }
                } 
            } 
            arr_26 [i_4] [(signed char)10] [i_5] = ((/* implicit */unsigned long long int) arr_7 [i_5 - 2] [i_4] [i_5 - 1]);
        }
        for (long long int i_8 = 0; i_8 < 23; i_8 += 1) 
        {
            arr_29 [i_4] [i_4] = ((/* implicit */short) var_4);
            /* LoopSeq 3 */
            for (int i_9 = 0; i_9 < 23; i_9 += 1) /* same iter space */
            {
                var_23 = arr_5 [i_4];
                var_24 *= ((/* implicit */short) ((signed char) min((arr_9 [i_4]), (((/* implicit */long long int) arr_28 [i_9] [i_8] [i_4])))));
            }
            for (int i_10 = 0; i_10 < 23; i_10 += 1) /* same iter space */
            {
                var_25 = ((/* implicit */short) ((((((/* implicit */_Bool) max((var_8), (arr_21 [i_4])))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */long long int) 461768343U)) ^ (arr_9 [i_10]))))) & (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))));
                /* LoopSeq 4 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (arr_30 [5LL] [i_8] [17ULL] [5LL])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [(signed char)15] [i_8] [i_8] [i_4]))) < (var_10))))) : (min((((/* implicit */long long int) var_9)), (arr_11 [i_4])))))) ? (((/* implicit */int) ((max((((/* implicit */long long int) arr_37 [i_4] [i_4] [i_4])), (4194300LL))) < (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_31 [(unsigned short)20] [(signed char)8] [(unsigned short)8] [i_11]))))))) : ((~(((/* implicit */int) arr_14 [20ULL]))))));
                    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (-(((((/* implicit */int) ((unsigned char) arr_14 [i_4]))) / (arr_6 [2ULL]))))))));
                    /* LoopSeq 2 */
                    for (signed char i_12 = 0; i_12 < 23; i_12 += 2) /* same iter space */
                    {
                        var_28 *= ((/* implicit */_Bool) ((short) min((arr_11 [i_12]), (((/* implicit */long long int) (short)-8)))));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) max((var_7), (((/* implicit */unsigned short) arr_21 [i_4])))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_2))) >= (arr_16 [i_4] [0] [i_4])))), (arr_7 [(signed char)12] [i_4] [i_4]))))) : (arr_11 [i_4])));
                        arr_42 [i_4] [i_11] [i_10] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_4] [i_4] [(signed char)21] [i_4] [(unsigned short)13])) ? (((((/* implicit */_Bool) arr_40 [i_4] [i_8] [(signed char)3] [i_12])) ? (((/* implicit */int) arr_22 [i_10] [i_10] [3LL] [i_4] [(short)21])) : (((/* implicit */int) arr_40 [(signed char)19] [i_8] [11] [i_8])))) : ((~(((/* implicit */int) arr_22 [(signed char)2] [0] [i_8] [i_4] [i_8]))))));
                        arr_43 [i_4] [i_4] [15ULL] [i_4] [i_4] [(short)15] = var_0;
                    }
                    for (signed char i_13 = 0; i_13 < 23; i_13 += 2) /* same iter space */
                    {
                        var_30 = ((/* implicit */long long int) arr_22 [i_4] [i_4] [i_4] [i_4] [i_13]);
                        var_31 = ((/* implicit */signed char) ((arr_12 [i_4] [22] [i_4]) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_35 [(signed char)12] [i_4])) : (((/* implicit */int) arr_14 [i_10]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) arr_1 [i_11])))))));
                    }
                    var_32 = ((/* implicit */unsigned int) (unsigned short)61440);
                    arr_46 [17U] [i_8] [i_8] [i_4] [i_8] [i_8] = ((/* implicit */unsigned short) var_10);
                }
                for (long long int i_14 = 0; i_14 < 23; i_14 += 2) 
                {
                    arr_50 [i_4] [i_10] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (min((((/* implicit */long long int) arr_10 [i_4] [(signed char)14] [(unsigned short)18] [i_4])), (arr_9 [i_4]))) : (arr_11 [i_4])))) ? (((/* implicit */unsigned long long int) arr_45 [0ULL] [(unsigned short)15] [i_10] [i_4] [(signed char)20] [(signed char)20] [i_4])) : (var_5)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_15 = 0; i_15 < 23; i_15 += 1) 
                    {
                        var_33 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(arr_34 [i_15] [i_15] [i_15] [(signed char)1]))))));
                        var_34 = ((/* implicit */unsigned char) arr_23 [i_4] [(signed char)0] [(signed char)9] [(signed char)7]);
                        var_35 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_4] [i_4]))));
                        arr_54 [15] [(unsigned char)1] [i_10] [i_14] [i_4] = ((/* implicit */short) ((1642981433) ^ (((/* implicit */int) (unsigned short)60449))));
                    }
                }
                for (signed char i_16 = 0; i_16 < 23; i_16 += 1) 
                {
                    var_36 ^= ((/* implicit */signed char) max(((+(((arr_9 [(unsigned short)17]) - (arr_33 [6] [(unsigned char)22] [i_8]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-73)) ? (((((/* implicit */_Bool) (unsigned short)4096)) ? (3875632896U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)22))))) : (461768316U))))));
                    var_37 = (i_4 % 2 == zero) ? (((/* implicit */unsigned int) (((+(((int) var_12)))) << (((arr_52 [(signed char)12] [(_Bool)1] [i_4]) - (1654501716U)))))) : (((/* implicit */unsigned int) (((+(((int) var_12)))) << (((((arr_52 [(signed char)12] [(_Bool)1] [i_4]) - (1654501716U))) - (1739088453U))))));
                }
                for (signed char i_17 = 0; i_17 < 23; i_17 += 2) 
                {
                    var_38 = ((/* implicit */signed char) min((min((max((((/* implicit */unsigned long long int) arr_31 [(unsigned short)18] [i_10] [i_8] [5ULL])), (var_5))), (((/* implicit */unsigned long long int) ((arr_36 [i_8] [i_10] [i_8] [22LL]) ? (((/* implicit */int) arr_19 [i_4] [i_10] [(signed char)15] [(signed char)4])) : (((/* implicit */int) arr_7 [i_4] [i_4] [i_10]))))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [i_10])))))));
                    arr_60 [i_4] [(signed char)10] [0ULL] [i_4] [(signed char)14] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)252)), ((+(((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned char)2)) : ((-2147483647 - 1))))))));
                    arr_61 [i_4] [(signed char)12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_27 [i_4]))))) : (arr_52 [i_4] [1ULL] [i_4])));
                }
                /* LoopNest 2 */
                for (short i_18 = 0; i_18 < 23; i_18 += 4) 
                {
                    for (signed char i_19 = 0; i_19 < 23; i_19 += 3) 
                    {
                        {
                            arr_68 [3LL] [i_8] [i_4] [i_18] [14LL] = ((/* implicit */unsigned short) arr_18 [(signed char)15] [i_10] [21ULL] [(signed char)13]);
                            arr_69 [19U] [(signed char)14] [i_10] [17] [i_10] [i_4] [i_10] = arr_10 [i_4] [21] [i_8] [i_4];
                            var_39 = ((/* implicit */unsigned char) ((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_51 [i_19] [i_18] [(unsigned short)8] [i_8] [(unsigned short)6]))))))) == (((/* implicit */int) max((((/* implicit */short) arr_67 [i_4] [i_4] [i_10] [i_18] [i_18] [10LL] [14LL])), (arr_1 [2LL]))))));
                            arr_70 [1U] [i_4] [(signed char)6] [i_18] [i_18] = ((/* implicit */long long int) arr_49 [i_19] [6ULL] [(short)8] [i_19] [i_19]);
                        }
                    } 
                } 
            }
            for (int i_20 = 0; i_20 < 23; i_20 += 1) /* same iter space */
            {
                var_40 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_6)))) ? (((((/* implicit */_Bool) (signed char)0)) ? (arr_65 [i_20] [(unsigned char)11] [i_8] [i_8] [(signed char)7] [i_4]) : (((/* implicit */long long int) arr_51 [22U] [i_4] [22U] [(_Bool)1] [(unsigned char)1])))) : (arr_65 [i_4] [i_4] [i_4] [i_4] [(signed char)1] [i_4])))), (arr_30 [i_4] [i_4] [i_4] [(unsigned char)15])));
                /* LoopSeq 3 */
                for (long long int i_21 = 0; i_21 < 23; i_21 += 2) 
                {
                    var_41 = ((/* implicit */unsigned long long int) var_4);
                    var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) arr_40 [i_4] [16] [i_4] [(short)19]))));
                    arr_76 [i_4] [i_4] [i_4] [i_4] [i_4] [(short)15] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (max((arr_5 [i_4]), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_2 [i_8]))))))))));
                }
                for (unsigned char i_22 = 1; i_22 < 21; i_22 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_23 = 2; i_23 < 22; i_23 += 3) 
                    {
                        var_43 = ((/* implicit */signed char) max(((~(((((/* implicit */_Bool) arr_73 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_71 [(short)20] [(short)20] [i_4]))) : (arr_8 [i_4] [i_4] [i_4]))))), (((/* implicit */long long int) min((((/* implicit */short) ((signed char) arr_8 [(unsigned char)8] [i_4] [i_4]))), (((short) arr_62 [i_4] [(signed char)8] [i_4] [i_4])))))));
                        arr_81 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((int) arr_74 [i_4])), ((+(((/* implicit */int) arr_21 [i_4]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */unsigned int) arr_39 [i_4] [22U])), (arr_79 [i_4] [i_8] [(short)16] [i_22] [i_4]))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [5LL] [i_8] [(short)1] [i_4] [i_23])))))))))) : ((((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_22]))) : (var_5)))));
                        arr_82 [(_Bool)1] [i_4] [(signed char)16] [i_20] [i_4] [i_4] = arr_40 [i_23] [(unsigned short)5] [(signed char)22] [(short)3];
                    }
                    var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (1006632960U) : (461768343U)));
                }
                /* vectorizable */
                for (unsigned char i_24 = 1; i_24 < 21; i_24 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_25 = 0; i_25 < 23; i_25 += 4) 
                    {
                        var_45 = arr_86 [i_4] [i_8] [i_20] [i_8] [6ULL];
                        arr_89 [i_25] [i_24] [i_20] [i_4] [i_20] [i_8] [(signed char)1] = ((/* implicit */int) var_2);
                        var_46 = ((/* implicit */signed char) ((((((/* implicit */int) arr_15 [i_4] [i_4])) + (2147483647))) >> (((arr_20 [i_4] [i_24] [8LL] [i_4]) ? (arr_30 [18] [i_8] [14] [(signed char)4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_66 [4ULL] [4ULL] [4ULL] [i_4])))))));
                    }
                    var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_48 [i_24 - 1] [i_24] [i_24] [i_24 + 2] [(signed char)18])) ? (((((/* implicit */_Bool) 2058153067281317076LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_67 [2U] [i_4] [2U] [i_8] [i_20] [i_20] [i_24]))) : (var_5))) : (((((/* implicit */_Bool) arr_17 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [(signed char)3] [i_20] [(unsigned char)12]))) : (arr_72 [4LL])))));
                    arr_90 [i_4] [i_4] [i_8] = ((long long int) arr_8 [i_24] [i_4] [i_8]);
                }
            }
        }
        var_48 = ((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_40 [i_4] [(unsigned short)20] [12U] [0LL]))))) ? (((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) arr_49 [10] [8LL] [i_4] [8LL] [i_4])) : (((/* implicit */int) arr_67 [17ULL] [i_4] [(signed char)18] [i_4] [(unsigned char)13] [i_4] [(short)5])))) : (max((arr_57 [i_4] [i_4] [i_4]), (arr_34 [(_Bool)1] [(signed char)2] [i_4] [i_4])))))));
    }
    var_49 &= ((/* implicit */_Bool) (~((((+(((/* implicit */int) var_2)))) ^ (((int) var_7))))));
    var_50 ^= ((/* implicit */long long int) var_5);
    var_51 = ((/* implicit */long long int) var_7);
}
