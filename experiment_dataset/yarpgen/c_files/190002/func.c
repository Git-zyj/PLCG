/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190002
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
    var_12 -= ((/* implicit */signed char) max((((/* implicit */int) var_10)), (((((/* implicit */int) var_10)) & (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_13 = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_1])) != (((((/* implicit */int) arr_0 [i_0 - 1])) * (((/* implicit */int) arr_5 [i_0]))))));
            var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0 - 2])) & (((/* implicit */int) arr_0 [i_0 - 2]))));
            /* LoopSeq 1 */
            for (short i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                arr_12 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)33)) == (((/* implicit */int) (signed char)-17))));
                var_15 -= ((/* implicit */signed char) arr_8 [i_0] [i_0] [i_0] [(signed char)0]);
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) arr_3 [(unsigned char)6]))));
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2 + 2] [i_0 - 2])) || (((/* implicit */_Bool) arr_1 [i_0 + 1]))));
                            var_18 = arr_13 [(signed char)19];
                            var_19 -= arr_11 [i_0] [(short)19];
                        }
                    } 
                } 
            }
            arr_17 [i_0] |= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)88)) * (((/* implicit */int) (unsigned char)33))));
        }
        /* vectorizable */
        for (unsigned char i_5 = 1; i_5 < 20; i_5 += 3) 
        {
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_0 - 2] [i_5 - 1])) ? (((/* implicit */int) arr_11 [i_0 - 2] [i_5 - 1])) : (((/* implicit */int) arr_11 [i_0 - 2] [i_5 - 1]))));
            arr_21 [(signed char)12] [i_5 - 1] = ((/* implicit */short) ((((/* implicit */int) (short)-32758)) - (((/* implicit */int) (short)32613))));
            var_21 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 - 2])) * (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))))) <= (((((/* implicit */_Bool) arr_10 [(unsigned char)18] [i_5 - 1] [(signed char)14] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 2]))) : (arr_3 [i_0])))));
        }
        var_22 = ((/* implicit */unsigned char) max((max((min((arr_14 [i_0 + 1] [(unsigned char)1] [i_0 - 1] [i_0 - 1] [i_0]), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0 - 1] [i_0] [(unsigned char)20])))), (((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(signed char)20]))) : (arr_3 [i_0]))))), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (signed char i_6 = 2; i_6 < 20; i_6 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(signed char)0] [(signed char)0] [(signed char)0] [i_6 - 1])) ? (((/* implicit */int) arr_7 [i_6 - 1] [i_6] [i_6])) : (((/* implicit */int) arr_19 [i_6] [i_6] [i_6 - 2]))))) ? (((((/* implicit */_Bool) (unsigned char)27)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)189))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_6] [i_6 - 2] [i_6] [i_6]))))))));
        var_24 ^= ((/* implicit */signed char) ((((arr_18 [i_6 - 1] [i_6] [i_6]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_6] [i_6]))))) & (((((/* implicit */_Bool) arr_10 [i_6] [(unsigned char)7] [i_6] [i_6])) ? (arr_18 [(unsigned char)15] [i_6] [(unsigned char)15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_6] [i_6])))))));
    }
    for (signed char i_7 = 2; i_7 < 20; i_7 += 4) /* same iter space */
    {
        arr_26 [i_7 + 1] = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)87)) >= (((/* implicit */int) (unsigned char)0)))) ? (((((/* implicit */_Bool) arr_25 [i_7 + 1] [i_7])) ? (arr_25 [i_7 - 2] [3ULL]) : (arr_25 [i_7 + 1] [i_7 + 1]))) : (min((arr_25 [i_7 + 1] [(short)6]), (arr_25 [i_7 + 1] [i_7])))));
        /* LoopSeq 1 */
        for (short i_8 = 0; i_8 < 21; i_8 += 3) 
        {
            var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_3 [i_7]), (((/* implicit */unsigned long long int) arr_1 [(signed char)16]))))) ? (((((/* implicit */_Bool) arr_19 [i_7] [i_7] [i_8])) ? (arr_3 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_8]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_7] [i_8])) ? (((/* implicit */int) arr_23 [i_7])) : (((/* implicit */int) arr_1 [(signed char)11])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)203)) ? (878060493017419307ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-13)))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_5 [i_7])), (arr_16 [i_7 - 2] [i_7 - 1] [i_7 - 1] [i_7] [i_7])))) : (((/* implicit */int) min((arr_1 [(signed char)17]), (arr_19 [i_7] [i_8] [i_7]))))))) : (arr_30 [i_7] [i_8] [i_8]));
            arr_31 [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_4 [i_7 - 1])), (arr_30 [i_8] [i_8] [(signed char)11]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_7])) || (((/* implicit */_Bool) arr_10 [i_7 + 1] [(unsigned char)11] [(unsigned char)11] [i_8])))))))) ? (max((((/* implicit */unsigned long long int) arr_23 [i_7 - 2])), (min((arr_14 [7ULL] [i_8] [i_8] [9ULL] [i_8]), (((/* implicit */unsigned long long int) arr_8 [i_7 - 2] [i_7 - 2] [(short)14] [i_8])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_24 [i_7 - 1])) > (((/* implicit */int) arr_1 [(unsigned char)2]))))))));
            var_26 *= ((((((/* implicit */_Bool) arr_15 [i_7 - 1])) ? (min((arr_28 [i_7] [i_7]), (((/* implicit */unsigned long long int) arr_6 [i_7] [i_8] [5ULL])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_7] [i_7] [i_7] [i_8]))))) >> (((max((((/* implicit */unsigned long long int) arr_2 [i_7 - 2] [i_7 - 2])), (arr_30 [i_7 - 1] [i_7 + 1] [i_7 - 1]))) - (17601905994070167932ULL))));
            var_27 += min((min((arr_23 [i_7 + 1]), (((/* implicit */short) arr_5 [i_7 + 1])))), (((/* implicit */short) arr_5 [i_7 + 1])));
        }
    }
}
