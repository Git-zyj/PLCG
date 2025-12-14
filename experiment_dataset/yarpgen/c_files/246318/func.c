/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246318
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1 - 1]);
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 8; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) ^ (((long long int) var_0))));
                                var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_6 [i_1 - 1] [i_2] [i_3] [i_3]), (((/* implicit */short) var_7))))) ? ((+(((/* implicit */int) arr_6 [i_1 - 1] [i_3] [i_3] [(short)3])))) : ((-(((/* implicit */int) arr_6 [i_1 - 1] [i_3] [0LL] [i_4]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */int) max((var_22), (min((77933372), ((-((-(((/* implicit */int) var_18))))))))));
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 23; i_5 += 2) 
    {
        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 1) 
        {
            for (long long int i_7 = 4; i_7 < 21; i_7 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) arr_11 [i_6]);
                    /* LoopSeq 2 */
                    for (long long int i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        var_24 = ((/* implicit */_Bool) (((~(2089369637U))) << (((((((/* implicit */_Bool) arr_16 [i_6] [i_7 - 3] [i_5 + 1])) ? (var_14) : (arr_16 [i_5] [i_7 - 4] [i_5 - 3]))) - (6692011710944856032LL)))));
                        var_25 = ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_5)))), (((/* implicit */int) arr_18 [i_5] [i_5 - 2] [i_5]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_18 [i_7 - 3] [i_6] [i_6]))))) : (arr_17 [i_5 - 3] [i_6] [i_7] [i_7] [i_8] [i_8]));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 4) 
                    {
                        var_26 = ((/* implicit */long long int) arr_17 [i_5] [(unsigned char)2] [10LL] [i_5] [(_Bool)1] [i_5]);
                        var_27 = ((((/* implicit */_Bool) arr_18 [i_7 - 4] [i_9] [i_9])) ? ((-(arr_15 [(_Bool)1] [i_6] [i_5] [i_7]))) : (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_5 - 2])) / (((/* implicit */int) arr_18 [i_9] [i_6] [i_9]))))));
                    }
                    var_28 = ((/* implicit */unsigned char) var_8);
                }
            } 
        } 
    } 
}
