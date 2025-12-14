/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (18517 && -124);
                var_15 = (max(21, (max((!123), (arr_3 [i_1])))));
            }
        }
    }
    var_16 = ((1 ? (max((((var_3 >> (4294967275 - 4294967249)))), ((var_9 ? 9865127826493678668 : 8414835643847476098)))) : (((var_12 ? (var_11 * var_5) : (((max(var_9, var_6)))))))));
    var_17 = (((((4622366861269729249 ? (1 & var_8) : ((min(20164, 124)))))) ^ (min(1, ((127 ? 1 : 18))))));
    #pragma endscop
}
