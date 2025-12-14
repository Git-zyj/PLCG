/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28896
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
    var_16 = ((/* implicit */signed char) var_0);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */short) arr_1 [i_0]);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                var_18 = ((/* implicit */unsigned char) arr_7 [i_0] [(signed char)0] [i_2] [(signed char)0]);
                var_19 = ((/* implicit */unsigned int) arr_0 [2ULL]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_3 = 1; i_3 < 13; i_3 += 1) 
                {
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_1 [i_2]))));
                    var_21 = arr_10 [i_0] [i_1] [i_2] [i_2] [i_3];
                    var_22 = ((/* implicit */signed char) arr_5 [i_1]);
                }
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    var_23 -= ((/* implicit */short) arr_3 [(signed char)3] [i_1]);
                    arr_14 [i_0] [i_1] [i_0] [i_4] |= ((/* implicit */unsigned short) arr_11 [i_4] [i_4]);
                    arr_15 [i_4] [i_1] [i_1] = ((/* implicit */long long int) arr_1 [i_0]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 3) 
                    {
                        arr_18 [i_0] [i_1] [i_1] [i_2] [i_4] [i_5 - 1] = ((/* implicit */short) arr_8 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]);
                        var_24 = arr_2 [i_5];
                        arr_19 [i_1] = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_5 - 1]);
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) arr_4 [i_2] [i_4]))));
                        var_26 = ((/* implicit */int) arr_11 [i_0] [i_1]);
                    }
                    for (long long int i_6 = 2; i_6 < 12; i_6 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned short) arr_5 [i_0]);
                        var_28 = ((/* implicit */short) arr_16 [6U] [i_0] [i_0] [(short)2] [i_0] [(short)13] [6U]);
                        var_29 = arr_21 [i_0] [i_1];
                    }
                }
            }
            for (unsigned int i_7 = 2; i_7 < 14; i_7 += 3) 
            {
                arr_28 [i_1] = ((/* implicit */int) arr_21 [i_0] [i_0]);
                var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) arr_1 [i_0]))));
            }
            var_31 = ((/* implicit */unsigned int) arr_9 [i_0] [i_1] [5ULL] [i_1] [(_Bool)1]);
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_8 = 1; i_8 < 11; i_8 += 4) 
        {
            var_32 = ((/* implicit */signed char) arr_2 [i_0]);
            var_33 = ((/* implicit */unsigned char) arr_29 [i_8] [i_8]);
        }
    }
    for (long long int i_9 = 0; i_9 < 15; i_9 += 4) /* same iter space */
    {
        var_34 ^= ((/* implicit */unsigned int) arr_23 [i_9] [i_9] [i_9] [(unsigned char)0] [i_9]);
        arr_35 [(unsigned short)7] = ((/* implicit */unsigned char) arr_7 [i_9] [i_9] [i_9] [i_9]);
    }
    for (long long int i_10 = 0; i_10 < 15; i_10 += 4) /* same iter space */
    {
        var_35 = ((/* implicit */unsigned char) arr_16 [i_10] [i_10] [i_10] [9] [i_10] [i_10] [i_10]);
        /* LoopSeq 1 */
        for (int i_11 = 0; i_11 < 15; i_11 += 2) 
        {
            var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) arr_8 [i_10] [i_11] [i_10] [i_10] [i_10] [i_10]))));
            /* LoopSeq 3 */
            for (signed char i_12 = 0; i_12 < 15; i_12 += 1) 
            {
                arr_42 [i_10] [i_10] [11] [i_12] = ((/* implicit */unsigned short) arr_13 [i_10] [i_11] [i_12]);
                arr_43 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) arr_12 [i_10] [i_11] [i_12] [i_12]);
                arr_44 [i_11] = ((/* implicit */unsigned int) arr_25 [i_10]);
                var_37 = arr_8 [i_12] [i_12] [11LL] [i_11] [i_11] [i_10];
            }
            /* vectorizable */
            for (unsigned char i_13 = 2; i_13 < 14; i_13 += 1) 
            {
                var_38 ^= ((/* implicit */unsigned char) arr_8 [i_10] [i_11] [i_11] [i_13 - 1] [i_13] [(signed char)4]);
                var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) arr_37 [i_10]))));
            }
            for (unsigned char i_14 = 2; i_14 < 12; i_14 += 3) 
            {
                var_40 -= ((/* implicit */signed char) arr_31 [i_10] [(signed char)14] [14]);
                /* LoopSeq 2 */
                for (signed char i_15 = 4; i_15 < 12; i_15 += 1) /* same iter space */
                {
                    arr_53 [i_15] [i_14] [i_11] [i_11] [(unsigned short)8] [i_10] = ((/* implicit */unsigned short) arr_41 [i_10] [i_10]);
                    var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) arr_17 [i_10] [(short)12] [i_10] [i_10] [i_10] [i_10] [i_10]))));
                }
                for (signed char i_16 = 4; i_16 < 12; i_16 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_17 = 0; i_17 < 15; i_17 += 4) /* same iter space */
                    {
                        arr_61 [i_10] [8ULL] [(unsigned short)0] [i_16 + 2] [i_17] = ((/* implicit */int) arr_58 [i_17] [i_17] [i_17] [12ULL] [i_17] [i_17]);
                        arr_62 [i_17] [1LL] [1LL] [i_11] [8ULL] = ((/* implicit */signed char) arr_0 [8ULL]);
                        arr_63 [i_10] [i_10] [(short)0] [i_10] [i_10] = ((/* implicit */unsigned char) arr_46 [i_16 - 2] [13]);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_18 = 0; i_18 < 15; i_18 += 4) /* same iter space */
                    {
                        var_42 -= ((/* implicit */unsigned short) arr_22 [i_10] [3LL] [i_10]);
                        arr_66 [i_10] [i_10] [i_14] [i_10] [i_16] [i_18] [i_18] = ((/* implicit */_Bool) arr_7 [i_10] [i_10] [(signed char)12] [i_18]);
                        var_43 = ((/* implicit */unsigned char) arr_58 [i_11] [(signed char)12] [(signed char)12] [(unsigned char)0] [i_11] [i_11]);
                        var_44 -= ((/* implicit */short) arr_32 [(unsigned char)5]);
                    }
                    var_45 = arr_27 [i_11] [i_11] [0U];
                }
                /* LoopSeq 1 */
                for (unsigned int i_19 = 0; i_19 < 15; i_19 += 4) 
                {
                    var_46 = ((/* implicit */unsigned int) arr_55 [i_10] [i_10] [i_10]);
                    arr_70 [i_10] [i_11] [13ULL] [i_14] [i_19] = ((/* implicit */unsigned long long int) arr_46 [0ULL] [i_11]);
                    var_47 &= ((/* implicit */unsigned short) arr_2 [i_10]);
                }
                var_48 = ((/* implicit */signed char) min((var_48), (((/* implicit */signed char) arr_56 [i_10] [i_11] [i_11] [i_14 - 1]))));
            }
            /* LoopSeq 1 */
            for (unsigned char i_20 = 2; i_20 < 14; i_20 += 4) 
            {
                var_49 = ((/* implicit */signed char) max((var_49), (((/* implicit */signed char) arr_36 [i_10] [(unsigned short)12]))));
                var_50 = arr_20 [7ULL] [i_10] [i_11] [i_11] [i_20];
                arr_74 [i_11] [i_20] [8] [i_20] = ((/* implicit */unsigned short) arr_10 [i_11] [i_11] [i_11] [i_11] [i_11]);
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_21 = 1; i_21 < 13; i_21 += 4) /* same iter space */
                {
                    arr_79 [i_10] [i_11] [i_20 - 2] [i_21 - 1] [i_10] [i_11] |= ((/* implicit */unsigned short) arr_27 [i_10] [i_10] [i_21 - 1]);
                    var_51 = ((/* implicit */unsigned long long int) arr_52 [i_10] [i_10] [i_10] [i_10]);
                    var_52 = arr_71 [i_21] [i_21 + 1] [i_21 - 1];
                    var_53 |= ((/* implicit */unsigned long long int) arr_50 [i_10] [i_11] [i_20 - 2] [i_11]);
                }
                /* vectorizable */
                for (short i_22 = 1; i_22 < 13; i_22 += 4) /* same iter space */
                {
                    var_54 = ((/* implicit */long long int) arr_68 [i_10] [i_10] [i_10] [i_10] [i_10]);
                    var_55 &= arr_49 [i_22];
                    var_56 = ((/* implicit */signed char) min((var_56), (((/* implicit */signed char) arr_5 [i_10]))));
                }
                for (short i_23 = 1; i_23 < 13; i_23 += 4) /* same iter space */
                {
                    arr_86 [i_10] [i_10] [i_20 + 1] [i_20 + 1] = ((/* implicit */long long int) arr_26 [(signed char)6] [(unsigned char)12] [(unsigned char)12] [i_23]);
                    var_57 = ((/* implicit */signed char) arr_40 [(signed char)2] [i_11] [(signed char)2]);
                    arr_87 [i_20 - 2] [i_23] = ((/* implicit */unsigned int) arr_54 [(signed char)13] [i_23 + 2]);
                    arr_88 [i_10] [i_10] [7U] [i_10] = ((/* implicit */long long int) arr_13 [i_11] [i_20] [(short)14]);
                }
            }
        }
    }
}
