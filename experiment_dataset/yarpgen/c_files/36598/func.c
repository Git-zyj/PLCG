/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36598
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
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) min(((signed char)81), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-81)) <= (((/* implicit */int) (signed char)-71)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)65))) : (var_2)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0])))))));
    }
    for (signed char i_1 = 1; i_1 < 24; i_1 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */short) arr_4 [i_1] [i_1]);
        arr_6 [i_1] = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) arr_4 [i_1] [i_1 + 1])) != (((/* implicit */int) min((arr_5 [i_1] [i_1]), (arr_5 [i_1 + 1] [i_1]))))))));
    }
    /* vectorizable */
    for (signed char i_2 = 1; i_2 < 24; i_2 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_2] [i_2])))))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [(short)6] [i_2]))) ^ (arr_7 [i_2] [i_2 + 1])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (18446744073709551604ULL)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [14ULL] [i_2])))))));
        /* LoopSeq 3 */
        for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) /* same iter space */
        {
            var_21 -= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_1 [i_2] [16U]))))));
            var_22 += ((/* implicit */int) ((arr_9 [i_2 + 1]) | (((/* implicit */long long int) ((/* implicit */int) arr_4 [(short)12] [(short)12])))));
        }
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                arr_15 [i_2] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2])) ? (arr_9 [i_2]) : (arr_9 [i_2])));
                arr_16 [i_5] [i_4] [9LL] = ((/* implicit */unsigned int) (~(arr_8 [i_2 + 1])));
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_14 [i_5] [i_2 + 1] [i_2]))));
                    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) (-(612504968)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)66))) : ((~(18446744073709551615ULL))))))));
                    var_25 = ((/* implicit */unsigned int) (~((+(arr_7 [i_4] [i_6 + 1])))));
                }
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    for (unsigned short i_8 = 4; i_8 < 23; i_8 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */int) (-((-(arr_20 [i_4] [i_4] [i_4] [i_4])))));
                            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) (+(((((/* implicit */_Bool) arr_14 [(_Bool)1] [i_5] [i_5])) ? (arr_25 [(signed char)14] [(signed char)14] [i_5] [i_5] [i_5] [i_5] [12U]) : (arr_25 [6] [i_7] [i_5] [24] [(short)12] [i_2] [6]))))))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_9 = 2; i_9 < 21; i_9 += 3) 
            {
                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [(unsigned short)24] [i_9 + 3] [i_4] [i_2 - 1] [(short)20])) ? (((/* implicit */int) arr_23 [i_9] [i_9 + 4] [i_9 + 4] [i_2 + 1] [20ULL])) : (((/* implicit */int) arr_23 [i_2] [i_9 + 4] [i_9] [i_2 + 1] [20U]))));
                var_29 -= (~(((((/* implicit */int) arr_17 [i_9] [2ULL] [i_2])) & (((/* implicit */int) arr_5 [23ULL] [i_2])))));
                var_30 = arr_22 [10LL] [(_Bool)1] [10LL];
            }
            arr_28 [i_2] [i_4] = ((/* implicit */long long int) ((arr_1 [i_2 + 1] [i_4]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_4])) && (((/* implicit */_Bool) arr_0 [i_4]))))))));
            var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_20 [i_4] [i_2 + 1] [i_2] [i_2 - 1]))));
            var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_9 [i_4]))))));
        }
        for (signed char i_10 = 0; i_10 < 25; i_10 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 1) 
                {
                    for (unsigned int i_13 = 0; i_13 < 25; i_13 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_32 [i_13] [i_12] [i_11 + 1] [i_10]))));
                            var_34 = ((/* implicit */int) (-(arr_18 [i_2 + 1] [i_10] [i_11] [i_11])));
                        }
                    } 
                } 
            } 
            arr_39 [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_2] [1] [i_10]))));
            /* LoopSeq 2 */
            for (unsigned int i_14 = 0; i_14 < 25; i_14 += 4) 
            {
                var_35 -= ((/* implicit */_Bool) arr_24 [i_2 - 1] [i_2] [i_2] [i_2] [9ULL]);
                var_36 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_38 [i_10])) ? (((/* implicit */int) arr_32 [i_10] [i_10] [i_10] [i_10])) : (arr_30 [i_2] [i_10] [8ULL]))) >> ((((~(arr_25 [(unsigned short)0] [16ULL] [12] [(_Bool)1] [i_14] [i_14] [i_14]))) - (14151678737136032849ULL)))));
                /* LoopSeq 1 */
                for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 4) 
                {
                    var_37 += (+(((/* implicit */int) arr_4 [i_14] [i_2])));
                    var_38 = ((/* implicit */short) (+((-(arr_21 [i_2] [i_2] [i_2 + 1] [i_2])))));
                    var_39 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_27 [i_2 - 1] [i_15] [i_14] [i_15]))));
                    var_40 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_15] [i_15] [i_15])) ? (((/* implicit */int) arr_27 [(signed char)21] [i_10] [i_10] [9])) : (arr_11 [i_2] [i_2] [i_2]))))));
                }
                arr_46 [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_43 [23] [i_10] [i_14])))) ? ((+(arr_43 [i_14] [i_14] [i_14]))) : ((-(arr_26 [9LL])))));
            }
            for (long long int i_16 = 0; i_16 < 25; i_16 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 2) 
                {
                    for (int i_18 = 1; i_18 < 22; i_18 += 4) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_10] [i_16] [i_10]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_18] [i_10] [i_10])) && (((/* implicit */_Bool) arr_32 [i_18] [18U] [i_16] [i_17]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_16] [i_10])))))));
                            var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) arr_11 [i_18] [i_18 - 1] [i_18 + 2]))));
                            arr_56 [i_18] [i_2] [i_17] [i_16] [i_10] [i_2 - 1] [i_2] = (!(((/* implicit */_Bool) arr_32 [i_2] [i_2 + 1] [i_2 - 1] [i_17])));
                        }
                    } 
                } 
                var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) (-(arr_11 [i_2 - 1] [i_2 + 1] [i_2 - 1]))))));
                var_44 = ((/* implicit */int) (!(arr_50 [(signed char)7] [i_2 - 1])));
            }
        }
        var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */int) arr_0 [22U])) : (((/* implicit */int) arr_55 [i_2] [14ULL] [i_2] [i_2] [i_2] [i_2]))))) ? ((-(arr_48 [i_2] [i_2] [i_2 + 1] [i_2]))) : ((-(((/* implicit */int) arr_0 [22]))))));
    }
}
