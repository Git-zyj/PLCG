/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232677
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 4; i_2 < 17; i_2 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */signed char) (-2147483647 - 1));
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (arr_4 [i_2 - 3] [i_1]) : (arr_4 [i_2 - 3] [i_0])));
                    var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0] [i_2 - 1] [i_2] [i_0])) ? (((/* implicit */unsigned long long int) 2147483647)) : (arr_6 [i_0] [i_2 - 1] [i_2 + 1] [(short)9])));
                    arr_7 [i_0] [i_1] [1LL] &= ((/* implicit */unsigned int) var_9);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_21 = (((-2147483647 - 1)) == (((/* implicit */int) arr_9 [(unsigned short)3] [i_1] [i_2 - 4] [i_2])));
                                arr_14 [i_0] = ((/* implicit */_Bool) (-2147483647 - 1));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_2 + 1] [i_2 + 1])) ? (arr_4 [i_2 - 2] [i_2 - 2]) : (arr_4 [i_2 - 3] [i_2 - 3])));
                                arr_15 [10U] [14U] [14U] [i_4] = ((/* implicit */long long int) arr_13 [i_0] [i_1] [i_3] [i_3] [i_4] [i_1] [i_3]);
                            }
                        } 
                    } 
                }
                for (unsigned int i_5 = 4; i_5 < 17; i_5 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */long long int) (((-(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [(signed char)9] [i_5])) : (((/* implicit */int) var_7)))))) / ((-2147483647 - 1))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            {
                                var_24 ^= (+(((2147483647) << (((((-2147483639) + (2147483643))) - (4))))));
                                var_25 = ((/* implicit */unsigned short) min((max((arr_11 [i_5] [i_5 - 2] [i_5 - 2]), (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_5] [i_0] [i_0] [i_7])) - (((/* implicit */int) arr_22 [i_0] [4] [i_5 - 1] [i_0] [i_6] [i_7]))))))), (((/* implicit */long long int) min((2147483639), (((/* implicit */int) arr_5 [i_0])))))));
                                var_26 = ((/* implicit */signed char) arr_23 [4U] [i_7] [i_5 + 1] [i_5 + 1] [i_7]);
                            }
                        } 
                    } 
                }
                for (long long int i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    var_27 = ((/* implicit */short) ((((2147483646) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_0] [i_1] [i_0] [i_1]))))))) && (((/* implicit */_Bool) min((arr_3 [i_8]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [i_1])) ? (arr_27 [i_0] [i_0] [i_8]) : (((/* implicit */unsigned int) 2147483639))))))))));
                    arr_28 [i_0] [i_0] [i_8] = (~(((/* implicit */int) ((arr_0 [i_8]) <= (((((/* implicit */_Bool) -2147483639)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))))))));
                    var_28 |= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_8] [i_8] [i_8] [i_8]))))) ? (((/* implicit */int) arr_10 [9] [i_0] [i_1] [i_8])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) (((~(((/* implicit */int) arr_22 [(signed char)4] [i_8] [i_8] [10ULL] [i_0] [i_0])))) <= ((~(-2147483622))))))));
                    arr_29 [i_0] [i_1] [i_0] [i_1] = ((((/* implicit */_Bool) 2147483639)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_19 [i_0] [4ULL] [i_0] [(unsigned short)11])) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_8] [i_8] [i_1] [i_8])) : (((/* implicit */int) var_6))))))) : (((long long int) 2147483638)));
                }
                var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) 2147483639))))), (((((/* implicit */int) arr_2 [i_0] [i_1])) ^ (((/* implicit */int) arr_2 [i_1] [i_1])))))))));
            }
        } 
    } 
    var_30 = ((/* implicit */long long int) (+(max((((/* implicit */unsigned int) max((-2147483639), (2147483638)))), (var_14)))));
}
