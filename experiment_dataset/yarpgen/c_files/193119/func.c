/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193119
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
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_7 [23ULL] [i_2] [i_1] [i_0] = arr_2 [i_0] [i_2 + 1];
                    arr_8 [i_2] = ((/* implicit */long long int) ((((/* implicit */int) ((arr_6 [8LL] [i_1] [i_0]) && (((/* implicit */_Bool) var_4))))) > (((((/* implicit */_Bool) arr_3 [i_2] [i_2 - 1] [i_2 + 1])) ? (((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 1] [i_2])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) && (((/* implicit */_Bool) var_2)))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
    {
        arr_13 [i_3] = ((/* implicit */int) ((((((((/* implicit */_Bool) var_5)) ? (arr_10 [i_3]) : (arr_10 [i_3]))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3])) || (((/* implicit */_Bool) arr_10 [i_3])))))));
        var_15 ^= ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_6)))))) - (((arr_12 [i_3]) ^ (arr_11 [i_3]))))) % (((arr_12 [i_3]) % (((arr_11 [i_3]) & (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3] [i_3])))))))));
    }
    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
    {
        var_16 ^= var_1;
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            var_17 = ((/* implicit */short) arr_2 [i_4] [i_4]);
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 2; i_6 < 21; i_6 += 3) 
            {
                arr_22 [i_4] [i_5] [i_6] [i_4] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)-48)) | (((/* implicit */int) (signed char)41))))) % (((((arr_2 [10LL] [10LL]) + (9223372036854775807LL))) >> (((arr_17 [0LL] [i_5] [i_6]) - (1708636824U)))))));
                var_18 = ((((/* implicit */long long int) var_11)) | (((var_5) | (((/* implicit */long long int) ((/* implicit */int) var_0))))));
            }
            arr_23 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) 2112496440U)) && (((/* implicit */_Bool) 2655969492U))));
            arr_24 [i_5] [i_5] = ((/* implicit */long long int) var_14);
        }
        /* vectorizable */
        for (long long int i_7 = 4; i_7 < 22; i_7 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((arr_6 [i_4] [i_7 - 2] [i_4]) && (arr_6 [i_4] [i_7 - 4] [i_7 - 1]))))));
            /* LoopSeq 1 */
            for (long long int i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    arr_36 [i_7] [i_7] [i_8] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_7 - 3] [i_7 + 1] [i_7 + 1])) ? (((var_6) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4] [i_7]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_29 [i_9] [6LL] [6LL] [i_4])) < (((/* implicit */int) var_13))))))));
                    var_20 = ((/* implicit */signed char) arr_9 [i_7 + 1]);
                    var_21 = ((/* implicit */long long int) ((((var_13) ? (((/* implicit */int) var_2)) : (arr_19 [i_8] [i_7]))) << (((arr_19 [i_4] [i_7 - 4]) - (2105215936)))));
                    var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_7)) ? (var_6) : (arr_10 [i_4]))) & (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)26539)) ^ (((/* implicit */int) (unsigned short)46924)))))));
                    var_23 = ((/* implicit */long long int) ((((/* implicit */int) var_2)) < (((((/* implicit */_Bool) 2112496440U)) ? (((/* implicit */int) (short)-28641)) : (((/* implicit */int) (short)-4659))))));
                }
                var_24 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */long long int) arr_25 [i_8] [i_8])) : (var_5))) - (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [13ULL] [i_4] [i_8]))) : (var_6)))));
                arr_37 [i_7] [i_7] [(signed char)2] = arr_31 [i_8] [i_7] [i_8];
                var_25 = ((/* implicit */int) arr_4 [i_4]);
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 23; i_10 += 2) 
                {
                    for (unsigned int i_11 = 4; i_11 < 21; i_11 += 1) 
                    {
                        {
                            var_26 = (i_7 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_11 - 2] [i_11] [7ULL] [i_7])) >> (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_7)) : (arr_11 [i_4]))) - (1956239581LL)))))) : (((/* implicit */_Bool) ((((((/* implicit */int) arr_33 [i_11 - 2] [i_11] [7ULL] [i_7])) + (2147483647))) >> (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_7)) : (arr_11 [i_4]))) - (1956239581LL))))));
                            arr_42 [i_11] [i_7] [i_8] [i_7] = ((/* implicit */short) var_8);
                            arr_43 [i_4] [i_7] [i_7] [i_7] [i_10] [i_11 - 3] = ((/* implicit */_Bool) arr_38 [i_4] [i_7] [i_8] [i_10] [i_11]);
                        }
                    } 
                } 
            }
            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_1) % (arr_21 [i_4])))) ? (((((/* implicit */long long int) var_9)) % (var_1))) : (((/* implicit */long long int) arr_17 [i_4] [i_7 - 4] [i_7]))));
            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) var_2))));
        }
    }
    var_29 = var_10;
}
