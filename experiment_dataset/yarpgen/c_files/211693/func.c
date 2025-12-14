/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211693
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
    var_15 = var_14;
    var_16 = ((/* implicit */unsigned short) var_10);
    var_17 = ((/* implicit */short) var_6);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_18 = ((/* implicit */short) arr_0 [i_0]);
        var_19 = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        var_20 = ((/* implicit */_Bool) arr_0 [i_0]);
    }
    for (signed char i_1 = 1; i_1 < 13; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_6 [(unsigned char)8] [i_2] [i_2]))));
            var_22 = ((/* implicit */short) arr_3 [i_1] [i_1]);
            var_23 = ((/* implicit */short) arr_4 [i_2]);
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (signed char i_4 = 2; i_4 < 15; i_4 += 3) 
                {
                    {
                        var_24 = ((/* implicit */int) arr_11 [i_1] [(unsigned short)4] [i_3] [i_4] [i_4] [i_3]);
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) arr_7 [i_1] [i_1] [i_1] [i_1]))));
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) arr_6 [2] [2] [i_4]))));
                        var_27 |= ((/* implicit */unsigned short) arr_8 [i_1] [i_2] [i_3]);
                        var_28 = ((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_3]);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                /* LoopSeq 2 */
                for (long long int i_6 = 0; i_6 < 17; i_6 += 3) /* same iter space */
                {
                    var_29 = ((/* implicit */int) arr_1 [i_1] [i_2]);
                    var_30 = ((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2]);
                    var_31 = ((/* implicit */short) arr_14 [i_1]);
                }
                for (long long int i_7 = 0; i_7 < 17; i_7 += 3) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (int i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        var_32 = arr_1 [i_1] [i_5];
                        var_33 = ((/* implicit */short) arr_12 [i_1] [i_2] [i_8]);
                        arr_22 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_2] = ((/* implicit */unsigned char) arr_13 [i_1] [i_2] [i_7]);
                        var_34 = ((/* implicit */int) arr_1 [i_5] [i_7]);
                    }
                    for (unsigned char i_9 = 0; i_9 < 17; i_9 += 3) /* same iter space */
                    {
                        var_35 = ((/* implicit */long long int) arr_13 [i_1] [i_2] [i_5]);
                        var_36 = ((/* implicit */unsigned char) arr_10 [i_1] [i_2]);
                        arr_25 [i_1] [i_2] [i_2] [i_7] [i_2] = ((/* implicit */unsigned char) arr_16 [i_1] [i_1] [i_1] [i_2]);
                        var_37 = ((/* implicit */unsigned short) arr_6 [i_2] [i_2] [i_2]);
                        var_38 = ((/* implicit */short) arr_6 [i_2] [i_2] [i_2]);
                    }
                    for (unsigned char i_10 = 0; i_10 < 17; i_10 += 3) /* same iter space */
                    {
                        var_39 = ((/* implicit */unsigned int) arr_27 [(unsigned short)7] [i_2] [i_5] [i_5] [i_10]);
                        var_40 = arr_10 [i_2] [i_7];
                        var_41 = ((/* implicit */unsigned char) arr_3 [i_1] [i_7]);
                        arr_29 [i_1] [i_1] [i_1 + 1] [i_1] [i_2] = arr_11 [i_1] [i_2] [i_2] [i_5] [i_1] [i_10];
                    }
                    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 3) /* same iter space */
                    {
                        var_42 += ((/* implicit */int) arr_19 [(signed char)16] [i_11] [i_11] [i_11] [i_11]);
                        var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) arr_27 [i_1] [i_1] [i_5] [i_1] [i_11]))));
                        var_44 = ((/* implicit */signed char) arr_8 [i_1] [i_5] [i_7]);
                        var_45 = ((/* implicit */unsigned int) arr_16 [i_11] [i_11] [i_11] [i_2]);
                        var_46 = ((/* implicit */unsigned char) arr_11 [i_1 + 2] [(unsigned short)3] [i_1] [(unsigned short)3] [i_1 + 2] [i_1]);
                    }
                    var_47 = ((/* implicit */unsigned short) arr_24 [i_1] [i_1] [i_1] [i_1] [i_1 - 1] [(unsigned short)5]);
                    var_48 = ((/* implicit */short) arr_1 [i_2] [i_5]);
                    var_49 = ((/* implicit */unsigned char) arr_2 [i_1] [i_1]);
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 17; i_12 += 3) 
                {
                    for (unsigned int i_13 = 2; i_13 < 16; i_13 += 3) 
                    {
                        {
                            var_50 = ((/* implicit */_Bool) arr_34 [i_2] [i_2] [i_12] [i_2]);
                            var_51 ^= ((/* implicit */unsigned char) arr_14 [(unsigned char)12]);
                            var_52 = ((/* implicit */short) arr_6 [i_2] [i_2] [i_5]);
                        }
                    } 
                } 
            }
        }
        for (signed char i_14 = 1; i_14 < 15; i_14 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (unsigned char i_16 = 1; i_16 < 16; i_16 += 3) 
                {
                    for (int i_17 = 0; i_17 < 17; i_17 += 4) 
                    {
                        {
                            var_53 = ((/* implicit */unsigned long long int) max((var_53), (((/* implicit */unsigned long long int) arr_31 [i_1] [i_1] [i_1] [i_15] [i_16] [i_17] [i_17]))));
                            var_54 ^= ((/* implicit */unsigned char) arr_1 [i_1 + 3] [i_14]);
                            var_55 += ((/* implicit */unsigned char) arr_8 [i_14] [i_16] [i_17]);
                            var_56 |= ((/* implicit */unsigned int) arr_1 [i_1] [i_1]);
                        }
                    } 
                } 
            } 
            arr_47 [(unsigned char)14] [i_1] = ((/* implicit */_Bool) arr_8 [i_1 + 4] [i_1] [i_1 + 4]);
        }
        for (signed char i_18 = 0; i_18 < 17; i_18 += 3) 
        {
            arr_50 [i_1 + 3] = ((/* implicit */signed char) arr_4 [i_18]);
            /* LoopSeq 1 */
            for (short i_19 = 0; i_19 < 17; i_19 += 4) 
            {
                var_57 = ((/* implicit */unsigned char) arr_18 [i_19] [i_18] [i_18]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_20 = 2; i_20 < 16; i_20 += 4) 
                {
                    var_58 = arr_36 [i_20] [i_1] [i_18] [i_20] [i_1] [i_20] [i_19];
                    var_59 |= ((/* implicit */signed char) arr_32 [i_1] [i_18] [i_18] [i_18] [i_18]);
                }
                for (int i_21 = 3; i_21 < 16; i_21 += 3) 
                {
                    var_60 = arr_56 [i_1 + 2] [i_1 + 2];
                    arr_59 [i_1] [i_1] [i_1] = ((/* implicit */signed char) arr_26 [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1]);
                    var_61 = ((/* implicit */int) arr_53 [i_18] [i_19]);
                }
            }
            var_62 = ((/* implicit */unsigned char) arr_49 [i_1] [i_1] [i_18]);
            var_63 = ((/* implicit */int) arr_0 [i_1]);
        }
        var_64 |= ((/* implicit */unsigned short) arr_52 [i_1] [i_1] [i_1] [i_1 + 3]);
        /* LoopSeq 3 */
        for (short i_22 = 1; i_22 < 16; i_22 += 1) /* same iter space */
        {
            var_65 = ((/* implicit */short) min((var_65), (((/* implicit */short) arr_19 [6] [i_22] [i_1] [i_22] [i_1]))));
            /* LoopSeq 1 */
            for (unsigned char i_23 = 0; i_23 < 17; i_23 += 1) 
            {
                arr_65 [i_1] [i_23] [i_23] = arr_0 [i_23];
                var_66 = ((/* implicit */short) max((var_66), (((/* implicit */short) arr_62 [i_1] [i_1] [i_1] [i_1]))));
                var_67 = ((/* implicit */unsigned short) arr_46 [i_1] [i_22] [i_22] [i_22] [i_22] [i_1] [i_22 - 1]);
            }
            var_68 = ((/* implicit */unsigned short) max((var_68), (((/* implicit */unsigned short) arr_31 [i_1] [i_1] [i_1] [i_1] [i_1 + 3] [i_1] [i_1 + 3]))));
            var_69 = ((/* implicit */short) max((var_69), (((/* implicit */short) arr_49 [i_1] [i_1] [i_22]))));
        }
        for (short i_24 = 1; i_24 < 16; i_24 += 1) /* same iter space */
        {
            var_70 |= ((/* implicit */unsigned char) arr_21 [i_1]);
            var_71 = ((/* implicit */short) arr_60 [i_1] [(signed char)14]);
            var_72 = ((/* implicit */unsigned short) arr_26 [i_1] [i_1] [i_1 + 1] [i_24] [i_24 + 1] [i_24]);
            arr_70 [i_1] [i_1] = ((/* implicit */unsigned char) arr_66 [i_1] [i_1] [i_1]);
        }
        for (short i_25 = 1; i_25 < 16; i_25 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_26 = 0; i_26 < 17; i_26 += 1) 
            {
                for (unsigned short i_27 = 2; i_27 < 16; i_27 += 1) 
                {
                    for (unsigned short i_28 = 0; i_28 < 17; i_28 += 4) 
                    {
                        {
                            var_73 = ((/* implicit */unsigned char) arr_82 [i_1] [i_25] [i_26] [i_27] [i_28]);
                            var_74 = ((/* implicit */signed char) arr_39 [i_25] [i_25] [i_25] [i_28]);
                            var_75 = ((/* implicit */unsigned short) arr_69 [i_25 - 1] [i_25 - 1]);
                        }
                    } 
                } 
            } 
            var_76 = ((/* implicit */short) arr_12 [i_1] [(signed char)2] [i_1]);
            var_77 &= arr_51 [i_1 - 1] [i_1] [i_25] [i_25];
            var_78 = arr_34 [i_1] [i_1] [i_25] [i_1];
            /* LoopSeq 1 */
            for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
            {
                var_79 &= ((/* implicit */_Bool) arr_34 [i_1] [i_1] [i_25 + 1] [i_29]);
                /* LoopNest 2 */
                for (int i_30 = 3; i_30 < 14; i_30 += 3) 
                {
                    for (unsigned int i_31 = 4; i_31 < 16; i_31 += 3) 
                    {
                        {
                            var_80 = ((/* implicit */int) arr_84 [i_1] [i_25] [i_29] [i_25 - 1]);
                            var_81 = ((/* implicit */unsigned char) arr_91 [i_29] [i_25 - 1] [i_29] [i_30] [i_31] [i_1]);
                            var_82 = ((/* implicit */unsigned int) arr_61 [i_29] [i_30] [i_31]);
                        }
                    } 
                } 
                var_83 = ((/* implicit */_Bool) arr_82 [i_1] [i_25] [i_25 + 1] [i_29] [i_25]);
            }
        }
        var_84 |= ((/* implicit */short) arr_86 [i_1] [i_1 + 1] [i_1 + 1]);
        var_85 = ((/* implicit */int) arr_6 [(_Bool)1] [i_1] [i_1 + 2]);
    }
}
