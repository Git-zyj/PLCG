/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241803
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
    var_16 = ((/* implicit */long long int) var_4);
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        var_17 -= ((/* implicit */short) arr_0 [i_0] [(_Bool)1]);
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            var_18 += ((/* implicit */long long int) arr_2 [i_0] [i_0]);
            arr_6 [(signed char)12] [i_1] [i_1 + 1] |= ((/* implicit */unsigned short) arr_1 [i_0]);
            var_19 &= ((/* implicit */long long int) arr_1 [i_0]);
        }
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            arr_10 [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0 + 3] [(signed char)8]);
            var_20 = arr_1 [(unsigned char)2];
            var_21 = ((/* implicit */unsigned char) arr_0 [i_0 + 3] [i_2]);
        }
        arr_11 [(unsigned char)3] = ((/* implicit */short) arr_7 [i_0 + 2]);
        var_22 += ((/* implicit */signed char) arr_5 [i_0] [i_0] [10LL]);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_23 = ((/* implicit */signed char) arr_13 [i_3]);
        arr_15 [i_3] = ((/* implicit */_Bool) arr_14 [i_3]);
        var_24 = ((/* implicit */int) arr_14 [i_3]);
    }
    /* LoopSeq 4 */
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */int) arr_16 [(unsigned short)2]);
        var_26 = ((/* implicit */signed char) arr_16 [i_4]);
        arr_20 [i_4] = ((/* implicit */_Bool) arr_19 [i_4]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            var_27 -= arr_18 [i_4];
            arr_23 [i_4] [i_5] = ((/* implicit */short) arr_12 [i_5] [i_4]);
            /* LoopSeq 2 */
            for (int i_6 = 2; i_6 < 19; i_6 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    arr_29 [i_4] [i_7] [i_7] [i_4] = ((/* implicit */unsigned char) arr_24 [i_4] [(unsigned char)20] [i_6 + 2] [2LL]);
                    var_28 |= ((/* implicit */unsigned long long int) arr_19 [(unsigned char)10]);
                    var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) arr_26 [i_5] [i_5]))));
                }
                for (long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    arr_32 [i_4] [i_8] [i_6 - 2] = ((/* implicit */unsigned char) arr_19 [i_4]);
                    arr_33 [i_8] [(unsigned char)12] [i_5] [i_6] [i_8] = arr_22 [i_4] [i_4];
                }
                var_30 -= ((/* implicit */unsigned char) arr_16 [i_4]);
                arr_34 [i_4] [i_4] [i_6] [i_6] = ((/* implicit */int) arr_13 [i_4]);
                arr_35 [i_4] [i_4] = arr_14 [i_4];
            }
            for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_10 = 1; i_10 < 21; i_10 += 1) 
                {
                    for (int i_11 = 3; i_11 < 20; i_11 += 1) 
                    {
                        {
                            arr_42 [i_4] [i_4] [(short)4] [(unsigned char)16] [i_5] [i_4] |= ((/* implicit */unsigned short) arr_40 [i_4] [i_10] [i_5] [i_5] [i_4]);
                            var_31 ^= ((/* implicit */unsigned long long int) arr_40 [i_4] [i_5] [i_5] [i_10 + 2] [i_11]);
                        }
                    } 
                } 
                arr_43 [i_4] [i_5] [i_9] [i_9] = ((/* implicit */_Bool) arr_37 [i_4] [i_4] [i_4] [i_4]);
                arr_44 [(unsigned short)19] [i_9] = arr_40 [i_4] [i_4] [i_5] [i_5] [i_9];
                var_32 *= ((/* implicit */unsigned char) arr_41 [i_4] [i_4] [i_5] [i_9]);
            }
        }
    }
    for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 1) /* same iter space */
    {
        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) arr_27 [i_12]))));
        var_34 = ((/* implicit */unsigned char) arr_38 [i_12] [i_12] [7U] [i_12]);
        var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) arr_22 [i_12] [i_12]))));
    }
    for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (long long int i_14 = 2; i_14 < 20; i_14 += 2) 
        {
            var_36 -= arr_47 [16];
            var_37 -= ((/* implicit */_Bool) arr_13 [i_14]);
            var_38 = ((/* implicit */short) arr_36 [1ULL] [i_14 + 3]);
            var_39 &= ((/* implicit */unsigned short) arr_50 [i_14 - 1] [i_13]);
        }
        for (short i_15 = 0; i_15 < 23; i_15 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_16 = 0; i_16 < 23; i_16 += 1) 
            {
                for (unsigned short i_17 = 0; i_17 < 23; i_17 += 1) 
                {
                    {
                        var_40 = ((/* implicit */_Bool) arr_45 [i_13]);
                        var_41 = ((/* implicit */unsigned int) arr_53 [i_13] [i_15] [i_13]);
                    }
                } 
            } 
            var_42 &= ((/* implicit */unsigned char) arr_52 [i_15]);
            var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) arr_40 [i_13] [i_13] [i_13] [i_13] [i_13]))));
            var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) arr_49 [i_13] [i_13]))));
            var_45 = ((/* implicit */short) arr_17 [i_13]);
        }
        for (short i_18 = 0; i_18 < 23; i_18 += 1) /* same iter space */
        {
            arr_65 [i_18] = ((/* implicit */unsigned int) arr_47 [i_13]);
            var_46 -= ((/* implicit */_Bool) arr_60 [i_13] [(short)5]);
            arr_66 [i_13] [i_18] = ((/* implicit */_Bool) arr_18 [i_13]);
        }
        var_47 = ((/* implicit */int) arr_54 [i_13] [i_13] [i_13]);
        arr_67 [7] [i_13] = ((/* implicit */unsigned short) arr_62 [i_13] [i_13] [i_13]);
    }
    /* vectorizable */
    for (short i_19 = 0; i_19 < 14; i_19 += 1) 
    {
        var_48 |= ((/* implicit */unsigned char) arr_55 [i_19]);
        var_49 *= ((/* implicit */short) arr_18 [i_19]);
        var_50 = ((/* implicit */unsigned short) arr_63 [i_19] [i_19]);
        var_51 = ((/* implicit */unsigned short) arr_57 [i_19] [i_19] [i_19]);
    }
    var_52 = ((/* implicit */unsigned char) var_6);
}
