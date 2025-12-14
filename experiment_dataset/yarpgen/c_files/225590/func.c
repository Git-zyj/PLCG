/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225590
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        var_12 ^= ((/* implicit */unsigned int) -2039194846628541940LL);
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            var_13 = ((/* implicit */long long int) min((var_13), ((+(-8962904500792330177LL)))));
                            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_1])) : (4294967295U)));
                            arr_12 [i_1] [8LL] [i_2] [i_3] [8LL] = ((/* implicit */short) arr_9 [i_3] [i_3]);
                            var_15 = ((/* implicit */unsigned char) ((arr_10 [i_4] [i_0] [i_2] [i_4] [i_4] [i_0] [i_4]) % (arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                        }
                    }
                    /* vectorizable */
                    for (short i_5 = 2; i_5 < 8; i_5 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_6 = 4; i_6 < 8; i_6 += 1) 
                        {
                            arr_20 [2] [i_1] [i_5] [2] [i_2] [i_1] [i_0] = ((/* implicit */int) arr_11 [i_5] [i_5] [i_5 + 1] [i_1] [i_6 + 1] [i_6 - 1] [9LL]);
                            var_16 += ((/* implicit */unsigned int) -2039194846628541940LL);
                            var_17 = ((/* implicit */signed char) ((arr_17 [i_6 - 1] [i_6 - 1] [i_6] [i_6] [i_6] [9ULL] [i_6 - 1]) >= (arr_10 [i_0] [i_0] [i_2] [i_2] [i_5 - 2] [i_5 + 1] [i_5 - 1])));
                            var_18 = ((/* implicit */short) 1U);
                        }
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            arr_23 [i_1] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_19 [i_5 + 1] [i_7 + 1]))));
                            var_19 = ((((/* implicit */_Bool) -2039194846628541940LL)) ? (((/* implicit */int) arr_2 [i_7] [i_7 + 1])) : (((/* implicit */int) (_Bool)1)));
                            var_20 -= ((/* implicit */_Bool) ((short) arr_22 [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_7] [i_5 + 2] [i_7 + 1]));
                            arr_24 [(signed char)5] [i_1] [(signed char)3] [i_5] [i_1] [i_1] = ((/* implicit */short) ((unsigned short) arr_11 [i_5 - 2] [i_7 + 1] [i_7 + 1] [i_1] [i_5 - 2] [i_7] [i_7]));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 1496045895U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)2198))));
                            arr_27 [i_1] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) (-(arr_8 [i_5 - 1] [i_5 + 2] [i_5 + 1])));
                        }
                        /* LoopSeq 2 */
                        for (long long int i_9 = 3; i_9 < 9; i_9 += 3) 
                        {
                            var_22 -= ((/* implicit */unsigned char) ((arr_5 [i_2] [8ULL] [i_5 - 2] [8ULL]) & (arr_5 [i_2] [i_5] [i_5 - 1] [(unsigned char)4])));
                            arr_32 [i_0] [i_0] [i_2] [i_0] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0]))));
                            arr_33 [i_1] = ((/* implicit */unsigned char) 14U);
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (-(((((/* implicit */int) (_Bool)1)) / (67108863))))))));
                        }
                        for (long long int i_10 = 2; i_10 < 8; i_10 += 4) 
                        {
                            arr_37 [0U] [i_10] [i_1] [(short)2] [(short)2] [i_5 + 2] [(signed char)2] |= ((/* implicit */unsigned int) (+(7569860560247063879LL)));
                            var_24 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) + (arr_9 [i_10] [i_1])));
                            var_25 *= ((/* implicit */unsigned int) (_Bool)1);
                            arr_38 [i_0] [i_1] [i_1] [i_5] [i_10] = ((unsigned int) (!(((/* implicit */_Bool) var_10))));
                        }
                        var_26 ^= ((/* implicit */signed char) (~(((/* implicit */int) arr_31 [i_2] [i_5] [i_5 - 1]))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 0; i_11 < 10; i_11 += 1) 
                    {
                        arr_41 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */signed char) max((((long long int) var_0)), (((/* implicit */long long int) ((((/* implicit */int) arr_30 [i_0] [i_0] [i_1] [i_11] [i_11])) + (((/* implicit */int) arr_40 [i_1] [i_0] [i_1] [i_11])))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_12 = 0; i_12 < 10; i_12 += 4) 
                        {
                            var_27 &= ((/* implicit */unsigned char) arr_0 [i_2]);
                            var_28 += ((/* implicit */short) 1496045895U);
                        }
                        for (long long int i_13 = 2; i_13 < 9; i_13 += 4) 
                        {
                            arr_46 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (((-((-(13878166780028584948ULL))))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_14 [i_1] [i_2] [i_11] [i_11]), (((/* implicit */signed char) (_Bool)1))))) + (((/* implicit */int) ((short) 4294967294U))))))));
                            var_29 = ((/* implicit */short) (((!((!(((/* implicit */_Bool) 4294967274U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */int) var_10)) <= (((/* implicit */int) arr_7 [i_13] [0LL] [i_0])))))))) : (((unsigned int) arr_11 [i_13 + 1] [i_13] [i_13 - 1] [i_1] [i_13] [i_13] [i_13]))));
                            var_30 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_17 [i_13] [i_13 + 1] [i_13 - 1] [i_13] [i_13 - 1] [i_13 + 1] [i_13])) ? (((/* implicit */long long int) arr_17 [i_13] [i_13 + 1] [i_13 - 2] [i_13] [i_13 - 1] [i_13 - 1] [i_13])) : (arr_43 [i_13 - 1] [i_13 - 2] [i_13 + 1] [i_13] [i_13 + 1] [i_13 + 1] [2U]))), (((/* implicit */long long int) (+(2236378741U))))));
                            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) min((17314672801115392378ULL), (((/* implicit */unsigned long long int) (signed char)97)))))));
                            var_32 += ((/* implicit */unsigned char) (~(-1878574040)));
                        }
                    }
                }
            } 
        } 
    } 
    var_33 ^= ((/* implicit */unsigned char) var_4);
    var_34 = var_7;
}
