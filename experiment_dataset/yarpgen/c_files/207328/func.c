/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207328
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            var_12 &= ((/* implicit */signed char) max((var_4), (((/* implicit */long long int) var_5))));
            /* LoopSeq 1 */
            for (signed char i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                arr_8 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) (short)(-32767 - 1))), (267386880LL))) / (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [20LL] [i_1 + 2])))))))), (min((((/* implicit */unsigned long long int) var_6)), (arr_7 [i_0] [i_2])))));
                var_13 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255))));
            }
            arr_9 [i_0] = ((/* implicit */_Bool) var_0);
            var_14 += (_Bool)0;
        }
        for (unsigned short i_3 = 1; i_3 < 21; i_3 += 1) 
        {
            var_15 += ((/* implicit */long long int) arr_0 [i_3]);
            arr_14 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((int) var_6)));
        }
        /* LoopSeq 1 */
        for (long long int i_4 = 2; i_4 < 18; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 21; i_5 += 3) 
            {
                for (int i_6 = 3; i_6 < 21; i_6 += 3) 
                {
                    {
                        var_16 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) var_9)) <= (max((var_0), (arr_17 [i_4] [i_0 - 1] [i_4 - 2])))));
                        arr_21 [(unsigned char)10] [i_0 - 1] [i_4] [i_5] [i_4] [(unsigned char)10] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) arr_13 [i_4 + 2] [i_0 - 1]))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))) : (((/* implicit */int) var_11)));
                        var_17 += ((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) 5794553881768566113ULL)))));
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned long long int) var_5);
            /* LoopSeq 3 */
            for (unsigned short i_7 = 1; i_7 < 21; i_7 += 4) 
            {
                arr_25 [i_0] [i_0] [i_4 + 2] [i_0] = ((/* implicit */unsigned int) ((long long int) var_8));
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_9 = 2; i_9 < 20; i_9 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_26 [i_0 - 1] [i_0] [(unsigned short)10] [2LL] [i_9]) ^ (((/* implicit */long long int) var_9))))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (2147483647) : (((/* implicit */int) var_6)))) : ((+(((/* implicit */int) var_8))))));
                        arr_31 [i_0] [i_4 + 1] [i_7] [i_8] [i_9 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1075496329U)) ? (((/* implicit */int) (short)-1458)) : (((/* implicit */int) (short)-2358))));
                        arr_32 [(unsigned char)11] [i_0] [i_7] [i_7 - 1] [i_8] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0 - 1] [i_4 + 2] [i_7] [i_7])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))));
                    }
                    for (unsigned short i_10 = 1; i_10 < 21; i_10 += 2) 
                    {
                        arr_35 [i_0] [i_7] [(unsigned short)16] [5LL] = ((/* implicit */short) arr_16 [i_0]);
                        var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (arr_22 [17ULL] [i_0]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10)))))));
                    }
                    arr_36 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_23 [i_4] [i_4] [i_4 + 1] [i_4 + 1]);
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 1; i_11 < 21; i_11 += 1) 
                    {
                        arr_39 [i_11 + 1] [0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
                        arr_40 [i_0] [i_0] [(unsigned char)15] [i_7] [i_0] [i_8] [(unsigned short)0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_6 [i_11] [i_7 - 1] [i_0])) : (((/* implicit */int) (signed char)79))))));
                    }
                    var_21 ^= ((/* implicit */unsigned int) (~(arr_19 [i_0 - 1] [i_0] [i_4 - 1] [i_7 + 1])));
                }
                /* vectorizable */
                for (signed char i_12 = 1; i_12 < 21; i_12 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_13 = 0; i_13 < 22; i_13 += 3) 
                    {
                        arr_47 [i_0] [i_4] [i_7] [i_12 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))))) && (((/* implicit */_Bool) arr_10 [i_0]))));
                        arr_48 [i_7] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_38 [i_0] [i_4] [i_7 - 1]))));
                    }
                    arr_49 [i_0 - 1] [i_0] [i_7 + 1] [i_12 + 1] = ((/* implicit */int) var_5);
                    arr_50 [i_0] [i_7] [(signed char)4] [i_0] = ((/* implicit */_Bool) ((unsigned short) arr_11 [i_0] [i_4 - 2] [i_7 + 1]));
                }
                for (unsigned int i_14 = 0; i_14 < 22; i_14 += 3) 
                {
                    arr_53 [i_0] [i_4 + 4] = ((unsigned int) 18211592750338280512ULL);
                    var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((unsigned short) var_6))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_0])) ? (arr_2 [i_0] [(_Bool)1] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)234)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_11)))) : (min((((/* implicit */unsigned long long int) arr_4 [i_0] [(unsigned short)5] [i_0])), (14344169466682084068ULL)))))));
                    arr_54 [i_4] [(unsigned short)12] |= ((/* implicit */unsigned short) max((max((((/* implicit */int) (short)-13692)), (((((/* implicit */int) (unsigned short)33747)) | (((/* implicit */int) (unsigned short)58563)))))), (((((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) arr_51 [i_4] [i_4]))))) ? (((int) var_9)) : ((~(var_9)))))));
                    arr_55 [(unsigned char)1] [i_4] [i_7] [(unsigned char)1] [i_14] [i_0] = ((/* implicit */unsigned char) var_0);
                }
                /* LoopSeq 3 */
                for (unsigned long long int i_15 = 1; i_15 < 21; i_15 += 1) 
                {
                    arr_58 [i_0] [i_4] [i_7] [(unsigned char)5] = ((/* implicit */unsigned int) var_1);
                    var_23 = (~(-2154662196164405856LL));
                    arr_59 [i_15] [i_15 + 1] [i_0] [i_15 - 1] [i_15] = ((/* implicit */long long int) (+(var_2)));
                    arr_60 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1] [(unsigned short)7] = ((/* implicit */short) max((((/* implicit */long long int) var_7)), (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_2)))), (((arr_18 [i_0] [i_7] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
                }
                /* vectorizable */
                for (unsigned char i_16 = 1; i_16 < 18; i_16 += 1) 
                {
                    arr_63 [i_0] [i_16 + 3] [5ULL] [i_4] [7] [i_0] = ((/* implicit */unsigned short) (-(1909476006)));
                    arr_64 [i_0] [i_0] = ((/* implicit */int) (((-(var_0))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)246)))));
                    arr_65 [i_0] [i_4] [(unsigned short)14] = ((/* implicit */short) ((int) var_2));
                }
                for (signed char i_17 = 4; i_17 < 20; i_17 += 1) 
                {
                    var_24 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 2147483647)))) ^ (-168246905470745629LL)))), (14102629535926246153ULL)));
                    arr_70 [i_0] [12U] [i_7 - 1] = ((/* implicit */unsigned char) (+(((/* implicit */int) max(((short)2728), ((short)(-32767 - 1)))))));
                }
            }
            for (unsigned int i_18 = 1; i_18 < 19; i_18 += 3) /* same iter space */
            {
                arr_74 [i_0] [i_0] [i_4 + 4] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) arr_73 [i_0] [i_0 - 1] [i_0])) ? (((/* implicit */long long int) min((var_2), (((/* implicit */unsigned int) arr_72 [i_0] [i_0] [i_18 - 1]))))) : (((((/* implicit */_Bool) 1237183346U)) ? (((/* implicit */long long int) min((arr_3 [i_18] [i_0]), (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) arr_38 [i_0] [i_4] [i_18 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4] [i_18]))) : ((-9223372036854775807LL - 1LL))))))));
                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) var_9))));
            }
            for (unsigned int i_19 = 1; i_19 < 19; i_19 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_20 = 2; i_20 < 21; i_20 += 3) 
                {
                    for (short i_21 = 0; i_21 < 22; i_21 += 3) 
                    {
                        {
                            arr_83 [i_4] [(short)7] [i_0] [i_20 + 1] [10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((var_0), (((/* implicit */long long int) (signed char)86))))), (11723736036958743546ULL)))) ? (var_0) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) var_1)))))));
                            var_26 = ((/* implicit */unsigned long long int) (~(min((max((var_2), (((/* implicit */unsigned int) arr_52 [i_0])))), (((/* implicit */unsigned int) arr_76 [i_0] [i_0 - 1]))))));
                            arr_84 [i_0] [i_4 + 2] [i_4] = arr_72 [i_0] [i_0] [i_21];
                            var_27 = ((/* implicit */unsigned char) (((-(min((-7982341872398693781LL), (((/* implicit */long long int) var_9)))))) < (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                        }
                    } 
                } 
                arr_85 [i_0] [(short)14] [i_0] = ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_19] [i_19 + 2] [18] [i_4] [(unsigned short)3])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))))));
                arr_86 [i_0] = ((/* implicit */unsigned short) var_2);
                arr_87 [i_0 - 1] [i_0] [i_19 + 3] = ((/* implicit */_Bool) min((-2091857086), (((/* implicit */int) (unsigned char)91))));
            }
        }
    }
    for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
    {
        var_28 -= ((/* implicit */unsigned char) var_0);
        arr_92 [i_22] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_33 [(unsigned short)14] [i_22])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))) ? (((/* implicit */int) arr_72 [i_22] [i_22] [i_22])) : (((/* implicit */int) var_10))));
        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_30 [i_22 - 1] [i_22] [i_22 - 1] [i_22 - 1] [i_22 - 1])))) ? (((((/* implicit */_Bool) var_4)) ? (arr_30 [i_22 - 1] [3U] [i_22 - 1] [i_22 - 1] [i_22 - 1]) : (arr_30 [i_22 - 1] [i_22] [i_22 - 1] [i_22 - 1] [i_22 - 1]))) : (((((/* implicit */_Bool) (signed char)-1)) ? (arr_30 [i_22 - 1] [i_22 - 1] [i_22 - 1] [i_22 - 1] [i_22 - 1]) : ((-2147483647 - 1))))));
    }
    var_30 = ((/* implicit */long long int) var_1);
    var_31 = ((/* implicit */_Bool) -1261639894);
}
