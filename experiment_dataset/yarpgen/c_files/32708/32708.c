/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((((((14567579915485117624 ? 10844 : var_12))) ? (var_1 != 7399492860613335419) : var_5)), (((max(var_14, 255))))));
    var_19 -= ((((var_9 ? ((var_5 ? var_2 : 255)) : var_0)) | var_6));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = ((((min(1, (max(1781757709, (arr_9 [9])))))) ? 249 : 1));
                    arr_10 [i_0] [i_1] [4] [i_0] = (((var_6 / ((98 ? (arr_2 [i_0] [i_0]) : 1)))) * ((-var_0 ? var_11 : ((34359738367 ? (arr_1 [i_1]) : 39)))));
                }
            }
        }
    }
    #pragma endscop
}
