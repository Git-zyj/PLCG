/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215654
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_2])) - (((/* implicit */int) arr_9 [i_2] [i_1] [i_0] [i_0] [i_4] [i_4]))))), (((unsigned long long int) arr_2 [(unsigned char)22]))));
                                var_10 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_1 [(short)7] [i_0])), (2147483635)));
                                arr_16 [20LL] [i_1] [i_0] [i_1] [i_4] = ((/* implicit */short) var_4);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (int i_6 = 1; i_6 < 24; i_6 += 2) 
                        {
                            var_11 = ((/* implicit */int) min((((/* implicit */unsigned int) (((((~(((/* implicit */int) (unsigned char)10)))) + (2147483647))) << (((arr_13 [i_2] [i_5] [i_2] [i_1] [i_0]) - (4259552144U)))))), (((unsigned int) ((unsigned int) arr_14 [i_0] [i_0] [(short)20] [i_5] [i_5] [i_6 + 1] [i_6])))));
                            arr_23 [i_0] [21LL] [(_Bool)1] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)245)) && (((/* implicit */_Bool) (short)31069))));
                            var_12 &= ((/* implicit */_Bool) arr_4 [i_6 + 1] [i_1]);
                            var_13 = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) arr_17 [i_6 - 1] [i_6 + 1] [i_6] [i_6 + 1] [i_6 - 1])), (arr_22 [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6 - 1]))), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_0] [i_6]))));
                            var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) arr_17 [18U] [i_5] [i_0] [i_0] [i_0]))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-31409)) - (arr_20 [i_7] [i_5] [i_1] [i_1]))))));
                            var_16 = arr_6 [i_0];
                        }
                        for (unsigned short i_8 = 1; i_8 < 24; i_8 += 4) 
                        {
                            arr_30 [i_0] = ((/* implicit */long long int) max((0), (((/* implicit */int) (short)1603))));
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_25 [i_0] [i_0] [i_0] [(short)11] [i_0] [(unsigned char)17])), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (arr_11 [(short)0] [(short)0] [i_8 + 1] [i_8 - 1] [i_8]))))))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 25; i_9 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_0] [i_0] [i_2] [i_5] [i_9] [i_9])) * (((/* implicit */int) arr_25 [i_0] [i_1] [i_2] [i_5] [(short)20] [i_5])))))));
                            arr_33 [i_9] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_11 [i_0] [(short)16] [i_2] [i_5] [i_9]))) * (((((/* implicit */int) arr_2 [i_0])) << (((arr_11 [i_2] [i_2] [i_2] [i_2] [i_2]) - (8910253785405241374ULL)))))));
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) min(((+(((/* implicit */int) ((unsigned char) arr_26 [i_1] [i_1] [i_1] [i_1] [i_1]))))), (((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_1))))), (arr_26 [i_0] [i_1] [i_2] [23] [i_1])))))))));
                            arr_34 [i_0] [i_1] [i_0] [(signed char)1] [i_9] [(signed char)1] [(unsigned char)13] = ((/* implicit */short) min((arr_11 [(signed char)4] [i_1] [i_2] [i_0] [i_9]), (((/* implicit */unsigned long long int) min((arr_7 [i_0] [i_2] [i_0]), (((/* implicit */short) arr_14 [i_9] [i_5] [i_1] [i_2] [i_1] [i_1] [i_0])))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_10 = 0; i_10 < 25; i_10 += 4) 
                        {
                            var_20 = (i_0 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */int) arr_4 [i_2] [i_0])) << (((((/* implicit */int) arr_26 [i_0] [(short)12] [(unsigned char)12] [i_5] [i_10])) + (9983)))))) : (((/* implicit */short) ((((((/* implicit */int) arr_4 [i_2] [i_0])) + (2147483647))) << (((((((/* implicit */int) arr_26 [i_0] [(short)12] [(unsigned char)12] [i_5] [i_10])) + (9983))) - (2))))));
                            var_21 = ((/* implicit */unsigned char) arr_8 [i_5] [i_1] [i_0]);
                            var_22 = ((/* implicit */unsigned long long int) max(((~(max((2782995226U), (((/* implicit */unsigned int) arr_3 [i_1] [i_5] [i_10])))))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) arr_13 [(signed char)23] [i_1] [i_2] [i_5] [i_10]))))))));
                            arr_38 [i_0] [i_0] [i_10] = min(((~(arr_0 [i_10]))), (((/* implicit */int) var_2)));
                        }
                        for (unsigned long long int i_11 = 3; i_11 < 23; i_11 += 4) 
                        {
                            var_23 = (((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [(short)0] [i_0]))))))) ? (((/* implicit */int) ((_Bool) (-(((/* implicit */int) arr_6 [i_0])))))) : (((/* implicit */int) arr_36 [i_0] [i_0] [i_1] [i_2] [i_5] [i_1] [i_11])));
                            arr_42 [i_0] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) arr_17 [(short)1] [i_11 + 2] [i_11 - 1] [i_11] [i_11 + 2]);
                        }
                    }
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_28 [i_0] [i_1] [i_2] [i_2] [6ULL] [(short)0])))))));
                    var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_3)))))));
                }
            } 
        } 
        arr_43 [i_0] [i_0] = ((/* implicit */unsigned int) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
        arr_44 [14ULL] [14ULL] &= ((/* implicit */signed char) min((((/* implicit */int) max((arr_10 [6LL] [i_0] [i_0] [24]), (arr_10 [i_0] [i_0] [i_0] [5ULL])))), (((((/* implicit */int) min((arr_10 [i_0] [i_0] [i_0] [i_0]), ((short)1608)))) + ((~(((/* implicit */int) var_3))))))));
        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [(unsigned short)1] [i_0] [i_0]))));
    }
    var_27 = ((/* implicit */short) var_5);
}
