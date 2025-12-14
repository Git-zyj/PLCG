/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((-1611377357779171084 & var_7) ? (min((min(var_2, 2590)), -var_7)) : (((~(-2586 & 227))))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_12 = min((min((~-6057), ((226 ? var_0 : (arr_1 [i_0]))))), (min(((29 ? (arr_1 [i_0 + 2]) : var_7)), 29)));
        var_13 += var_1;
        var_14 = (min((arr_2 [i_0] [13]), (max(var_3, (arr_0 [i_0] [i_0 - 2])))));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_15 -= var_4;

        /* vectorizable */
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            arr_7 [4] [i_2 - 2] [15] = -6038;
            var_16 = var_10;
        }
        var_17 = var_1;
        var_18 += (((((var_10 ^ (arr_1 [i_1]))))));
        arr_8 [i_1 + 2] = (min(2586, 2585));
    }
    var_19 += var_5;
    #pragma endscop
}
