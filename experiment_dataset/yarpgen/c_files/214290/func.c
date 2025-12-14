/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214290
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_14 = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_1 [(signed char)3]))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (-(9007199254740991ULL)));
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_15 = ((/* implicit */signed char) (~(arr_6 [i_1])));
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 18; i_2 += 2) /* same iter space */
        {
            var_16 ^= arr_5 [i_2];
            arr_11 [i_1] [i_1] = (~(arr_5 [1ULL]));
            var_17 = ((/* implicit */unsigned long long int) (~((-((-(arr_0 [13ULL])))))));
            var_18 ^= ((/* implicit */unsigned long long int) (~(arr_4 [i_1])));
            var_19 |= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_10 [(short)12]))));
        }
        for (short i_3 = 0; i_3 < 18; i_3 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 4; i_4 < 15; i_4 += 1) 
            {
                var_20 = ((/* implicit */int) arr_12 [i_1] [i_1]);
                var_21 = ((/* implicit */int) arr_6 [(short)16]);
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    for (int i_6 = 3; i_6 < 17; i_6 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) arr_9 [i_5] [i_4]);
                            var_23 |= ((/* implicit */int) arr_17 [(_Bool)1]);
                        }
                    } 
                } 
                var_24 ^= ((/* implicit */unsigned long long int) arr_1 [9]);
                var_25 = ((/* implicit */short) arr_20 [1U] [i_3]);
            }
            var_26 = ((/* implicit */short) (-(8279303778710587367ULL)));
            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) arr_14 [i_1] [13ULL] [i_1]))));
            arr_25 [(unsigned short)4] [i_3] [(unsigned short)4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_3]))));
        }
    }
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) 
    {
        var_28 |= ((/* implicit */unsigned char) (+(arr_0 [(short)7])));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 24; i_8 += 1) 
        {
            for (short i_9 = 1; i_9 < 23; i_9 += 1) 
            {
                for (int i_10 = 0; i_10 < 24; i_10 += 3) 
                {
                    {
                        arr_39 [i_9] [i_8] [(short)21] [i_10] = ((/* implicit */long long int) arr_27 [i_9] [i_10]);
                        var_29 = ((/* implicit */unsigned int) arr_31 [i_9] [i_8]);
                        var_30 = (~(arr_2 [20U]));
                        arr_40 [i_9] [(unsigned char)4] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)186))));
                    }
                } 
            } 
        } 
        arr_41 [i_7] [i_7] = ((/* implicit */unsigned long long int) arr_26 [i_7]);
    }
    for (long long int i_11 = 0; i_11 < 18; i_11 += 3) 
    {
        /* LoopNest 2 */
        for (short i_12 = 0; i_12 < 18; i_12 += 4) 
        {
            for (unsigned int i_13 = 0; i_13 < 18; i_13 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 1) 
                    {
                        var_31 = ((/* implicit */short) arr_51 [i_11] [i_13] [14] [i_11] [i_11]);
                        var_32 = ((/* implicit */unsigned char) arr_36 [(unsigned char)3] [i_12] [i_13] [i_14]);
                    }
                    /* LoopNest 2 */
                    for (long long int i_15 = 0; i_15 < 18; i_15 += 1) 
                    {
                        for (unsigned int i_16 = 1; i_16 < 16; i_16 += 1) 
                        {
                            {
                                arr_57 [i_16] [i_12] = ((/* implicit */int) arr_0 [i_11]);
                                arr_58 [i_16] [i_12] [i_12] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_23 [7LL] [(short)12] [(unsigned char)9] [i_15] [15] [17LL]))));
                            }
                        } 
                    } 
                    arr_59 [9LL] [i_12] [i_12] = ((/* implicit */long long int) (+((-(((/* implicit */int) arr_45 [i_11]))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_17 = 0; i_17 < 18; i_17 += 1) 
        {
            var_33 = ((/* implicit */int) (~((-(arr_2 [(short)8])))));
            var_34 = ((/* implicit */_Bool) arr_22 [13U] [i_17] [i_17]);
        }
        for (int i_18 = 3; i_18 < 15; i_18 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_19 = 0; i_19 < 18; i_19 += 4) 
            {
                for (long long int i_20 = 0; i_20 < 18; i_20 += 4) 
                {
                    {
                        arr_68 [i_18] [(short)9] [7U] [i_18] [(short)9] [(_Bool)1] = ((/* implicit */signed char) (+((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)6593)))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_21 = 0; i_21 < 18; i_21 += 1) 
                        {
                            arr_73 [(unsigned short)15] [i_18] [i_11] = ((/* implicit */_Bool) (-((+(arr_69 [9LL])))));
                            arr_74 [i_18] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_10 [i_20]))));
                            var_35 = arr_49 [i_11] [(unsigned short)6] [i_11];
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_22 = 2; i_22 < 16; i_22 += 2) 
                        {
                            arr_78 [i_11] [12] [i_11] [i_19] [i_18] [i_11] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                            arr_79 [1] [i_18] [i_19] [i_18] = ((/* implicit */unsigned long long int) (+(arr_7 [i_22])));
                            arr_80 [i_22 + 1] [i_20] [i_18] [i_18] [i_11] = ((/* implicit */short) arr_61 [i_18]);
                            arr_81 [i_20] |= (!(((/* implicit */_Bool) arr_54 [9ULL] [i_18] [(unsigned char)3] [i_20] [(short)11])));
                        }
                    }
                } 
            } 
            var_36 = ((/* implicit */short) (~(arr_20 [i_11] [i_18])));
            var_37 = ((/* implicit */long long int) (+((+(arr_7 [i_18])))));
        }
    }
    var_38 = ((/* implicit */long long int) var_2);
}
