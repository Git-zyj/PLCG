/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24425
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
    var_11 = ((/* implicit */int) var_0);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 3; i_2 < 11; i_2 += 1) 
                {
                    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)32)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 8; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((unsigned short) (!(((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_12 [i_0] [i_3] [i_2] [i_2] [i_4])))))))))));
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */long long int) arr_7 [i_2 - 1] [i_4] [i_2] [i_3] [i_0] [(unsigned short)11])), (((long long int) var_3)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
                                arr_13 [i_0] [i_1] [i_0] [i_3] [i_4] [i_2] = ((/* implicit */unsigned int) min(((-((~(var_0))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0] [i_0]))) ? (((/* implicit */int) ((unsigned short) (signed char)7))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_2] [i_3] [(signed char)4]))))))))));
                                arr_14 [i_4] [i_4] [(unsigned short)10] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_2)) <= (var_9))) ? (((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2 + 1] [i_3])) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_3] [i_4])) == (((/* implicit */int) (signed char)32))))) : (-724639965))) : (((/* implicit */int) (short)-32760))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_5 = 3; i_5 < 8; i_5 += 2) 
                    {
                        arr_18 [i_1] [i_5] = ((/* implicit */unsigned int) var_10);
                        arr_19 [i_0] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) arr_12 [i_1] [i_1] [i_2] [i_2] [i_1])))));
                        arr_20 [(_Bool)1] [i_1] [i_2] [i_0] |= ((/* implicit */short) (+(((var_5) << (((((/* implicit */int) arr_7 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) - (72)))))));
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            var_15 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_1 + 1] [(_Bool)1] [i_5 + 4] [i_6] [i_6])) / (((/* implicit */int) arr_21 [i_1 + 1] [i_2] [i_5] [(signed char)5] [i_5]))));
                            var_16 *= ((/* implicit */signed char) (~((~(arr_16 [i_0] [(unsigned char)6] [i_2] [i_2])))));
                            arr_23 [i_0] [i_0] [i_1] [i_1] [i_0] = (-(((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_5] [i_5] [i_5] [i_0])) ? (-2147483640) : (((/* implicit */int) arr_15 [i_1])))));
                        }
                        for (unsigned long long int i_7 = 2; i_7 < 11; i_7 += 2) 
                        {
                            var_17 = ((/* implicit */_Bool) ((long long int) arr_9 [i_2 - 3] [i_2 - 3] [i_2 - 3] [i_5 - 3] [i_7]));
                            arr_26 [i_7] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (((-(((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_5] [i_1] [i_1])))) == (((/* implicit */int) arr_17 [i_1 - 1] [i_5] [i_5 + 2] [i_5 + 2] [i_7 - 1]))));
                            arr_27 [i_1] [i_1] [i_2] [i_5] [i_2] = ((/* implicit */unsigned long long int) (+(arr_5 [i_1] [i_2] [i_2 + 1] [i_7 + 1])));
                        }
                        arr_28 [i_1] = arr_2 [i_0] [i_0];
                    }
                    for (int i_8 = 3; i_8 < 9; i_8 += 2) 
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0] [i_1 + 1]))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_30 [i_1] [i_1] [i_1] [i_8])), (((((/* implicit */int) (signed char)32)) & (((/* implicit */int) (short)-32760))))))) : (max((((/* implicit */unsigned int) var_4)), (arr_5 [i_8] [i_8] [i_8 - 2] [i_8])))));
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 2; i_9 < 8; i_9 += 2) 
                        {
                            arr_33 [i_0] [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) (!((_Bool)1)));
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) max(((-(((((/* implicit */_Bool) -724639965)) ? (arr_25 [i_8] [(short)6] [(unsigned short)0] [i_8] [i_0]) : (((/* implicit */unsigned int) (-2147483647 - 1))))))), (((/* implicit */unsigned int) arr_6 [i_0] [i_2] [i_2] [i_9])))))));
                            arr_34 [i_1] = arr_1 [i_1 - 1] [i_8];
                        }
                        var_20 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_1] [i_8 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_21 [i_0] [i_1] [i_2 + 1] [i_8 + 2] [i_1]))))), (var_0)));
                    }
                    for (signed char i_10 = 0; i_10 < 12; i_10 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_1] [i_2] [i_2] [0LL] [i_1] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_5)))) ? (((var_10) * (((/* implicit */int) var_7)))) : (((((/* implicit */int) arr_35 [i_1] [(_Bool)1] [i_10])) / (((/* implicit */int) arr_35 [i_1] [i_2] [i_10])))))), (((/* implicit */int) ((((/* implicit */int) arr_15 [i_1])) > (((/* implicit */int) (!(((/* implicit */_Bool) 724639992))))))))));
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_1 - 1] [i_1 - 1] [i_10] [i_0])) ? (((/* implicit */int) (short)32767)) : (var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_7)))) : (((long long int) arr_29 [i_0] [i_0] [i_0] [i_2] [i_0]))))))))));
                        var_23 = ((((((/* implicit */_Bool) arr_10 [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1] [i_1 + 1])) ? (((/* implicit */int) arr_10 [(short)6] [i_1 + 1] [i_1 - 1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_36 [i_1] [i_1 - 1])))) * (((/* implicit */int) (short)7001)));
                    }
                    /* vectorizable */
                    for (signed char i_11 = 0; i_11 < 12; i_11 += 2) /* same iter space */
                    {
                        var_24 = ((/* implicit */short) (-(((/* implicit */int) (signed char)-29))));
                        var_25 = ((/* implicit */short) (~(var_4)));
                        var_26 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2 - 2] [i_2] [(signed char)9])) ? ((~(((/* implicit */int) (unsigned char)80)))) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_1 + 1] [i_1 - 1] [i_0]))));
                        arr_39 [i_1] = ((/* implicit */unsigned long long int) ((long long int) (~(((/* implicit */int) (short)-32746)))));
                        var_27 -= ((/* implicit */unsigned long long int) (~(2147483647)));
                    }
                }
                var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) | (((/* implicit */int) (short)32753))));
                /* LoopNest 2 */
                for (short i_12 = 2; i_12 < 9; i_12 += 2) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            arr_46 [i_13] [i_1] [i_1] [i_0] = ((/* implicit */int) max((((/* implicit */long long int) arr_21 [i_0] [i_1] [i_12] [(_Bool)1] [11LL])), ((~(min((((/* implicit */long long int) (short)-6)), (arr_16 [i_0] [i_1] [i_12] [i_13])))))));
                            var_29 = ((/* implicit */short) ((((_Bool) (short)-27804)) ? (((/* implicit */int) (short)-1)) : (((((/* implicit */int) arr_21 [i_0] [i_1] [i_1 - 1] [i_13] [i_12 + 2])) ^ (((/* implicit */int) arr_21 [i_0] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_12 + 3]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
