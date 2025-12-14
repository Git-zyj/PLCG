/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = (max((((((26000 ? 26000 : 26000)) < (var_8 && var_12)))), -26017));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 = (min(((((arr_5 [4] [i_0] [i_0]) ? -26017 : 25985))), (arr_1 [i_1] [i_2])));
                    arr_8 [i_2] = ((~((((min((arr_5 [i_0] [i_1] [i_1]), -26014))) ? ((26019 ? -26010 : -26014)) : (arr_6 [i_0] [i_1] [i_1] [i_2])))));
                    var_17 = arr_3 [i_0] [i_1];
                    var_18 = -26020;
                }
            }
        }
    }
    var_19 = (((-var_12 < ((-26017 ? var_0 : 25996)))) ? (min(var_5, (var_6 - 26017))) : var_4);
    var_20 = (min(var_2, var_12));
    var_21 = 26014;
    #pragma endscop
}
