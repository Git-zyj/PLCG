/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205023
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
    for (long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    var_16 += ((/* implicit */short) max((((/* implicit */unsigned int) min((min((arr_7 [i_0] [i_1]), (((/* implicit */int) arr_6 [i_0] [i_1 + 1])))), (((((arr_4 [i_0] [i_1 - 1]) + (2147483647))) << (((arr_2 [i_0 - 1] [i_1] [i_1]) - (2097538721)))))))), ((~(((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) | (var_1)))))));
                    arr_8 [i_1] [i_1] [i_2] = (-(((((/* implicit */long long int) -1116985403)) * (min((4194296LL), (((/* implicit */long long int) arr_4 [(short)14] [i_1])))))));
                }
                for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_4 = 2; i_4 < 22; i_4 += 3) 
                    {
                        arr_15 [i_1 - 1] [i_1] [i_3] [i_4] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_4 + 1])) ? (((/* implicit */int) arr_11 [i_4 + 1])) : (((/* implicit */int) arr_11 [i_4 + 1]))));
                        arr_16 [i_3] [i_3] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)15)) < (((/* implicit */int) arr_5 [i_4]))))) & (((((/* implicit */_Bool) arr_10 [i_0] [i_3] [i_4])) ? (((/* implicit */int) var_0)) : (arr_4 [i_1 + 2] [i_1 + 2])))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        arr_20 [i_5] [10ULL] [i_1] [i_0] = min((((int) max((((/* implicit */long long int) 602875854U)), (arr_12 [i_0 + 3] [i_0] [i_1] [(signed char)11] [i_3] [i_5])))), (((((/* implicit */int) var_9)) & (((arr_7 [i_5] [i_3]) ^ (((/* implicit */int) (unsigned short)28379)))))));
                        /* LoopSeq 2 */
                        for (signed char i_6 = 1; i_6 < 22; i_6 += 3) /* same iter space */
                        {
                            var_17 += ((/* implicit */long long int) (((((-(((((/* implicit */int) arr_13 [i_5])) << (((arr_18 [i_0] [i_3] [i_5] [i_5]) - (3135985998U))))))) + (2147483647))) << (((((min((((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0] [i_0 - 1] [(short)13] [i_0] [i_0 + 1]))))), (min((((/* implicit */int) arr_5 [i_5])), (arr_4 [i_1] [i_3]))))) + (725656106))) - (25)))));
                            var_18 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0]))) * (((var_7) << (((144044819331678208ULL) - (144044819331678151ULL))))))))));
                        }
                        for (signed char i_7 = 1; i_7 < 22; i_7 += 3) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (+(var_12))))));
                            arr_26 [i_0] [i_1] [i_1] [i_3] [i_1] [i_7] [i_7] = ((/* implicit */_Bool) max((((((/* implicit */int) max(((unsigned short)57423), (((/* implicit */unsigned short) (unsigned char)96))))) << (((((arr_12 [(unsigned short)17] [i_1] [i_1] [i_7 - 1] [i_7] [i_1]) + (7150927512856649953LL))) - (14LL))))), (((((((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0])) ^ (((/* implicit */int) arr_25 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 - 1])))) | (((((/* implicit */int) arr_19 [i_3] [i_3] [i_3] [(unsigned short)11] [i_3] [i_3])) ^ (arr_4 [i_0] [i_0])))))));
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_5] [i_7] [i_7 + 1] = ((/* implicit */unsigned char) ((((((arr_2 [i_0 + 4] [i_1] [i_3]) & (arr_2 [i_0] [i_3] [i_5]))) + (((/* implicit */int) ((arr_7 [i_3] [i_1]) == (arr_22 [i_0] [i_1] [i_3] [i_5] [i_7 + 1])))))) - (max((((/* implicit */int) ((short) arr_7 [i_0] [i_1]))), (((((/* implicit */int) arr_25 [i_0] [i_1 + 1] [i_3] [(unsigned short)23] [20])) + (((/* implicit */int) arr_19 [i_5] [i_5] [i_5] [i_3] [(signed char)23] [i_0]))))))));
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 2] [i_0] = ((/* implicit */short) ((unsigned char) min((((/* implicit */int) arr_13 [i_3])), (arr_2 [i_1 + 2] [(signed char)12] [i_7]))));
                        }
                    }
                }
                var_20 &= ((/* implicit */long long int) arr_0 [i_1]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_8 = 0; i_8 < 15; i_8 += 2) 
    {
        for (long long int i_9 = 0; i_9 < 15; i_9 += 1) 
        {
            for (unsigned short i_10 = 0; i_10 < 15; i_10 += 3) 
            {
                {
                    var_21 += ((/* implicit */unsigned char) var_14);
                    arr_38 [i_10] [i_10] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_33 [i_8] [i_8] [i_8])) ? (arr_1 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                    var_22 = ((/* implicit */short) ((((unsigned long long int) max((((/* implicit */unsigned short) arr_36 [i_8])), ((unsigned short)6749)))) < (((/* implicit */unsigned long long int) (~(min((arr_7 [i_8] [i_9]), (((/* implicit */int) arr_33 [i_8] [i_10] [i_8])))))))));
                    arr_39 [i_8] [i_9] [i_10] [i_9] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_8]))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) min((var_4), (var_4))))));
}
