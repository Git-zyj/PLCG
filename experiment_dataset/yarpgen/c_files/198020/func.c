/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198020
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
    var_19 = ((/* implicit */long long int) var_6);
    var_20 = ((/* implicit */int) ((-5192489515076794603LL) / ((-9223372036854775807LL - 1LL))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) != (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) var_9)))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (long long int i_3 = 1; i_3 < 19; i_3 += 4) 
                {
                    {
                        arr_11 [i_3] [14LL] [i_2] [i_2] [i_1 + 1] [i_0] = ((/* implicit */long long int) var_4);
                        var_22 = ((/* implicit */signed char) (((-9223372036854775807LL - 1LL)) | (9223372036854775807LL)));
                        arr_12 [i_0] [i_1 + 1] [i_1 + 1] = ((/* implicit */unsigned char) arr_9 [i_3 - 1] [i_1 + 1] [i_1 + 1] [i_0]);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [(signed char)16])) ? (arr_14 [i_0] [i_4]) : (arr_4 [0ULL] [0ULL] [5]))) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) arr_0 [(_Bool)1] [(short)19]))));
            var_25 -= ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-98))) <= (0U))) ? (((/* implicit */int) arr_1 [i_4])) : (((((-541343425) + (2147483647))) >> (((((/* implicit */int) (unsigned short)44217)) - (44199)))))));
            arr_16 [19LL] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_4] [i_4])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) * (arr_2 [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((4294967289U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44214)))))))));
        }
        arr_17 [i_0] = ((/* implicit */long long int) var_8);
        var_26 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(unsigned char)18])) ? (arr_15 [13LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [4ULL]))) : (arr_13 [i_0] [(short)9]))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))));
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_6 = 0; i_6 < 21; i_6 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                for (short i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    {
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((((/* implicit */_Bool) arr_1 [i_6])) ? (((((/* implicit */_Bool) arr_9 [i_8] [i_7] [(short)13] [(signed char)15])) ? (((/* implicit */unsigned long long int) arr_4 [(unsigned char)3] [(unsigned char)3] [i_8])) : (arr_15 [i_5]))) : (arr_0 [i_7] [i_8])))));
                        arr_28 [i_6] [i_7] [i_6] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) ^ (((((/* implicit */_Bool) arr_26 [i_8])) ? (((/* implicit */unsigned long long int) var_0)) : (var_14)))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 21; i_9 += 3) 
            {
                for (int i_10 = 0; i_10 < 21; i_10 += 1) 
                {
                    {
                        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_5] [i_5] [i_9])) || (((/* implicit */_Bool) -541343425)))))) : (arr_18 [i_9]))))));
                        var_29 += ((/* implicit */unsigned short) ((arr_9 [i_10] [2LL] [i_10] [i_10]) >= (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5] [(unsigned char)18])))));
                    }
                } 
            } 
        }
        for (long long int i_11 = 0; i_11 < 21; i_11 += 3) /* same iter space */
        {
            arr_38 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_2) ^ (((/* implicit */int) arr_33 [i_5] [i_5]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_5] [i_5] [i_11])) ? (((/* implicit */int) var_7)) : (var_2))))));
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 3) 
            {
                for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 4) 
                {
                    {
                        var_30 -= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_6 [i_5] [i_11] [15U]) + (arr_24 [i_5] [i_5] [i_5] [i_5] [(short)3] [i_5])))) ? (((/* implicit */int) ((((/* implicit */int) arr_19 [i_5])) < (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_33 [i_5] [i_5])) : (((/* implicit */int) arr_31 [i_13] [i_12] [(unsigned char)19] [i_11] [i_5] [i_5]))))));
                        var_31 *= ((/* implicit */signed char) var_1);
                        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) arr_14 [i_5] [i_5]))));
                        var_33 = ((/* implicit */signed char) ((arr_6 [i_5] [i_5] [5U]) >> (((arr_14 [(signed char)9] [i_11]) + (1608023509662277240LL)))));
                    }
                } 
            } 
        }
        arr_44 [i_5] = ((/* implicit */int) arr_43 [15] [15]);
        var_34 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_32 [i_5] [i_5] [i_5] [(short)16] [i_5])) != (((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_5] [i_5])) || (((/* implicit */_Bool) var_6)))))));
        var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) arr_34 [(unsigned char)16] [16LL] [i_5]))));
    }
    /* vectorizable */
    for (unsigned short i_14 = 0; i_14 < 21; i_14 += 4) /* same iter space */
    {
        var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) arr_40 [i_14] [i_14] [i_14]))));
        arr_47 [i_14] [i_14] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)30406)) ? (6U) : (((/* implicit */unsigned int) -1))))) ? (((((/* implicit */_Bool) arr_36 [i_14] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]))) : (arr_18 [i_14]))) : (((/* implicit */long long int) ((((/* implicit */int) var_7)) | (((/* implicit */int) arr_37 [16] [i_14] [i_14]))))));
        arr_48 [i_14] = ((((/* implicit */_Bool) arr_34 [14] [i_14] [i_14])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) << (((((/* implicit */int) arr_19 [i_14])) - (22731)))))) : (((((/* implicit */_Bool) arr_34 [i_14] [i_14] [i_14])) ? (arr_0 [i_14] [(unsigned char)16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))));
        var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) arr_22 [i_14] [1LL] [i_14]))));
    }
}
