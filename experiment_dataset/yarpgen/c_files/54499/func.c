/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54499
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = arr_1 [i_0];
        var_20 = ((/* implicit */int) 13064431920882201314ULL);
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_0]))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                for (short i_3 = 3; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)0)) * (((((/* implicit */int) (short)12)) / (2147483647)))));
                        arr_13 [i_0] [i_2] [i_1] [i_2] [3ULL] = ((/* implicit */unsigned short) arr_7 [i_3 + 2]);
                        var_22 = ((_Bool) arr_10 [i_2] [i_2] [i_3] [i_2] [i_2 + 1]);
                    }
                } 
            } 
            arr_14 [i_0] = ((/* implicit */short) ((unsigned short) (signed char)127));
            var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]))));
        }
        arr_15 [i_0] = ((arr_9 [(short)8]) ? (3342425165U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(unsigned short)2]))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_20 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_4])) >= (((/* implicit */int) arr_0 [i_4] [i_4]))));
        arr_21 [i_4] [i_4] = (~(arr_16 [i_4] [i_4]));
        arr_22 [i_4] = ((/* implicit */short) ((arr_16 [i_4] [i_4]) == (arr_16 [i_4] [i_4])));
    }
}
