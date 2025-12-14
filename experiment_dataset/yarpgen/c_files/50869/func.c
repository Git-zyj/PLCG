/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50869
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 1] [i_1 - 1])))), (((1068215074) <= (((/* implicit */int) (unsigned short)2))))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 2; i_2 < 11; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (int i_4 = 3; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) max((arr_2 [i_0] [i_1] [i_2 + 1]), (((/* implicit */short) arr_7 [i_4] [i_3] [i_2] [i_0]))))))), ((!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_6 [i_0] [i_1 - 1] [i_2 + 1] [i_4 - 3])), (arr_9 [i_0] [i_0] [i_0] [i_0]))))))));
                                var_13 = ((/* implicit */int) max((max((((/* implicit */long long int) (+(((/* implicit */int) arr_10 [(signed char)12] [i_1 + 2] [i_2 - 2] [i_3] [11U]))))), (max((((/* implicit */long long int) arr_12 [(short)1] [i_3] [10] [i_2] [i_1 + 1] [i_1] [i_0])), (arr_9 [i_1] [(signed char)0] [i_1 - 1] [i_1]))))), (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_0] [i_1 + 2] [i_2] [i_3] [i_4])) + (((/* implicit */int) min((((/* implicit */short) arr_7 [i_0] [i_1 + 2] [i_2] [i_4 - 2])), (arr_2 [i_0] [i_2 - 2] [i_1])))))))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [(unsigned short)11] &= ((/* implicit */signed char) max((((/* implicit */int) min((arr_2 [i_4] [i_4 + 2] [i_4 - 1]), (arr_2 [i_4] [i_4 + 1] [i_4 - 2])))), (max(((+(arr_4 [i_4 + 2] [i_4 + 1]))), ((+(((/* implicit */int) (short)8750))))))));
                                var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-128)))))));
                            }
                        } 
                    } 
                    var_15 ^= ((/* implicit */unsigned char) (~(min(((~(((/* implicit */int) (unsigned char)15)))), ((~(((/* implicit */int) (signed char)(-127 - 1)))))))));
                }
                for (short i_5 = 2; i_5 < 9; i_5 += 3) 
                {
                    var_16 = min(((-(((/* implicit */int) arr_10 [i_0] [i_1] [i_5 + 3] [(unsigned short)9] [i_1 + 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_4 [i_0] [i_0]))))))));
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (((-((-(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))))) + (arr_4 [i_1] [i_5]))))));
                    var_18 = ((/* implicit */short) min((min(((-(((/* implicit */int) arr_11 [i_0] [8LL] [i_1] [i_5] [i_5])))), (arr_4 [i_5 + 1] [i_1 + 2]))), (min((((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */short) arr_8 [i_0] [i_0] [i_0] [i_0]))))), ((-(((/* implicit */int) arr_8 [i_0] [i_1] [(short)2] [i_5]))))))));
                }
                /* LoopSeq 4 */
                for (unsigned char i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [(short)1] [i_6]))))))))));
                    arr_20 [i_0] = ((/* implicit */_Bool) min(((+((~(((/* implicit */int) arr_19 [i_0] [i_0] [i_1] [i_6])))))), ((-(((/* implicit */int) arr_14 [i_1 + 2] [i_1 + 1] [i_6]))))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    var_20 *= ((/* implicit */unsigned int) (+(arr_9 [i_1 + 2] [i_1 + 2] [i_1] [i_1 + 2])));
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [7] [i_7]))) + (1413874828U)))))))));
                }
                /* vectorizable */
                for (unsigned char i_8 = 0; i_8 < 13; i_8 += 4) /* same iter space */
                {
                    var_22 |= ((/* implicit */unsigned char) (((((~(((/* implicit */int) arr_14 [i_8] [i_1] [i_0])))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_8] [i_0])))))));
                    arr_27 [i_0] = (+(((/* implicit */int) arr_19 [i_0] [i_1 + 1] [i_1 + 2] [i_1])));
                }
                for (unsigned char i_9 = 0; i_9 < 13; i_9 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_11 = 0; i_11 < 13; i_11 += 3) 
                        {
                            var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [5ULL])))))));
                            var_24 = (!(((((/* implicit */unsigned int) arr_15 [i_11] [i_10] [i_9] [8U])) != (arr_37 [i_0] [(unsigned char)12] [i_11] [i_10] [i_10] [i_0] [i_10]))));
                            var_25 = ((/* implicit */long long int) (!(arr_19 [i_1] [i_1 + 2] [i_1] [i_1 + 1])));
                            var_26 = ((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_1] [i_1 - 1] [i_1] [i_1]))));
                            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) arr_18 [(_Bool)1]))));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 3) 
                        {
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [(unsigned char)7] [i_1] [i_9] [i_10] [i_10] [i_12] [i_12])))))) ^ ((~(arr_23 [i_0] [i_9] [i_10])))))))))));
                            var_29 = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) min((arr_40 [i_12] [i_0] [i_1] [i_9] [i_10] [i_10] [i_12]), (((/* implicit */int) arr_33 [i_0] [(short)10] [i_1] [i_9] [i_10] [i_12]))))))), ((!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)50292)) >> (((((/* implicit */int) (unsigned short)65534)) - (65504))))))))));
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65523)) >> (((-921409237) + (921409248)))));
                        }
                        for (unsigned char i_13 = 1; i_13 < 10; i_13 += 3) 
                        {
                            var_31 += ((/* implicit */_Bool) (+(((/* implicit */int) max((min((arr_17 [i_10] [i_10] [i_10] [i_10]), (((/* implicit */unsigned short) arr_22 [i_0] [i_9] [i_10] [i_13 + 2])))), (min((arr_35 [i_9] [(unsigned short)0]), (((/* implicit */unsigned short) arr_10 [i_1 + 2] [i_1] [i_9] [10U] [5U])))))))));
                            var_32 = ((/* implicit */unsigned short) (!((!((!(((/* implicit */_Bool) arr_40 [i_0] [i_1 + 1] [i_9] [i_10] [i_13] [i_13 - 1] [i_0]))))))));
                        }
                        var_33 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) max((((/* implicit */int) arr_42 [i_1 - 1] [i_1 + 2] [i_1] [i_1] [i_1 + 1] [i_1 + 1])), (arr_4 [i_0] [i_1 + 1])))), ((+(min((((/* implicit */unsigned int) arr_33 [i_0] [i_9] [i_9] [(signed char)9] [i_9] [i_9])), (arr_37 [i_0] [i_1] [i_9] [i_10] [i_9] [i_0] [9])))))));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        arr_46 [i_14] [3] [i_9] [i_1] [8LL] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_1] [i_1 + 1] [6U] [i_1]))))) - (((((/* implicit */int) arr_25 [i_14] [12LL] [i_1] [i_0])) + (arr_15 [i_0] [i_1] [i_9] [i_14]))))))));
                        arr_47 [i_0] [i_1 + 1] [9ULL] [i_14] [i_0] = ((/* implicit */short) (~(min((((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_14] [i_9]))))), (((((/* implicit */int) arr_10 [i_0] [i_1 + 2] [i_9] [i_14] [(signed char)0])) * (((/* implicit */int) arr_1 [i_14] [i_0]))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_42 [i_0] [i_0] [i_1] [i_1] [i_9] [i_15]))) >= (arr_31 [i_0] [i_1] [i_9]))))));
                        var_35 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_1 + 2] [i_1 - 1] [i_1 - 1]))));
                        var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3664853733565243115LL)))))));
                        arr_51 [i_0] [1ULL] [i_0] [i_1] [i_9] [i_15] = ((/* implicit */long long int) (+((~(((/* implicit */int) arr_50 [i_0] [i_1] [i_9] [i_15]))))));
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                    {
                        var_37 = ((/* implicit */_Bool) (-((+((-(arr_34 [i_16] [i_16] [i_16] [i_16])))))));
                        arr_55 [i_0] [i_16] [i_1] [i_1 + 2] [i_9] [4] = ((/* implicit */unsigned int) arr_43 [i_16]);
                        var_38 *= ((/* implicit */signed char) (+((+(arr_4 [i_1 - 1] [i_1 + 1])))));
                    }
                    arr_56 [i_9] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)50265))));
                }
                var_39 = ((/* implicit */signed char) arr_53 [i_1] [i_1] [i_1 - 1] [i_0]);
                arr_57 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1]))))))), (max((((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_1] [i_1] [i_0] [i_1])) != (((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_1]))))), (arr_10 [i_1] [i_1] [i_1] [i_1] [i_1 + 2])))));
            }
        } 
    } 
    var_40 = ((/* implicit */_Bool) (~((-(((((/* implicit */unsigned int) var_7)) ^ (var_8)))))));
    /* LoopNest 3 */
    for (unsigned char i_17 = 0; i_17 < 19; i_17 += 2) 
    {
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            for (unsigned short i_19 = 0; i_19 < 19; i_19 += 3) 
            {
                {
                    var_41 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_61 [5])))))))), (min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)0))))), (arr_62 [i_17] [i_18] [i_18] [i_19])))));
                    var_42 = ((/* implicit */int) (+(arr_59 [i_17] [i_17])));
                    var_43 = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_60 [i_17] [i_18]))))) | ((~(max((arr_62 [i_17] [i_18] [i_19] [i_19]), (((/* implicit */long long int) arr_58 [i_18]))))))));
                    var_44 = ((/* implicit */_Bool) (+(((arr_61 [i_18]) - (arr_61 [i_17])))));
                }
            } 
        } 
    } 
    var_45 = ((var_5) - (((/* implicit */long long int) ((/* implicit */int) var_1))));
}
