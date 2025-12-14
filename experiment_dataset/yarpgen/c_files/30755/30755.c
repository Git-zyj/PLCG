/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= var_5;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                var_20 = (arr_2 [i_1 - 2]);
                var_21 *= var_5;
                var_22 = var_7;
            }
            var_23 = var_4;
        }
        arr_7 [i_0] [i_0] = var_14;
        arr_8 [21] = var_9;
    }
    #pragma endscop
}
