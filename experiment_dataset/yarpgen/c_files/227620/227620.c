/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, (((-127 >= 117) & (134217727 == 3980948373)))));
                    arr_7 [i_0] [i_0] [i_2] [i_0 - 3] = 7;
                    var_15 = (min(-249, (min(231, (min(12350204985676645923, 249))))));
                }
            }
        }
    }
    var_16 = (((min(3, 18446744073709551615))));
    var_17 = (max(var_17, (((-((min(133, 4292870144))))))));
    #pragma endscop
}
