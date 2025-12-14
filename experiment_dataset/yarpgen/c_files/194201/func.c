/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194201
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] [6U] = var_11;
        /* LoopSeq 2 */
        for (long long int i_1 = 4; i_1 < 19; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((max((var_0), (((/* implicit */unsigned int) (unsigned short)65535)))) & (((var_6) >> (((((/* implicit */int) var_10)) - (58924)))))))) | (min((((((/* implicit */long long int) 2016U)) % (arr_0 [i_2] [i_1]))), (((/* implicit */long long int) 2991308620U))))));
                        var_21 = ((/* implicit */unsigned int) 6582596190181613945LL);
                    }
                } 
            } 
            arr_11 [i_0] = var_10;
        }
        for (short i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    {
                        arr_20 [i_4] [i_4] [i_6] = ((/* implicit */signed char) ((arr_3 [(signed char)15] [8ULL]) < (arr_6 [i_0] [i_0] [(short)14] [19U])));
                        arr_21 [12U] [i_4] [i_5] [i_6] = ((/* implicit */signed char) arr_7 [16U] [i_4] [i_4] [i_0]);
                    }
                } 
            } 
            var_22 *= var_7;
        }
        /* LoopSeq 2 */
        for (signed char i_7 = 4; i_7 < 20; i_7 += 1) 
        {
            var_23 = ((/* implicit */unsigned short) arr_1 [(signed char)21] [i_0]);
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 1; i_8 < 21; i_8 += 2) 
            {
                arr_26 [i_0] [9U] [i_0] = 3804888674U;
                var_24 = (unsigned short)65530;
            }
            /* vectorizable */
            for (unsigned int i_9 = 0; i_9 < 22; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 22; i_10 += 3) 
                {
                    for (long long int i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        {
                            arr_38 [i_9] [i_7] [i_9] [i_7] = ((/* implicit */unsigned long long int) (unsigned short)32512);
                            arr_39 [i_0] [i_9] [i_9] [i_10] [i_11] = 4294967265U;
                        }
                    } 
                } 
                var_25 = ((/* implicit */long long int) arr_5 [i_0] [i_7] [i_9]);
            }
        }
        /* vectorizable */
        for (long long int i_12 = 0; i_12 < 22; i_12 += 1) 
        {
            var_26 ^= ((/* implicit */long long int) arr_16 [i_12] [i_0] [i_0] [2LL]);
            /* LoopNest 3 */
            for (unsigned int i_13 = 1; i_13 < 20; i_13 += 1) 
            {
                for (unsigned int i_14 = 0; i_14 < 22; i_14 += 3) 
                {
                    for (unsigned short i_15 = 3; i_15 < 20; i_15 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */signed char) 2991308620U);
                            arr_50 [i_12] [i_0] [0LL] [(short)6] = ((/* implicit */long long int) ((((/* implicit */int) ((var_5) < (1303658676U)))) == (((/* implicit */int) var_9))));
                            arr_51 [(signed char)1] [i_12] [i_12] [(signed char)1] [i_15] [(signed char)1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_44 [i_0] [i_13] [i_15])) ^ (12628802558606385633ULL)));
                            var_28 = ((/* implicit */unsigned short) 9223372036854775783LL);
                            arr_52 [(short)4] [(short)4] [i_13 + 2] [(short)4] [16U] [i_13 + 1] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */long long int) 3007624188U)) - (var_2)));
                        }
                    } 
                } 
            } 
            arr_53 [i_12] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58504))) + (arr_45 [1U] [(signed char)21] [i_12] [i_12] [i_0] [(unsigned short)0])));
            /* LoopSeq 1 */
            for (long long int i_16 = 4; i_16 < 21; i_16 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_17 = 1; i_17 < 21; i_17 += 4) 
                {
                    var_29 = arr_8 [i_17] [i_16] [i_12];
                    var_30 = ((/* implicit */long long int) var_17);
                }
                var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) arr_54 [i_0] [i_12] [i_12]))));
                arr_58 [i_0] [i_12] [1LL] = arr_7 [14U] [(signed char)19] [(signed char)19] [1LL];
                arr_59 [i_0] [i_0] [i_12] [i_12] = ((/* implicit */unsigned short) 2016U);
            }
        }
        var_32 = ((/* implicit */short) min((((((/* implicit */long long int) ((/* implicit */int) ((7117893971404761084LL) >= (((/* implicit */long long int) 137352538U)))))) - (((((/* implicit */long long int) ((/* implicit */int) (short)23003))) - (0LL))))), (((/* implicit */long long int) 4294967295U))));
    }
    /* vectorizable */
    for (signed char i_18 = 2; i_18 < 19; i_18 += 1) 
    {
        var_33 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)61440)) << (((((var_0) | (arr_45 [i_18] [i_18] [i_18] [10ULL] [5LL] [0LL]))) - (2617244651U)))));
        var_34 = ((/* implicit */long long int) arr_7 [i_18] [i_18] [i_18] [i_18]);
    }
    var_35 *= ((/* implicit */unsigned int) max((((((/* implicit */long long int) 2816165930U)) + (7398218484120767899LL))), (min((((/* implicit */long long int) var_18)), (0LL)))));
}
