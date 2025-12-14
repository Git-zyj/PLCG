/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= ((((min(var_3, var_11)))) ? var_15 : var_10);
    var_20 = (((min(var_15, ((var_3 ? var_17 : var_17)))) + var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_21 = (arr_0 [i_0] [0]);
                var_22 = 0;
                arr_4 [i_1] [i_1] [i_1 + 3] = ((((arr_3 [i_1 + 1]) > (arr_3 [i_1 - 1]))) ? (arr_3 [i_1 + 3]) : (arr_3 [i_1 - 1]));
            }
        }
    }
    #pragma endscop
}
