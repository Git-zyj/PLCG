/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = var_10;
                var_21 = (min(var_21, (((!((min(((185475370 ? 185475370 : -185475370)), (arr_3 [i_1] [i_0 - 1] [i_0])))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                arr_11 [i_3] [i_3] = (((min(-665992513094798337, (max(var_9, var_12)))) == var_5));
                arr_12 [i_3] [i_3] = (((~(arr_9 [i_2 + 1]))));
            }
        }
    }
    #pragma endscop
}
