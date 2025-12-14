/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (((arr_1 [i_1]) ? ((max(972713146, ((var_2 ? var_18 : (arr_1 [i_0])))))) : (min(15162117345619662717, ((((arr_1 [i_0]) ? 176 : (arr_1 [i_1]))))))));
                var_20 = (((((((var_12 ? 30 : var_0))) ? var_14 : ((var_9 ? (arr_2 [i_0] [i_0]) : 12888196995806288672)))) ^ ((((((232 ? var_2 : (arr_0 [i_0] [i_0])))) | (max(3190181601214192443, 25650)))))));
            }
        }
    }
    var_21 = var_4;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                arr_11 [i_2] [i_3] [i_3] = (arr_5 [i_2 + 3]);
                var_22 = ((~(((var_18 - var_1) - (max((arr_7 [i_2] [i_2]), var_4))))));
                arr_12 [i_3] [i_2] = (arr_10 [i_2]);
            }
        }
    }
    var_23 = var_2;
    #pragma endscop
}
