/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199843
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
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) min((((((/* implicit */int) arr_0 [i_1 + 3])) | (((/* implicit */int) var_10)))), (((/* implicit */int) ((arr_1 [i_1 - 2]) == (arr_1 [i_1 - 2])))))))));
                var_20 |= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_5))))), (min((((/* implicit */unsigned long long int) var_10)), (arr_4 [i_1])))))) ? (min((((arr_4 [(unsigned short)3]) & (var_8))), (((/* implicit */unsigned long long int) arr_5 [i_1 - 3] [i_1 + 1])))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0]) : (((/* implicit */int) var_3)))), (((((/* implicit */int) arr_5 [i_0] [i_0])) / (arr_1 [i_1]))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_21 ^= ((/* implicit */short) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 2; i_4 < 8; i_4 += 4) 
                        {
                            arr_15 [i_4] [i_4] [i_4 + 3] [i_4] [i_2] [i_4] = ((/* implicit */signed char) var_8);
                            arr_16 [i_2] [i_4] [i_4 + 1] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_3] [i_3] [(short)7] [i_3])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [8] [8] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)28714)) ? (-818453979) : (((/* implicit */int) (short)-28727)))))));
                        }
                        for (unsigned long long int i_5 = 3; i_5 < 9; i_5 += 1) 
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_9);
                            arr_21 [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) - (((/* implicit */int) arr_0 [i_1 + 3]))));
                        }
                    }
                    for (signed char i_6 = 2; i_6 < 10; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_22 = var_4;
                            var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1 + 3] [8] [i_1 - 1] [i_1] [i_1 + 3])) ? (arr_12 [i_1 + 1] [(_Bool)1] [i_1 - 3] [i_1] [i_1 - 3]) : (((/* implicit */int) arr_8 [i_1 + 2] [i_1 + 2] [i_1 + 2]))));
                            arr_27 [i_0] [i_0] [i_2] [i_0] [4ULL] = var_11;
                        }
                        arr_28 [i_0] [i_2] [i_0] [i_0] = arr_7 [i_1 - 1] [i_1 - 3] [i_2];
                    }
                    arr_29 [i_2] [i_2] = ((/* implicit */unsigned short) ((((arr_12 [8] [i_2] [i_2] [i_2] [i_2]) ^ (((/* implicit */int) arr_5 [i_0] [i_0])))) + (arr_1 [i_1 + 3])));
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (short i_9 = 0; i_9 < 11; i_9 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (var_2)));
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 818453978)) ? (-1601196441) : (-41993001)));
                            arr_35 [i_2] [i_2] [1U] [i_2] [i_2] [i_2] [(_Bool)1] = ((2220268163U) - (((/* implicit */unsigned int) -818453979)));
                            var_26 = ((/* implicit */int) min((var_26), (((((/* implicit */int) arr_11 [i_1] [i_1 + 1] [i_1])) ^ (((/* implicit */int) arr_11 [i_1] [i_1 - 3] [i_1 - 3]))))));
                            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) ? (var_2) : (var_17)));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1]))) : (arr_32 [i_10])))) ? (((/* implicit */int) arr_34 [i_1 + 3] [i_1 + 2] [i_1 - 3] [i_1 + 2])) : (arr_1 [i_1 + 1])));
                            arr_38 [i_2] [i_10] = ((/* implicit */short) ((var_3) ? (((/* implicit */int) arr_5 [i_1 - 3] [i_1 - 2])) : (var_7)));
                            var_29 &= ((((/* implicit */_Bool) (short)-10429)) ? (18281378718335059116ULL) : (177243967001114577ULL));
                        }
                        for (signed char i_11 = 2; i_11 < 10; i_11 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1 + 1] [i_1 - 3] [i_2])) ? (((/* implicit */int) arr_6 [i_1] [i_1 - 1] [i_1 - 1] [i_2])) : (((/* implicit */int) arr_6 [1ULL] [i_1 + 2] [i_1 - 2] [i_2]))));
                            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_18 [i_1] [i_1] [i_1 + 1] [i_1 - 3] [(signed char)1])));
                        }
                        arr_41 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_36 [i_1] [i_1] [i_1] [i_1] [i_1])));
                    }
                    arr_42 [i_2] [i_1] [i_1 + 1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1] [i_2])) ? (((/* implicit */int) arr_6 [i_1] [i_1 + 2] [i_1] [i_2])) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_2]))));
                    var_32 = ((/* implicit */short) ((var_0) ? (((/* implicit */int) (short)-22277)) : (((/* implicit */int) arr_19 [i_1 - 3] [i_1 + 3] [i_1 + 3] [i_1 + 1] [i_1 - 3]))));
                }
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) min((1645867368), (((/* implicit */int) (signed char)61))))) - (((((/* implicit */_Bool) var_13)) ? (var_2) : (var_12))))), (((/* implicit */unsigned int) var_14))));
}
