/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -1;
    var_19 |= var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = -1;
                var_21 = (((((71 ? (arr_4 [i_0] [i_0] [1]) : -77)) >> (((((-2147483647 - 1) - -2147483641)) + 27)))));
                var_22 = (max(122, -126));
                var_23 = (min(var_23, ((((37 >> (-7207313643280903645 + 7207313643280903668))) <= ((~((1 ? 2147483647 : (-127 - 1)))))))));
            }
        }
    }
    #pragma endscop
}
