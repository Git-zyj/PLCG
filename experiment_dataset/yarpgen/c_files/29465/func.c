/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29465
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
    var_16 = var_3;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_3] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(465539693222882047ULL)))) ? (465539693222882047ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 70360154243072ULL))))))));
                                var_17 ^= ((/* implicit */int) ((arr_5 [(short)0] [13]) == (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_1] [i_0]))) & ((+(17981204380486669568ULL)))))));
                                var_18 = ((/* implicit */unsigned short) (((((~(((/* implicit */int) arr_11 [i_0] [i_2 + 1] [i_2] [i_0])))) + (2147483647))) << ((((((~(((/* implicit */int) arr_11 [i_1] [i_2 + 1] [i_2 + 1] [i_1])))) + (41163))) - (19)))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) (unsigned short)40232)))), ((!(((/* implicit */_Bool) min((arr_7 [i_2]), (arr_7 [i_2 + 1]))))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_1] = arr_14 [i_0] [i_0] [i_1] [i_1] [i_1];
                var_19 -= ((/* implicit */unsigned long long int) ((-1255136117) ^ (((/* implicit */int) arr_10 [i_0] [i_0]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 4) 
                {
                    arr_20 [i_1] [i_1] = ((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1] [i_5]);
                    var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) -385254472)) ? (((/* implicit */int) arr_11 [i_5] [i_5] [i_5 + 1] [i_5 + 1])) : (((/* implicit */int) (signed char)-36)))) * (((/* implicit */int) ((((/* implicit */int) arr_11 [i_5] [i_5] [i_5 + 1] [i_5 - 2])) < (((/* implicit */int) arr_11 [2ULL] [2ULL] [i_5] [i_5 - 2])))))));
                    /* LoopSeq 1 */
                    for (signed char i_6 = 2; i_6 < 19; i_6 += 4) 
                    {
                        var_21 = ((/* implicit */signed char) arr_6 [i_0] [i_1] [(signed char)10]);
                        var_22 &= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_18 [i_6 - 2] [i_6 - 2] [i_6 - 1] [i_5 + 1])) ? ((+(((/* implicit */int) (short)1328)))) : (((/* implicit */int) ((((/* implicit */int) arr_21 [i_1])) == (1255136117))))))));
                        arr_25 [i_0] [i_1] [i_0] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((min((arr_8 [i_1] [i_1]), (((/* implicit */long long int) arr_2 [i_0])))) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_10 [i_6 - 1] [i_6 + 1])) - (186))))))));
                        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)124))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 2; i_7 < 18; i_7 += 4) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (-(3935890504899508134ULL))))));
                                arr_33 [i_0] [i_1] [i_5] [i_1] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)15)), (((((/* implicit */_Bool) 10643664806485836066ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)105))) : (18446744073709551615ULL))))))));
                                var_25 = (-(((/* implicit */int) arr_7 [i_7])));
                            }
                        } 
                    } 
                    arr_34 [(unsigned char)8] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(arr_21 [i_5 - 2]))))));
                }
                var_26 = ((/* implicit */signed char) arr_11 [i_0] [i_1] [i_1] [i_0]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 1) 
    {
        var_27 += ((/* implicit */unsigned long long int) (-(max((((arr_6 [i_9] [8ULL] [i_9]) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-5))) : (arr_8 [(signed char)18] [16ULL]))), (((/* implicit */long long int) (_Bool)1))))));
        var_28 = arr_0 [i_9];
    }
}
