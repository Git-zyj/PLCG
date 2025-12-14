/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((((var_10 * var_6) ? (var_15 * var_7) : ((0 ? -2147483645 : 22)))), ((((min(var_3, var_0))) ? var_0 : var_10))));
    var_21 += var_3;
    var_22 = var_1;
    var_23 = (max(var_23, 23));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_24 |= arr_6 [17];
                var_25 ^= ((!(arr_2 [i_0 + 1])));
            }
        }
    }
    #pragma endscop
}
