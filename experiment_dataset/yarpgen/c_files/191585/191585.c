/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((39501 ? 13 : 1436763216)));
    var_18 = (max(var_18, (((var_15 || (((!-1436763216) || (((var_6 ? var_11 : 6294272179746564193))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 ^= (30109 && 39501);
                arr_7 [i_1] = (min(((((max(1478055358934997420, var_7))) ? 17991875294302833947 : (~-108))), ((min(((min(238341906, -1034659386))), (min(var_7, var_4)))))));
                var_20 = (max((max((max(-1436763236, (arr_6 [i_0]))), 0)), (((arr_4 [i_1] [i_0]) ? (((var_13 ? -3587521253354345301 : 44))) : (((arr_5 [8] [i_1]) | var_6))))));
            }
        }
    }
    var_21 = ((var_9 ? (var_1 >= var_7) : var_14));
    #pragma endscop
}
