/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228731
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        var_16 *= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_0 [0LL])), (arr_2 [i_0])));
        var_17 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_1)), (-2101209064)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_0] [5U]), (((/* implicit */short) var_9)))))) : (max((var_10), (((/* implicit */unsigned int) var_13)))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            arr_8 [i_1] [(unsigned char)12] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_1]))));
            var_18 -= (!(((/* implicit */_Bool) 1093334235U)));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    {
                        var_19 = (!(((/* implicit */_Bool) arr_7 [i_4] [i_1] [i_1])));
                        arr_14 [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_1] [i_3] [i_4]))));
                        var_20 = ((/* implicit */int) var_11);
                        var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_2] [i_1] [6]))));
                    }
                } 
            } 
            var_22 = ((arr_12 [i_1] [i_1] [(unsigned char)7] [i_2]) ? (((/* implicit */int) arr_12 [i_2] [i_2] [i_1] [i_2])) : (((/* implicit */int) arr_12 [i_2] [6] [i_1] [i_2])));
            arr_15 [i_1] = ((/* implicit */unsigned char) var_6);
        }
        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            arr_19 [i_5] [i_1] [i_5] = ((/* implicit */signed char) var_6);
            var_23 &= ((/* implicit */short) (!(arr_11 [i_1] [9LL] [i_5] [i_5] [i_5])));
            var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
        }
        for (signed char i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            arr_22 [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_13 [i_1] [(short)16] [i_1] [i_6]))));
            arr_23 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_6])) ? (arr_17 [i_1] [i_6]) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_9 [i_6] [i_6] [i_6] [i_6])) : (((/* implicit */int) var_8))))));
        }
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_21 [i_1] [i_1])))))));
    }
    for (long long int i_7 = 0; i_7 < 17; i_7 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
        var_27 += (!(((/* implicit */_Bool) min((arr_5 [i_7] [i_7]), (arr_5 [i_7] [i_7])))));
        var_28 = var_3;
    }
    for (unsigned char i_8 = 1; i_8 < 8; i_8 += 3) 
    {
        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (arr_4 [i_8 + 1] [i_8 - 1]) : (min((((/* implicit */long long int) arr_9 [i_8] [i_8 + 2] [i_8 - 1] [i_8])), (arr_4 [i_8 + 2] [i_8 + 2])))));
        /* LoopSeq 1 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_25 [i_8 - 1]), (arr_25 [i_8 + 2])))))))));
            var_31 = ((/* implicit */signed char) arr_2 [i_8]);
        }
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 10; i_10 += 1) 
        {
            for (int i_11 = 0; i_11 < 10; i_11 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_12 = 0; i_12 < 10; i_12 += 3) 
                    {
                        var_32 ^= ((/* implicit */short) arr_0 [(_Bool)1]);
                        arr_37 [i_8] [i_8] [i_11] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_8] [i_8 + 1])))))));
                    }
                    /* vectorizable */
                    for (signed char i_13 = 1; i_13 < 7; i_13 += 2) /* same iter space */
                    {
                        var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_8 - 1]))));
                        arr_42 [i_8] [i_10] [i_10] [9] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_0))))));
                        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) arr_30 [i_13 - 1] [i_8 - 1])) ? (((/* implicit */int) arr_30 [i_13 - 1] [i_8 + 2])) : (((/* implicit */int) arr_30 [i_13 + 2] [i_8 + 1]))));
                        var_35 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
                        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_35 [i_13] [i_13 - 1] [i_13] [i_13 + 2]))));
                    }
                    for (signed char i_14 = 1; i_14 < 7; i_14 += 2) /* same iter space */
                    {
                        var_37 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_43 [(signed char)4] [i_8] [i_14] [(signed char)5] [i_8] [(short)1])))))));
                        arr_45 [i_14] [i_14] [i_8] [i_8] [3U] [3U] = ((/* implicit */long long int) max(((!(((/* implicit */_Bool) arr_13 [i_8] [i_8 - 1] [i_14 + 1] [i_14 + 1])))), ((!(((/* implicit */_Bool) max((var_12), (((/* implicit */long long int) arr_11 [i_8] [i_8] [15LL] [i_11] [i_14])))))))));
                        var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) min((var_9), ((!(((/* implicit */_Bool) (signed char)115)))))))));
                        var_39 &= ((/* implicit */int) max((((/* implicit */long long int) arr_18 [i_14 + 3] [i_14 + 1] [(_Bool)1])), (var_6)));
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_15 = 0; i_15 < 10; i_15 += 3) 
                    {
                        var_40 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_10] [i_15])) ? ((-(arr_13 [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 + 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [(signed char)5])))));
                        var_41 = ((/* implicit */long long int) max((var_41), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_5 [i_8] [i_10]), (((/* implicit */unsigned short) var_7)))))))), (min((((/* implicit */long long int) var_0)), (arr_4 [(unsigned char)5] [i_8 + 1])))))));
                    }
                    /* vectorizable */
                    for (signed char i_16 = 0; i_16 < 10; i_16 += 2) 
                    {
                        var_42 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_25 [i_8 + 2])) ? (((/* implicit */int) arr_25 [i_8 - 1])) : (((/* implicit */int) arr_25 [i_8 + 2]))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_17 = 1; i_17 < 8; i_17 += 3) 
                        {
                            var_43 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))));
                            var_44 *= arr_52 [i_8] [i_8] [i_8] [3U] [i_8];
                            var_45 = ((/* implicit */int) (!(var_9)));
                        }
                        for (unsigned int i_18 = 2; i_18 < 9; i_18 += 1) 
                        {
                            var_46 = ((/* implicit */int) min((var_46), (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_18 - 1] [2] [i_11] [i_8 + 1])))))));
                            var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) arr_10 [i_16] [i_18 + 1] [14ULL] [i_8 - 1]))));
                            var_48 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_18 + 1] [i_8 + 1]))));
                        }
                    }
                    for (long long int i_19 = 2; i_19 < 9; i_19 += 1) 
                    {
                        var_49 -= ((/* implicit */_Bool) (~((~(var_10)))));
                        var_50 = ((/* implicit */unsigned short) var_13);
                        var_51 = ((/* implicit */signed char) var_0);
                    }
                    arr_62 [i_8] [i_10] [i_11] = ((/* implicit */_Bool) max(((unsigned short)29845), (((/* implicit */unsigned short) (unsigned char)48))));
                    var_52 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) min((var_14), (var_13))))))));
                }
            } 
        } 
        var_53 = ((/* implicit */short) max((min((arr_43 [i_8 + 2] [i_8] [i_8 - 1] [(_Bool)0] [i_8] [(_Bool)0]), (arr_29 [i_8 - 1] [i_8 - 1]))), (max((arr_29 [i_8 + 1] [i_8 - 1]), (arr_29 [i_8 + 2] [i_8 + 1])))));
    }
    var_54 = max((((/* implicit */unsigned int) var_15)), (var_10));
    var_55 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
    var_56 &= ((/* implicit */signed char) var_12);
}
