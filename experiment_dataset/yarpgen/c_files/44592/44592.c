/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_12 = (min(var_12, ((((65535 >> ((24814 ? 0 : 8388607))))))));
                var_13 = 2;
                var_14 -= (-1178943494 & (1 >= -476042286));
                arr_5 [1] [i_1] [i_1] = (((-6484869478769306915 ? (~-1178943514) : (~1))));
                var_15 = (max(var_15, 99));
            }
        }
    }
    var_16 = 1178943508;
    var_17 = (((((6484869478769306914 ? 109 : -6484869478769306937) + var_5))));
    #pragma endscop
}
