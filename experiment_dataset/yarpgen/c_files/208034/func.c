/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208034
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) ((long long int) arr_0 [i_0] [(unsigned char)0]));
                var_15 -= ((/* implicit */long long int) min(((+(((/* implicit */int) (unsigned char)17)))), (((/* implicit */int) var_3))));
                var_16 |= ((/* implicit */long long int) ((max(((+(((/* implicit */int) (unsigned char)7)))), (((/* implicit */int) arr_2 [i_0])))) & (((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
                arr_7 [i_1] = var_0;
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                            {
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)18))) * (((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_1] [(short)2] [i_2]))) * (((2987156162U) - (2987156162U)))))));
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_16 [i_2] [i_2] [1U] [i_3] [i_1])) ? (var_14) : (((/* implicit */long long int) arr_15 [5LL] [i_1] [i_1] [i_1] [i_2] [i_1] [14U])))) ^ (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) / (9198125513621306527LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_2] [5LL] [i_2] [8ULL] [i_4]))))) ? (max((((/* implicit */long long int) var_12)), ((-9223372036854775807LL - 1LL)))) : (arr_11 [i_2])))));
                                var_19 ^= ((/* implicit */short) ((unsigned long long int) -4606585014231023643LL));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                            {
                                arr_20 [i_0] [i_0] [i_2] [i_2] [i_3] [i_5] [i_5] = ((/* implicit */unsigned int) (~(((((/* implicit */long long int) var_12)) - (var_7)))));
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) arr_18 [i_0] [i_0] [i_0] [10LL] [6ULL] [8ULL] [i_0]))));
                                var_21 += ((/* implicit */unsigned long long int) -2254707689847414275LL);
                                arr_21 [i_0] [i_1] [i_2] [i_1] [4ULL] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)18291)) : (((/* implicit */int) (unsigned char)255))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 3) 
                            {
                                var_22 = ((((/* implicit */_Bool) arr_22 [7ULL] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) ? (arr_22 [i_0] [(unsigned short)1] [(unsigned char)8] [i_2] [i_3] [i_3] [i_6]) : (arr_22 [(unsigned char)8] [i_3] [i_3] [i_2] [3ULL] [(unsigned short)8] [3ULL]));
                                var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_2] [i_3])) ? (arr_0 [i_1] [i_3]) : (arr_0 [(unsigned char)3] [(unsigned char)3])));
                                arr_24 [i_0] [i_1] [i_0] [i_2] [5ULL] [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [7ULL] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (((arr_23 [i_2] [i_3] [(unsigned short)0] [i_3]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                            }
                            arr_25 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) var_3);
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) var_14);
}
