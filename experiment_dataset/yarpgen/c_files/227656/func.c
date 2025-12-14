/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227656
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            arr_13 [i_0] [i_4] [i_2 + 2] [i_2 + 2] [i_4 + 1] = ((/* implicit */unsigned char) (short)25157);
                            var_15 = ((/* implicit */unsigned long long int) var_0);
                            arr_14 [i_4] [i_3] [(unsigned char)12] [i_1] [i_0 + 1] = ((/* implicit */long long int) ((arr_1 [i_0 + 1] [i_2 + 2]) > (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-25394)) + (2147483647))) << (((((((/* implicit */int) (short)-25157)) + (25173))) - (16))))))));
                        }
                        var_16 = var_9;
                        /* LoopSeq 3 */
                        for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((signed char) var_7))), (max((6871513850233757040LL), (((/* implicit */long long int) (signed char)121))))))) ? (((((/* implicit */_Bool) (unsigned short)35036)) ? (6309171356785964282ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_2 - 1]))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_10)), (arr_8 [i_0] [i_1] [i_2] [i_3] [i_1]))))));
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-19)) ? (((/* implicit */int) (short)-25158)) : (((/* implicit */int) (short)25158))))) ? (((/* implicit */long long int) arr_1 [(unsigned char)17] [i_2])) : (arr_8 [i_0] [11ULL] [i_2] [i_3] [i_5])));
                        }
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 3) /* same iter space */
                        {
                            var_19 = max((min((((/* implicit */unsigned long long int) 2147483627)), (6309171356785964282ULL))), (((/* implicit */unsigned long long int) (signed char)61)));
                            arr_20 [i_6] [i_3] [i_2 - 1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)93)), ((short)25158)))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_2 + 1] [i_0 + 1] [i_3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))));
                            arr_21 [i_0] [i_1] [18] [4] [i_6] [i_3] = ((/* implicit */_Bool) 0U);
                        }
                        for (long long int i_7 = 0; i_7 < 22; i_7 += 3) /* same iter space */
                        {
                            arr_24 [i_7] [i_1] [i_7] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (187074625U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (max((((/* implicit */int) (_Bool)1)), (var_1))))) != (((((/* implicit */_Bool) ((arr_6 [i_0 + 1] [i_1] [i_2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_0)))) : ((+(((/* implicit */int) var_10))))))));
                            arr_25 [i_0 + 1] [i_1] [i_7] [i_1] [i_7] = ((/* implicit */_Bool) 18446744073709551615ULL);
                        }
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)50954)), (3415442931U)))) ? (((/* implicit */int) arr_17 [i_0 + 1] [i_2 - 1] [i_2 + 1])) : (((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 1]))))) ? (max((var_4), (((/* implicit */unsigned long long int) arr_12 [i_0 + 1] [i_1] [i_1] [i_1] [19] [i_2 - 1] [19])))) : (max((((((/* implicit */_Bool) var_11)) ? (3831281020503494292ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))))), (((/* implicit */unsigned long long int) var_7))))));
                    }
                    for (int i_8 = 0; i_8 < 22; i_8 += 2) /* same iter space */
                    {
                        arr_28 [19ULL] [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) max((arr_16 [i_2 + 1] [i_8] [i_8]), (arr_16 [i_2 + 1] [i_2 + 1] [i_8])))) + (((/* implicit */int) arr_16 [i_2 - 1] [i_8] [i_8]))));
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 2) 
                        {
                            arr_31 [i_9] [(unsigned short)19] [i_2 - 1] [i_2 + 2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (-2010774771)))) && (((/* implicit */_Bool) (short)32737))));
                            arr_32 [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)5728)), (arr_12 [i_2 + 2] [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_0 + 1] [i_0 + 1])))) % (max((((((/* implicit */_Bool) var_13)) ? (18446744073709551598ULL) : (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1422295950)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0)))))))));
                        }
                        for (signed char i_10 = 2; i_10 < 21; i_10 += 3) 
                        {
                            arr_35 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_10] [i_0] = (!(((/* implicit */_Bool) (signed char)52)));
                            arr_36 [i_0 + 1] [i_1] [i_2] [i_0 + 1] [i_10] = arr_29 [i_1] [(unsigned char)4] [i_2] [i_8];
                            var_21 = ((/* implicit */unsigned long long int) ((unsigned char) max((2147483634), (((/* implicit */int) var_10)))));
                        }
                        var_22 = ((/* implicit */short) var_10);
                    }
                    for (int i_11 = 0; i_11 < 22; i_11 += 2) /* same iter space */
                    {
                        arr_39 [i_11] [i_2] [i_2 - 1] [i_0] [i_0] = ((/* implicit */int) ((var_8) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 15572409322248053564ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_12))))));
                        arr_40 [i_0] [i_1] [i_1] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (var_13)))) ? (((/* implicit */unsigned long long int) 836344621)) : (min((14615463053206057318ULL), (((/* implicit */unsigned long long int) arr_11 [i_0 + 1] [i_1] [i_2] [(unsigned char)2]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 12137572716923587324ULL)))))) ^ (((((/* implicit */_Bool) var_14)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) : (((((/* implicit */_Bool) ((unsigned char) (unsigned char)84))) ? (((((/* implicit */_Bool) arr_19 [i_0 + 1] [i_1] [i_2 + 2] [i_11] [i_11] [i_11] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59807))) : (6309171356785964301ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 3) 
                    {
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((int) var_12))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_13)) : (2874334751461498051ULL)))));
                        /* LoopSeq 2 */
                        for (short i_13 = 0; i_13 < 22; i_13 += 2) 
                        {
                            var_24 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)93)) ^ (((/* implicit */int) (short)-5553))));
                            var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_2))));
                            arr_49 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] = ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 1])) ? (2724566453432171326ULL) : (arr_48 [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 1] [i_2]));
                        }
                        for (short i_14 = 0; i_14 < 22; i_14 += 3) 
                        {
                            arr_52 [i_0 + 1] [i_2] [i_14] = ((/* implicit */int) ((arr_48 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2 + 1] [i_2] [i_2 + 1]) << (((/* implicit */int) ((var_11) != (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
                            var_26 = ((/* implicit */int) arr_51 [i_0 + 1] [i_0 + 1] [i_2 + 2] [i_12] [13] [i_2]);
                        }
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_48 [(unsigned char)15] [i_2 + 1] [i_2 + 1] [i_2 - 1] [(_Bool)1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22131))) : (arr_48 [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_2] [i_2 + 2])));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_15 = 0; i_15 < 22; i_15 += 3) 
                    {
                        arr_56 [i_0] [i_1] [i_2] [i_15] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) var_3)) | (((/* implicit */int) arr_42 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0])))));
                        /* LoopSeq 2 */
                        for (signed char i_16 = 0; i_16 < 22; i_16 += 4) 
                        {
                            arr_59 [i_2] [(_Bool)1] [i_2] [i_15] [i_15] [i_15] [i_0] = ((/* implicit */int) var_10);
                            arr_60 [i_15] = ((((/* implicit */int) ((unsigned short) 2874334751461498051ULL))) + (((/* implicit */int) ((var_12) != (((/* implicit */unsigned long long int) 4294967288U))))));
                            var_28 = ((/* implicit */unsigned short) ((2122278812) <= (((/* implicit */int) arr_42 [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2 + 2]))));
                        }
                        for (unsigned int i_17 = 0; i_17 < 22; i_17 += 3) 
                        {
                            arr_63 [(unsigned char)15] [i_1] [i_15] [i_15] [i_17] = ((/* implicit */unsigned short) ((((((/* implicit */int) (short)-1)) + (2147483647))) >> (((4294967288U) - (4294967274U)))));
                            var_29 = (((~(((/* implicit */int) var_8)))) == (((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) var_2))))));
                        }
                        arr_64 [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_50 [i_2] [i_2 - 1] [(short)18] [(short)18])) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_11)) : (var_4))) : (arr_6 [i_15] [i_2 - 1] [i_0 + 1])));
                        arr_65 [i_15] [i_2] [i_2 + 2] = ((/* implicit */_Bool) ((short) var_5));
                    }
                    arr_66 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (max((var_11), (((/* implicit */long long int) var_7))))))) ? ((+(var_12))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)5734)) : (196608))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_18 = 1; i_18 < 7; i_18 += 1) 
    {
        for (int i_19 = 0; i_19 < 10; i_19 += 3) 
        {
            {
                arr_72 [i_19] = ((/* implicit */long long int) ((var_11) != (((/* implicit */long long int) ((int) (!(arr_54 [i_18] [i_18])))))));
                var_30 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_14)) ? (-3997135772563470708LL) : (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_19] [i_19]))))), (((/* implicit */long long int) ((((unsigned long long int) (unsigned short)59806)) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_18 - 1] [i_18 + 3] [i_18 - 1] [i_18 + 1] [i_18] [i_18 + 2]))))))));
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned long long int) (signed char)-119);
    var_32 = ((/* implicit */short) var_14);
    var_33 = ((/* implicit */int) min(((-(((((/* implicit */_Bool) (unsigned char)93)) ? (268435455U) : (((/* implicit */unsigned int) 208981630)))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)121)))))));
}
