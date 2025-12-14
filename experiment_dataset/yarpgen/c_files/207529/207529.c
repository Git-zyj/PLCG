/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((((((0 ? -1 : 11)))) ? ((((var_10 + 2147483647) << (((-33554432 + 33554445) - 13))))) : ((2925069379 ? 536870911 : 1))));
                    var_18 = 536870911;
                    var_19 = 33554426;
                    var_20 += min((((~-33554432) ? (max(536870911, var_10)) : (((min((arr_2 [i_0]), (arr_6 [i_2 + 1] [i_1] [i_0]))))))), (min(2, 32766)));
                }
            }
        }
    }
    var_21 = (max(var_21, var_12));
    var_22 = ((24338 ? 536870911 : -24328));
    var_23 = (-((-var_2 ? var_15 : (max(var_10, var_17)))));
    #pragma endscop
}
