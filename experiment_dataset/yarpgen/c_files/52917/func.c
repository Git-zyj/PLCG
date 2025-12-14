/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52917
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
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) min((((/* implicit */int) var_6)), (min((((((/* implicit */int) var_8)) / (var_2))), (((/* implicit */int) ((unsigned short) var_10))))))))));
    var_13 = ((/* implicit */int) ((((int) var_7)) <= (var_11)));
    var_14 = ((/* implicit */short) var_0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        arr_4 [4U] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [0])) ? (((/* implicit */int) arr_3 [4])) : (((/* implicit */int) arr_3 [(signed char)20]))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_8 [15U]))) ? (((/* implicit */long long int) arr_1 [i_0])) : (((arr_7 [i_0] [i_1] [i_2] [i_1]) % (arr_6 [(signed char)19] [i_1])))));
                var_16 |= ((((arr_7 [2LL] [2LL] [i_1] [2LL]) / (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))))) >> (((((/* implicit */int) ((short) arr_6 [i_0] [i_1]))) + (14459))));
                arr_10 [i_0] [(short)5] = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
            }
            arr_11 [4U] |= ((/* implicit */long long int) (-(((/* implicit */int) ((signed char) arr_7 [i_0] [(signed char)1] [i_0] [i_0])))));
            /* LoopSeq 2 */
            for (signed char i_3 = 4; i_3 < 19; i_3 += 2) 
            {
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((unsigned long long int) arr_0 [i_0] [i_0])))));
                var_18 |= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) > (((/* implicit */int) arr_14 [i_3] [i_1] [i_3]))))) > (((/* implicit */int) ((short) arr_14 [i_3] [i_1] [(short)0])))));
            }
            for (unsigned long long int i_4 = 3; i_4 < 18; i_4 += 4) 
            {
                arr_18 [i_0] [i_1] [i_1] [i_0] = ((((/* implicit */int) ((short) 1572785984))) * (((((/* implicit */_Bool) arr_7 [(unsigned short)11] [18ULL] [i_1] [i_1])) ? (((/* implicit */int) arr_17 [i_0 - 1] [i_0 - 1] [i_0] [i_4])) : (((/* implicit */int) arr_8 [i_0])))));
                arr_19 [i_4 + 2] [14U] [i_4 + 2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_5 [i_0] [i_1 + 2] [i_4 + 2])) / (arr_6 [i_1 - 1] [i_4])))) ? (((/* implicit */int) arr_3 [i_0])) : (((((/* implicit */int) arr_0 [i_4] [i_0])) * (((/* implicit */int) arr_14 [i_0] [i_1] [i_0]))))));
            }
            var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_1 [i_0])))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (short i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 1; i_7 < 19; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */int) ((arr_7 [i_0 + 1] [i_7 - 1] [i_6] [(short)14]) << (((((unsigned int) arr_26 [i_7] [i_6])) - (3444683303U)))));
                            var_21 = ((/* implicit */short) ((_Bool) -2147483639));
                            arr_29 [i_0] [i_5] [i_5] [(short)4] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) && (((/* implicit */_Bool) arr_5 [20U] [i_7 - 1] [i_0 - 1]))));
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_7 + 2])) && (((/* implicit */_Bool) arr_22 [i_5]))));
                        }
                    } 
                } 
            } 
            var_23 += ((/* implicit */signed char) ((unsigned int) 4040228100U));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_24 |= ((/* implicit */signed char) ((_Bool) ((arr_23 [4LL]) <= (((/* implicit */unsigned long long int) arr_20 [i_0])))));
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 2) 
            {
                for (short i_11 = 2; i_11 < 20; i_11 += 1) 
                {
                    {
                        var_25 ^= ((/* implicit */unsigned char) (~(((arr_27 [i_10] [i_9] [i_9] [i_9] [i_9]) % (((/* implicit */long long int) arr_15 [i_0] [i_9] [i_9] [i_11 - 2]))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_12 = 2; i_12 < 19; i_12 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) arr_16 [17LL] [i_11 - 2] [i_10] [i_9]);
                            arr_42 [i_0] [6U] [(unsigned char)7] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_12 [i_12] [i_0] [i_0] [i_0]);
                            var_27 *= ((/* implicit */unsigned int) ((((arr_5 [i_0] [i_0] [i_0]) <= (((/* implicit */int) arr_17 [i_0] [i_0] [i_12] [i_12])))) && (((/* implicit */_Bool) ((arr_23 [i_12]) | (((/* implicit */unsigned long long int) arr_16 [12LL] [5ULL] [(short)18] [i_0])))))));
                            arr_43 [i_9] [i_10] &= ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0 + 1] [i_11 + 1])) - (((/* implicit */int) arr_0 [i_0 + 1] [i_11 + 1]))));
                        }
                        var_28 = arr_36 [i_0] [(unsigned short)19] [i_10] [i_0];
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 1) 
            {
                arr_48 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0 - 1] [i_0]))) + (arr_30 [i_0]))));
                var_29 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0 - 1] [i_0 + 1] [8LL]))));
                arr_49 [i_0] = ((/* implicit */_Bool) ((int) ((arr_23 [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [3LL] [i_0] [3LL]))))));
                arr_50 [i_0] = ((/* implicit */short) ((arr_7 [i_13] [15U] [i_13] [i_13]) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_14 [i_0] [i_9] [i_9])) >= (((/* implicit */int) arr_22 [i_13]))))))));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 21; i_14 += 1) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */int) ((short) arr_9 [8LL] [8LL] [i_13] [i_15]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_9] [i_13] [(short)14])))))));
                            arr_57 [i_0] [i_0] [i_0] [i_13] [i_14] [i_15] = ((/* implicit */signed char) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_0]))) > (arr_20 [i_0]))));
                            var_31 -= ((/* implicit */short) arr_12 [i_0] [(unsigned short)20] [i_0 + 1] [(short)10]);
                        }
                    } 
                } 
            }
            for (short i_16 = 0; i_16 < 21; i_16 += 3) /* same iter space */
            {
                arr_62 [(short)12] [12] [3LL] [i_0] = ((/* implicit */short) arr_31 [(signed char)19] [i_0]);
                /* LoopNest 2 */
                for (unsigned int i_17 = 2; i_17 < 20; i_17 += 4) 
                {
                    for (unsigned int i_18 = 0; i_18 < 21; i_18 += 2) 
                    {
                        {
                            arr_68 [i_0] [i_0] [i_0] [i_17 - 1] [i_0] [i_17] [(unsigned char)13] = ((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_1 [i_0])))));
                            var_32 ^= ((/* implicit */long long int) ((signed char) arr_37 [i_18] [i_18]));
                            arr_69 [i_0] [i_0] [i_0] [i_16] [i_0] = ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) (unsigned short)49329))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */signed char) ((unsigned int) (-(arr_6 [i_0] [(unsigned short)20]))));
                arr_70 [i_0] = ((/* implicit */int) ((-1282357328) == (((/* implicit */int) arr_22 [i_16]))));
            }
            for (short i_19 = 0; i_19 < 21; i_19 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned int i_20 = 0; i_20 < 21; i_20 += 2) 
                {
                    var_34 ^= ((/* implicit */unsigned int) ((unsigned short) arr_12 [i_0 + 1] [i_20] [i_0 + 1] [i_0 - 1]));
                    var_35 = ((/* implicit */unsigned long long int) arr_63 [i_9] [i_19] [i_0]);
                }
                for (signed char i_21 = 2; i_21 < 20; i_21 += 3) 
                {
                    arr_78 [i_0] [14U] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_55 [i_0 + 1] [i_21 - 2] [i_0])) | (((/* implicit */int) arr_55 [i_0 + 1] [i_21 - 2] [i_0]))));
                    arr_79 [i_0] [(_Bool)1] [i_19] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_66 [18LL] [i_9] [18LL] [i_19] [i_19] [i_21] [17ULL]))) / (((long long int) arr_15 [i_0] [(signed char)14] [i_9] [i_0]))));
                    var_36 = ((/* implicit */signed char) ((arr_35 [i_21 - 1] [i_0 - 1] [(short)16] [i_21 - 1]) / (arr_35 [i_21 - 1] [i_0 - 1] [i_0 - 1] [i_21 + 1])));
                    arr_80 [i_0 - 1] [i_0] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)(-127 - 1)))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_19])))))));
                }
                var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) arr_30 [(_Bool)1]))));
                var_38 += ((/* implicit */signed char) (-(arr_27 [10LL] [i_0] [i_0] [i_0] [i_0])));
            }
        }
    }
    var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) var_3))) >> (((((var_4) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))) - (12698)))))) | (((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((unsigned long long int) var_10)) : (((/* implicit */unsigned long long int) ((unsigned int) var_10))))))))));
}
