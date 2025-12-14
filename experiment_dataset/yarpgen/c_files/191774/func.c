/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191774
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
    for (long long int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (signed char i_2 = 4; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] &= var_7;
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [6]))) * (arr_6 [i_0] [i_0 - 2] [i_4 + 1]))))));
                                var_18 &= (-(((((/* implicit */int) arr_2 [i_0] [i_1 + 1] [i_2 - 1])) / (arr_3 [i_0 - 1] [i_1 - 1]))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] [8ULL] [i_0] = ((/* implicit */unsigned long long int) arr_15 [(signed char)16] [(signed char)16] [(signed char)16] [(signed char)16] [(signed char)16]);
                    var_19 -= ((((((/* implicit */_Bool) (unsigned short)43014)) ? (1644389109) : (((/* implicit */int) (unsigned short)50461)))) == (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)15)) || (((/* implicit */_Bool) -6244950505495103683LL))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_5 = 3; i_5 < 17; i_5 += 2) 
    {
        arr_20 [i_5] = ((/* implicit */short) arr_18 [i_5 - 1]);
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) arr_18 [i_5 - 1]))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_5 - 1])) || (((/* implicit */_Bool) arr_18 [i_5 + 1]))));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 16; i_6 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) ((int) var_11));
        var_23 -= ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_6] [i_6] [10]))))) && (((/* implicit */_Bool) var_11)));
        arr_24 [i_6] [i_6] = ((/* implicit */unsigned int) arr_2 [11ULL] [16] [11ULL]);
    }
}
