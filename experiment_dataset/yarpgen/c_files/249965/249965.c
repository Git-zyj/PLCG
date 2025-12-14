/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    var_20 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, ((min(((48297 ? 17248 : -6110179633678109264)), ((((arr_5 [i_1 - 2] [i_2]) ? (arr_5 [i_1 - 1] [i_1 - 1]) : (arr_5 [i_1 - 2] [i_0])))))))));
                    arr_8 [i_2] [1] [i_1] [i_0] = ((17256 << (((-1239140588 + 1239140607) - 15))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (arr_4 [i_1 - 2]);
                    arr_10 [i_0] = ((((((arr_7 [i_1] [i_1 - 1] [i_1 - 2]) ? var_5 : (arr_7 [4] [i_1 - 1] [i_1 - 1])))) ? (var_14 << 7) : (((-(arr_5 [i_1 + 1] [i_1 + 1]))))));
                }
            }
        }
    }
    var_22 = -var_0;
    var_23 = ((var_10 | ((16769024 ? var_13 : var_6))));
    #pragma endscop
}
