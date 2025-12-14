/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212457
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
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 21; i_2 += 3) 
            {
                {
                    var_18 -= ((/* implicit */signed char) arr_0 [i_2 + 4]);
                    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_2] [i_1 + 2] [i_1] [i_0 + 1])) / (arr_2 [i_1] [i_1])))), (arr_8 [i_0] [i_1 - 2] [i_2])))) < (min((min((arr_1 [i_0] [i_1 + 1]), (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_3 = 3; i_3 < 10; i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] |= ((/* implicit */signed char) ((arr_6 [i_3] [i_3]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3] [i_3] [i_3])))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 3; i_4 < 9; i_4 += 1) 
        {
            for (unsigned char i_5 = 1; i_5 < 11; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 2; i_6 < 9; i_6 += 3) 
                    {
                        for (signed char i_7 = 3; i_7 < 11; i_7 += 3) 
                        {
                            {
                                var_20 |= arr_13 [i_5];
                                var_21 = ((/* implicit */unsigned long long int) ((((arr_15 [i_3 - 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_3 + 2] [i_3 + 2] [i_5] [i_5] [i_5] [i_5] [i_7 - 3]))))) >= (((arr_18 [i_3] [i_3] [i_3 - 3] [i_3]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_4] [i_4] [i_6] [i_7])))))));
                                arr_24 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_7 - 1] = ((/* implicit */unsigned long long int) arr_10 [i_4]);
                            }
                        } 
                    } 
                    arr_25 [i_3] [i_4 - 2] [i_5] = ((/* implicit */unsigned char) arr_6 [i_3 - 3] [i_3 - 3]);
                }
            } 
        } 
        var_22 = ((/* implicit */signed char) arr_19 [i_3] [i_3] [i_3] [i_3] [i_3]);
        arr_26 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_3 + 1])) < (((/* implicit */int) arr_7 [i_3] [i_3] [i_3]))));
    }
    /* vectorizable */
    for (signed char i_8 = 3; i_8 < 10; i_8 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_8] [i_8] [i_8] [i_8])) || (((/* implicit */_Bool) arr_10 [i_8 - 1]))));
        arr_29 [i_8] [i_8] = ((/* implicit */short) ((arr_12 [i_8] [i_8 - 3]) ^ (((/* implicit */unsigned long long int) ((arr_10 [i_8]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_8] [i_8]))))))));
    }
}
