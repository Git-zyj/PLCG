/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_13 = ((((0 < 0) == 255)));
                arr_5 [i_0] [i_0] = (255 < 0);
                var_14 = (max(var_14, -2022551972));
                arr_6 [2] [i_0] = (((((var_6 ? ((var_8 ? var_8 : var_11)) : var_11))) ? (((((var_0 ? var_6 : var_11))) ? var_10 : var_8)) : ((var_8 ? ((var_4 ? var_3 : var_1)) : var_8))));
            }
        }
    }
    var_15 = (max(var_15, ((((((9 ? -1211295283 : 7))) ? ((246 ? 1 : ((74 ? 117 : var_2)))) : var_6)))));
    var_16 = min((min(var_1, var_5)), var_0);
    #pragma endscop
}
