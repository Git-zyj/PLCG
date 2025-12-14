/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228773
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
    var_16 = ((/* implicit */unsigned char) var_10);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) arr_1 [i_0])))))));
        var_17 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_1 [i_0]))));
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 22; i_1 += 4) /* same iter space */
        {
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_1 + 1] [(short)16] [i_1])) : (((/* implicit */int) arr_3 [i_1 - 1] [i_1] [i_0])))))));
            arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_3 [(_Bool)1] [i_1] [(_Bool)1]))))) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 1] [i_1 - 1]))));
            var_19 |= ((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]);
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 + 1] [i_1 - 1])) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1] [i_1 - 1]))));
        }
        for (signed char i_2 = 1; i_2 < 22; i_2 += 4) /* same iter space */
        {
            var_21 -= ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_2 - 1] [i_2 + 1] [i_2])) % (((/* implicit */int) arr_3 [i_2 - 1] [i_2] [i_2]))));
            var_22 = ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)63)));
        }
        /* LoopNest 2 */
        for (unsigned int i_3 = 3; i_3 < 20; i_3 += 2) 
        {
            for (signed char i_4 = 4; i_4 < 21; i_4 += 3) 
            {
                {
                    arr_16 [i_0] [i_3 + 1] [i_0] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)0))));
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 22; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0] [i_0])) * (((/* implicit */int) arr_17 [i_6] [i_6] [i_6] [i_6]))))) ? (arr_22 [i_3] [i_4] [i_5 - 1] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_4])) > (((/* implicit */int) arr_11 [i_0] [i_0] [i_4]))))))))));
                                var_24 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)12))));
                                arr_23 [7U] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3 - 3] [i_3 - 3] [i_3 + 1] [i_4 - 2]))) | (((((/* implicit */_Bool) arr_19 [i_3] [i_5 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [(unsigned short)11] [i_3 - 1] [i_3]))) : (arr_14 [i_6])))));
                                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_6])) || (arr_10 [i_5] [i_5])))) >= (((/* implicit */int) arr_12 [i_0] [i_3 - 2])))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_4] [(unsigned char)5] [i_4])) ^ (((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))) ? (arr_6 [i_4 - 3] [i_3] [14LL]) : (((/* implicit */unsigned int) arr_7 [i_4 + 2] [i_4] [i_4 - 1]))));
                    var_27 *= ((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]);
                    arr_24 [i_0] [(signed char)9] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_3 - 1] [i_3 - 2] [i_0])) ? (((arr_4 [i_0]) ^ (arr_4 [(_Bool)1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_4] [i_0] [i_4] [i_0] [i_3])) ? (((/* implicit */int) arr_17 [i_3 + 2] [i_4] [i_3 + 2] [6LL])) : (((/* implicit */int) arr_0 [i_0])))))));
                }
            } 
        } 
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_28 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_7] [i_7])) ? (arr_14 [i_7]) : (arr_14 [i_7])))) >= (((arr_19 [i_7] [i_7]) + (arr_19 [i_7] [i_7])))));
        var_29 |= ((/* implicit */unsigned int) arr_25 [i_7]);
        arr_27 [i_7] = ((/* implicit */unsigned int) arr_10 [i_7] [i_7]);
        arr_28 [(_Bool)1] = ((/* implicit */unsigned long long int) arr_12 [i_7] [i_7]);
    }
    var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) var_4))));
}
