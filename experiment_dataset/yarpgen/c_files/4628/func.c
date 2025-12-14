/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4628
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
    var_16 &= ((/* implicit */signed char) max((var_13), (max((((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)104)), (581099103U)))), (var_14)))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_17 = ((/* implicit */unsigned int) max((arr_1 [i_0]), (((/* implicit */long long int) max((((/* implicit */signed char) arr_0 [i_0])), ((signed char)-1))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_2)), (max(((-9223372036854775807LL - 1LL)), (var_14)))));
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 3; i_3 < 12; i_3 += 1) 
                    {
                        arr_15 [i_0] [i_1] [i_0] [i_0] [i_1] [i_1] = ((/* implicit */short) arr_6 [i_3 + 1]);
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            arr_18 [i_4] [i_1] [i_2] [i_3] [i_3 - 1] [i_3 + 1] = max((min((arr_8 [i_1]), ((short)-712))), (((/* implicit */short) var_0)));
                            var_18 = ((/* implicit */unsigned long long int) var_3);
                        }
                        arr_19 [i_1] [i_2] [(unsigned char)0] = ((/* implicit */signed char) max((max(((short)-32760), (max((((/* implicit */short) (unsigned char)240)), (arr_4 [i_0] [i_1] [i_2]))))), (((/* implicit */short) (unsigned char)197))));
                    }
                    for (unsigned char i_5 = 2; i_5 < 10; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */short) (signed char)-61);
                        arr_22 [i_0] [i_1] [i_2] [i_5] [i_5] &= ((/* implicit */signed char) arr_21 [i_5] [i_2] [i_0] [i_0]);
                        /* LoopSeq 4 */
                        for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) var_13);
                            var_21 = ((/* implicit */unsigned char) max(((unsigned short)65525), (((/* implicit */unsigned short) (unsigned char)130))));
                            arr_25 [i_0] [i_2] [(unsigned char)2] [10U] = ((/* implicit */signed char) arr_23 [i_0] [i_1] [i_2] [i_5] [i_6]);
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_28 [i_0] [i_1] [i_2] [(_Bool)1] [i_7] [(_Bool)1] = ((/* implicit */short) min((((/* implicit */long long int) arr_0 [i_2])), (max((((/* implicit */long long int) (_Bool)1)), (arr_20 [i_0] [i_0] [i_0] [i_2] [i_0] [(unsigned char)6])))));
                            var_22 = ((/* implicit */short) (signed char)-48);
                            var_23 |= var_0;
                        }
                        for (signed char i_8 = 0; i_8 < 13; i_8 += 1) 
                        {
                            arr_32 [i_0] [i_2] = var_1;
                            var_24 *= var_5;
                            var_25 = ((/* implicit */unsigned char) var_8);
                        }
                        for (signed char i_9 = 0; i_9 < 13; i_9 += 2) 
                        {
                            var_26 = ((/* implicit */long long int) arr_9 [i_9] [i_5] [(_Bool)1] [i_1]);
                            var_27 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_33 [i_2] [i_5 - 1] [i_2] [i_5] [i_9] [i_5])), (arr_11 [i_0] [i_5])));
                            arr_35 [i_1] [i_5] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) var_10);
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_10 = 1; i_10 < 12; i_10 += 4) /* same iter space */
                        {
                            var_28 = ((/* implicit */signed char) var_4);
                            var_29 = ((/* implicit */signed char) min((min((581099111U), (((/* implicit */unsigned int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0])))), (max((922701544U), (((/* implicit */unsigned int) var_4))))));
                        }
                        for (unsigned char i_11 = 1; i_11 < 12; i_11 += 4) /* same iter space */
                        {
                            arr_40 [i_2] [i_5] = ((/* implicit */unsigned int) arr_8 [i_11]);
                            var_30 += ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_2 [i_2])), (var_6)));
                            var_31 = var_6;
                            arr_41 [i_11] [i_5] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) arr_30 [i_0] [i_11] [i_11]);
                            arr_42 [i_5] [i_11] = arr_29 [i_0] [i_1] [i_2];
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_13 = 1; i_13 < 12; i_13 += 1) /* same iter space */
                        {
                            arr_49 [i_1] [i_1] [i_1] [i_1] [(_Bool)1] [i_1] = ((/* implicit */signed char) var_5);
                            var_32 |= var_7;
                            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) arr_20 [(_Bool)1] [i_12] [i_12] [i_12] [i_12] [i_12]))));
                        }
                        for (unsigned char i_14 = 1; i_14 < 12; i_14 += 1) /* same iter space */
                        {
                            var_34 = ((/* implicit */unsigned char) arr_5 [i_2] [i_0]);
                            arr_52 [i_0] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (short)9835);
                        }
                        var_35 = ((/* implicit */signed char) arr_6 [(signed char)9]);
                        var_36 = ((/* implicit */unsigned long long int) arr_27 [0LL] [i_2] [i_2] [i_12] [i_2] [i_1] [i_1]);
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_16 = 0; i_16 < 13; i_16 += 4) 
                        {
                            var_37 = ((/* implicit */unsigned short) var_13);
                            var_38 = ((/* implicit */unsigned int) (unsigned char)42);
                            var_39 = ((/* implicit */signed char) arr_30 [i_0] [i_0] [(signed char)9]);
                        }
                        var_40 += ((/* implicit */unsigned long long int) max((min((arr_1 [i_1]), (((/* implicit */long long int) (unsigned char)255)))), (((/* implicit */long long int) (signed char)32))));
                        var_41 -= ((/* implicit */unsigned char) var_15);
                        var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) arr_56 [i_0] [i_1] [i_2] [7ULL] [i_1]))));
                        arr_58 [i_0] [i_1] [i_2] [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1]);
                    }
                }
            } 
        } 
        var_43 = ((/* implicit */signed char) min((9370044660372904598ULL), (((/* implicit */unsigned long long int) 3713868195U))));
        var_44 = ((/* implicit */long long int) min((var_44), (((/* implicit */long long int) var_12))));
    }
    var_45 = ((/* implicit */_Bool) min((var_45), (((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (max((9223372036854775807LL), (((/* implicit */long long int) var_3)))))))));
    /* LoopSeq 2 */
    for (signed char i_17 = 1; i_17 < 7; i_17 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_18 = 0; i_18 < 11; i_18 += 2) 
        {
            for (unsigned char i_19 = 4; i_19 < 7; i_19 += 1) 
            {
                {
                    var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) arr_4 [i_17] [i_18] [(signed char)0])), (9223372036854775807LL))), (((/* implicit */long long int) (_Bool)1))))), (6881038942123230574ULL))))));
                    var_47 -= ((/* implicit */unsigned char) max((min((3713868198U), (arr_62 [i_18] [i_17 + 3]))), (3713868198U)));
                }
            } 
        } 
        var_48 = ((/* implicit */unsigned char) arr_9 [(unsigned char)10] [(short)8] [i_17] [i_17]);
    }
    for (signed char i_20 = 1; i_20 < 7; i_20 += 2) /* same iter space */
    {
        var_49 = ((/* implicit */long long int) (unsigned short)65525);
        arr_71 [i_20] [i_20] = ((/* implicit */short) max((((/* implicit */unsigned int) var_1)), (581099097U)));
        arr_72 [i_20] = ((/* implicit */signed char) min((((/* implicit */unsigned int) arr_61 [i_20])), (var_3)));
        /* LoopSeq 1 */
        for (short i_21 = 1; i_21 < 8; i_21 += 3) 
        {
            arr_76 [i_20] [i_21] = ((/* implicit */unsigned char) arr_45 [i_20] [i_20] [i_21]);
            var_50 = ((/* implicit */signed char) arr_9 [i_20] [i_21] [i_20] [i_21 + 3]);
        }
        var_51 = ((/* implicit */short) max((var_51), (((/* implicit */short) arr_63 [i_20] [i_20]))));
    }
}
