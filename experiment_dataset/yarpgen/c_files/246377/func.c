/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246377
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(9565916212635072602ULL)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12)))))));
    var_14 = ((/* implicit */short) var_5);
    var_15 ^= ((/* implicit */short) (unsigned char)24);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
        {
            var_16 = ((/* implicit */short) (-(((/* implicit */int) arr_6 [i_0] [i_1]))));
            /* LoopSeq 4 */
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                var_17 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))) % (var_8)));
                arr_10 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */short) 8704978978088481440ULL);
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [(short)4] [(short)4])) ? (((/* implicit */int) arr_3 [(short)0] [i_1] [i_2])) : (((((/* implicit */_Bool) (short)-13)) ? (((/* implicit */int) (short)-32749)) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_2]))))));
                var_19 = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_0] [(short)9] [(short)9] [1ULL])) >> (((((/* implicit */int) var_3)) - (81)))));
            }
            for (short i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_4 = 3; i_4 < 10; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */short) ((unsigned long long int) (short)-12154));
                            arr_20 [(unsigned char)2] [(unsigned char)2] [i_4] [i_5] = ((/* implicit */short) (~(arr_7 [6ULL] [i_4 + 1] [i_4] [i_4 + 1])));
                            var_21 = var_11;
                            var_22 = ((/* implicit */short) ((unsigned char) var_1));
                        }
                    } 
                } 
                arr_21 [i_0] [i_1] [i_3] = ((/* implicit */short) (((-(((/* implicit */int) var_11)))) + (((/* implicit */int) var_7))));
                var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-2350)) - (((/* implicit */int) (short)-2359))));
            }
            for (short i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_6] [i_1] [i_6] [i_0])) | (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (short)-2350)))))));
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 11; i_7 += 4) 
                {
                    for (short i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_6]))) < (arr_25 [i_0] [(short)0] [i_6] [(unsigned char)1])));
                            var_26 &= var_6;
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned long long int) var_7);
            }
            for (short i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
            {
                arr_33 [0ULL] [0ULL] [0ULL] = ((/* implicit */short) (unsigned char)152);
                arr_34 [i_0] [i_0] [(short)3] = ((/* implicit */short) ((((/* implicit */int) var_12)) & (((/* implicit */int) var_7))));
                /* LoopSeq 3 */
                for (unsigned char i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    var_28 = ((/* implicit */short) ((unsigned char) var_10));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_11 = 1; i_11 < 9; i_11 += 1) 
                    {
                        arr_40 [i_0] [i_0] [i_9] [i_10] [i_11 + 2] = ((/* implicit */unsigned long long int) (short)-2345);
                        arr_41 [i_10] [i_10] [i_10] [i_9] [(unsigned char)10] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_8)))) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) (short)8695))));
                        var_29 = arr_35 [i_11];
                        arr_42 [8ULL] [i_1] [(short)1] [i_1] [i_1] = var_8;
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        arr_46 [i_10] [i_1] [i_9] [i_10] [i_9] [i_12] [(short)6] = ((unsigned long long int) ((short) (unsigned char)32));
                        arr_47 [i_10] [i_0] = var_4;
                        var_30 = ((unsigned long long int) arr_2 [i_0]);
                        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_11))));
                    }
                    for (short i_13 = 0; i_13 < 11; i_13 += 1) /* same iter space */
                    {
                        arr_52 [(short)3] [i_10] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8702))) <= (var_9)));
                        var_32 = ((short) var_6);
                        var_33 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) (short)13599))))) > (arr_24 [i_0] [i_1] [i_13])));
                    }
                    for (short i_14 = 0; i_14 < 11; i_14 += 1) /* same iter space */
                    {
                        var_34 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)-12617)))) <= (((/* implicit */int) arr_27 [10ULL] [i_1] [i_1] [i_9] [i_1] [i_14]))));
                        arr_55 [i_14] [i_1] [(short)0] [i_10] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_22 [i_0] [i_0] [i_0]))));
                        var_35 = ((/* implicit */unsigned long long int) var_1);
                    }
                    var_36 = ((/* implicit */short) var_5);
                }
                for (short i_15 = 3; i_15 < 10; i_15 += 2) 
                {
                    var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) (~(((/* implicit */int) var_6)))))));
                    var_38 = ((/* implicit */unsigned char) (short)21520);
                    var_39 -= ((/* implicit */unsigned long long int) var_10);
                }
                for (unsigned char i_16 = 2; i_16 < 9; i_16 += 1) 
                {
                    arr_62 [i_16] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) (short)-11343);
                    var_40 = var_0;
                }
            }
            var_41 -= ((/* implicit */short) ((((((/* implicit */_Bool) 16159729194484100393ULL)) ? (((/* implicit */int) (short)29460)) : (((/* implicit */int) (short)-24214)))) < (((/* implicit */int) (short)17358))));
            /* LoopNest 2 */
            for (unsigned char i_17 = 0; i_17 < 11; i_17 += 4) 
            {
                for (unsigned char i_18 = 2; i_18 < 7; i_18 += 4) 
                {
                    {
                        var_42 = ((/* implicit */short) (~(var_9)));
                        /* LoopSeq 1 */
                        for (short i_19 = 0; i_19 < 11; i_19 += 1) 
                        {
                            var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) arr_43 [i_0] [i_1] [i_17] [(short)5] [i_19] [i_18 - 2]))));
                            var_44 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_36 [i_0] [(unsigned char)2] [i_0] [(unsigned char)10] [i_19])) == (((/* implicit */int) (short)-29315))))) <= (((/* implicit */int) ((((/* implicit */_Bool) (short)28571)) && (((/* implicit */_Bool) (short)-32750)))))));
                        }
                        var_45 = ((/* implicit */short) ((((/* implicit */_Bool) arr_37 [i_17] [i_18])) ? (((/* implicit */int) (short)384)) : (((/* implicit */int) var_3))));
                        arr_72 [i_0] [(short)8] [(unsigned char)1] [(short)1] = var_2;
                        arr_73 [i_0] [i_1] [i_17] [(short)3] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-11)) * (((((/* implicit */_Bool) arr_16 [(short)4] [i_0] [i_1] [i_17] [(short)9] [i_18 - 1])) ? (((/* implicit */int) (short)32764)) : (((/* implicit */int) var_6))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_20 = 0; i_20 < 11; i_20 += 3) /* same iter space */
        {
            arr_77 [i_20] = arr_43 [i_20] [i_20] [i_20] [i_20] [i_0] [i_0];
            var_46 = ((/* implicit */unsigned char) ((var_8) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0])))));
            /* LoopNest 3 */
            for (unsigned long long int i_21 = 1; i_21 < 10; i_21 += 2) 
            {
                for (short i_22 = 0; i_22 < 11; i_22 += 2) 
                {
                    for (short i_23 = 0; i_23 < 11; i_23 += 3) 
                    {
                        {
                            var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (short)-11350)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)20591)))) : (((/* implicit */int) (short)32755))));
                            var_48 -= ((/* implicit */short) (-(((((/* implicit */_Bool) (short)14541)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                            var_49 = ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_0] [i_20] [i_21] [i_22] [(short)6] [(short)6])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_27 [i_0] [i_0] [i_21 + 1] [i_22] [i_21 + 1] [i_22]))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 1 */
        for (unsigned char i_24 = 1; i_24 < 9; i_24 += 3) 
        {
            var_50 = ((/* implicit */short) min((var_50), (((short) ((((/* implicit */_Bool) (short)23505)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_4)))))) : (arr_56 [i_24 + 2] [i_24 - 1]))))));
            var_51 = ((/* implicit */unsigned char) (((-(var_9))) & (((((/* implicit */_Bool) (unsigned char)79)) ? (((var_9) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24112)))))));
        }
        var_52 = max((max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) arr_59 [i_0] [i_0] [i_0] [i_0])) ? (9224846930638235073ULL) : (var_8))))), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)9068)))))));
    }
    for (short i_25 = 3; i_25 < 7; i_25 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_26 = 2; i_26 < 8; i_26 += 1) 
        {
            arr_94 [i_25] = ((/* implicit */short) max((max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)5140)))), (((/* implicit */int) var_0)))), (((((/* implicit */int) min((((/* implicit */short) var_11)), (var_7)))) | (((/* implicit */int) var_3))))));
            arr_95 [i_25] = ((/* implicit */short) var_4);
        }
        arr_96 [i_25] = ((/* implicit */unsigned long long int) var_10);
    }
}
