/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = (min(4194303, (max(18446744073709551610, var_10))));
                arr_5 [i_0] [i_1] [6] = 1;
                var_14 = ((((+(((arr_2 [i_1]) ? (arr_3 [i_0]) : (arr_4 [i_0] [i_1]))))) | (min(32, 18446744073709551610))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                var_15 = (min(var_15, (((var_0 ? (((arr_7 [i_2]) ? -157353950 : (arr_6 [i_3]))) : (((~-126) ? (((arr_6 [14]) << (((arr_7 [i_2]) - 24800)))) : (arr_7 [i_2]))))))));
                var_16 = var_4;
            }
        }
    }
    #pragma endscop
}
