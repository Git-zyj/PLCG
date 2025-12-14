/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_3 [5] [i_0] = ((-(max((((var_8 ? -77 : var_13))), 4294967295))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 = ((((max((min((arr_0 [i_0 - 3]), var_1)), 1))) ? 46 : 1));
                    arr_9 [i_0] = 15;
                }
            }
        }
    }
    var_15 = (var_13 ? var_9 : var_2);
    #pragma endscop
}
