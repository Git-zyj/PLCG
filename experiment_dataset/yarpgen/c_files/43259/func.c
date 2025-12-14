/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43259
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
    var_14 = var_13;
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_15 = ((long long int) ((((/* implicit */_Bool) -5193803591686424558LL)) ? (var_9) : (max((507904LL), (arr_0 [i_0] [i_0 + 1])))));
                                arr_11 [2LL] [i_4] [i_2] [i_3 + 1] = 5193803591686424550LL;
                                arr_12 [i_0] [i_2] [i_2] = 2437259984326936868LL;
                                arr_13 [10LL] [i_2] [i_1] [i_2] [i_0] = ((/* implicit */long long int) ((((long long int) arr_10 [8LL] [i_1 + 3] [i_2] [0LL] [i_2 + 1] [1LL] [i_3 + 1])) < (((-2437259984326936866LL) / (((((/* implicit */_Bool) 5903830440796790182LL)) ? (-1LL) : (3339183993389544916LL)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        for (long long int i_6 = 1; i_6 < 10; i_6 += 4) 
                        {
                            {
                                var_16 |= var_13;
                                var_17 = arr_1 [2LL];
                                arr_19 [i_0 - 1] [i_0 - 1] [i_0] [0LL] [i_0] [i_0] [i_0] |= 5193803591686424542LL;
                                var_18 = ((max((var_5), (arr_9 [i_1] [i_1] [i_1 + 4] [i_1 - 1] [i_1 + 4] [i_1]))) - (min((arr_9 [i_1] [i_1 + 3] [i_1 + 4] [i_1 - 1] [i_1 - 2] [9LL]), (arr_9 [i_1] [i_1 + 3] [i_1 + 4] [i_1 - 1] [5LL] [i_1]))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) -7646481442966267848LL)))))));
                        arr_23 [i_2] [0LL] [0LL] [i_2 + 2] [i_2] [i_7] = var_0;
                        var_20 = ((/* implicit */long long int) max((var_20), (((((/* implicit */_Bool) 5193803591686424545LL)) ? (arr_14 [i_2 + 2] [i_0] [i_0 - 2] [i_0] [i_0]) : (var_13)))));
                    }
                    for (long long int i_8 = 1; i_8 < 10; i_8 += 3) 
                    {
                        var_21 = (+(arr_20 [i_0] [i_1] [i_8 - 1]));
                        var_22 = (~(min((-1LL), (arr_15 [i_0 - 2] [i_0 - 2] [i_1 - 2] [i_8 + 1]))));
                    }
                    var_23 ^= min((min((((/* implicit */long long int) (!(((/* implicit */_Bool) 562949953421311LL))))), (4073680109317022554LL))), (max((((var_10) >> (((var_11) - (2934291476593141095LL))))), (-5193803591686424542LL))));
                }
            } 
        } 
    } 
    var_24 = var_11;
    var_25 = ((/* implicit */long long int) max((var_25), ((+(var_2)))));
}
