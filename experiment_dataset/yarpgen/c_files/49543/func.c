/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49543
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
    var_15 ^= ((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) (_Bool)1))));
    var_16 += ((/* implicit */long long int) var_8);
    var_17 = max((min((((_Bool) -1LL)), (max(((_Bool)1), ((_Bool)1))))), (((((/* implicit */int) var_2)) > (((/* implicit */int) (_Bool)0)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] = (_Bool)1;
        arr_3 [i_0] = ((/* implicit */long long int) ((arr_1 [i_0 + 1]) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 + 1]))));
        var_18 = arr_0 [i_0];
        var_19 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_20 *= var_13;
        arr_6 [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1]))));
        arr_7 [i_1] [i_1] = var_9;
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_9 [i_2 - 1])) > (((/* implicit */int) arr_9 [i_2 - 1]))))) & (((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 3; i_4 < 21; i_4 += 2) 
            {
                {
                    var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            {
                                var_23 = ((_Bool) ((arr_13 [i_2 - 1] [i_4 + 1] [i_5 - 1]) ? (((/* implicit */int) arr_13 [i_2 - 1] [i_4 - 1] [i_5 - 1])) : (((/* implicit */int) var_9))));
                                var_24 = ((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) -6053006917899392748LL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
