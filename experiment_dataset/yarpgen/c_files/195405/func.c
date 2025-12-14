/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195405
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
    var_19 = ((/* implicit */signed char) var_15);
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (-((~(((long long int) var_6)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        arr_3 [(unsigned short)8] = ((/* implicit */signed char) ((1025951646) == (((/* implicit */int) arr_1 [i_0 - 2]))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_21 = ((/* implicit */unsigned char) arr_0 [i_0 + 3]);
            var_22 = ((/* implicit */unsigned char) ((arr_2 [i_0 + 1]) || (arr_2 [i_0 + 1])));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                arr_8 [i_2] [i_2] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_5 [(short)1] [i_2])) - (7738658705927842852ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_7 [i_2 - 1] [i_2] [i_2 - 1] [(unsigned char)6]) <= (arr_6 [i_0] [i_0] [i_0] [i_2]))))) : (arr_5 [i_2 + 2] [i_0 + 3]));
                /* LoopSeq 4 */
                for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 2) 
                {
                    arr_12 [i_1] [i_1] = ((/* implicit */unsigned int) ((int) arr_10 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]));
                    arr_13 [i_1] = ((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_1] [i_3 + 2]);
                    arr_14 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((arr_10 [i_0 + 1] [i_2] [7ULL] [i_2 - 1]) << (((arr_10 [i_0 + 1] [i_2] [i_2] [i_2 - 1]) - (2070233519126558196ULL)))));
                }
                for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    arr_18 [i_0 - 1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((((arr_10 [i_0 + 1] [i_1] [i_2 + 2] [i_4]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247))))) ? (((/* implicit */int) arr_1 [i_0 + 3])) : (((((/* implicit */int) arr_15 [i_0] [i_1] [i_0 - 2] [i_0 + 2])) * (((/* implicit */int) arr_1 [i_0]))))));
                    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_1 [i_0])) == (arr_16 [23U] [i_1] [i_2 + 1] [i_4])))))));
                }
                for (long long int i_5 = 3; i_5 < 24; i_5 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        var_24 = ((/* implicit */_Bool) arr_15 [i_2] [i_1] [i_2] [i_2 - 1]);
                        var_25 ^= ((/* implicit */short) (!(((/* implicit */_Bool) arr_24 [i_0]))));
                    }
                    var_26 ^= ((/* implicit */signed char) arr_16 [i_0] [i_1] [14] [i_5]);
                    var_27 -= ((/* implicit */long long int) (-(((/* implicit */int) arr_19 [i_0 + 2] [i_1] [i_1]))));
                }
                for (int i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    var_28 = ((/* implicit */unsigned long long int) arr_2 [i_0 + 3]);
                    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_2 + 2] [i_0 - 1])) ? (((((/* implicit */int) arr_4 [i_0])) / (arr_0 [i_0]))) : (((/* implicit */int) ((signed char) arr_2 [i_0 + 1])))));
                    var_30 = ((/* implicit */signed char) ((((/* implicit */int) arr_21 [i_1] [i_0 - 1] [i_0 - 1] [i_1])) + (((/* implicit */int) arr_1 [i_0 + 3]))));
                    var_31 ^= ((/* implicit */int) ((signed char) arr_15 [i_0 + 2] [i_0] [i_2] [i_2 - 1]));
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 2])));
                }
                var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_16 [i_2] [0] [i_2 + 2] [i_2])) + (arr_10 [i_0] [i_0] [i_0] [i_0])))) ? (arr_10 [i_0 - 1] [i_1] [i_2] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)38))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_8 = 1; i_8 < 24; i_8 += 3) 
                {
                    arr_33 [i_0] [i_0] [i_1] [i_2] [i_8] = ((/* implicit */short) arr_29 [i_0 + 1] [i_0] [i_0 + 2] [i_2 - 1]);
                    var_34 *= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_2 - 1] [i_2 - 1] [i_2 + 1]))) / (arr_17 [i_8 + 1] [i_8] [(signed char)5] [i_8] [i_8] [i_8])));
                }
                for (short i_9 = 0; i_9 < 25; i_9 += 2) 
                {
                    var_35 = ((/* implicit */short) arr_7 [i_9] [i_2] [i_1] [i_0]);
                    arr_36 [i_0] [i_0] [i_1] [i_2 + 2] [i_2 + 2] [i_9] = ((/* implicit */unsigned int) ((unsigned long long int) arr_23 [i_1]));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_36 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_0 + 3] [i_2 + 1] [i_2] [i_2 - 1])) && (((/* implicit */_Bool) arr_10 [i_0 + 3] [i_0 - 1] [i_0] [i_2 - 1]))));
                    arr_39 [i_0] [(unsigned short)24] [i_2 - 1] [i_2] &= ((/* implicit */signed char) ((arr_17 [i_2 - 1] [i_1] [i_1] [i_10] [i_0 - 1] [i_10]) / (((long long int) arr_0 [i_2 + 2]))));
                }
            }
            var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) arr_6 [i_1] [i_1] [i_1] [i_0]))));
        }
        for (short i_11 = 2; i_11 < 24; i_11 += 1) 
        {
            arr_42 [i_11] = ((/* implicit */unsigned char) ((974728120U) >> (((((/* implicit */int) arr_11 [i_0 + 1] [i_0 - 2] [i_0 + 3] [i_11 - 2])) - (59211)))));
            arr_43 [i_0] [i_11] [i_11 - 1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_21 [i_11] [i_11] [i_11] [i_11])) != (((/* implicit */int) arr_35 [i_0] [i_11] [i_0] [i_11])))))) - (3320239176U)));
            arr_44 [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) arr_31 [i_11] [i_11] [i_0] [i_0]);
            var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_38 [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)14424)))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_34 [i_0] [i_0 + 2] [i_11] [i_11]))) & (arr_17 [i_0 + 1] [i_11 - 2] [i_0 + 1] [i_0 + 2] [i_0 + 1] [(unsigned short)10])))));
        }
        for (signed char i_12 = 0; i_12 < 25; i_12 += 3) 
        {
            var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) ((((/* implicit */int) arr_32 [i_0] [i_12] [i_12])) >> (((((((/* implicit */_Bool) arr_10 [i_0] [i_12] [i_0] [i_0])) ? (((/* implicit */int) arr_38 [i_0])) : (((/* implicit */int) arr_26 [i_0])))) - (38210))))))));
            var_40 -= ((/* implicit */short) arr_17 [i_0] [(unsigned char)4] [i_0 - 1] [i_0 - 2] [i_12] [i_12]);
        }
    }
}
