/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((min(78, 87)), (((var_8 > (var_18 || 3595940784))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1] [i_2] = ((123 ? var_7 : 185));
                    arr_7 [i_0] [i_2] [i_2] [i_2] = var_10;
                    arr_8 [i_0] [i_2] [i_2] = (161 <= -32756);
                }
            }
        }
    }
    var_20 = ((88 ? 14935468137761225777 : -32744));
    var_21 = var_15;
    #pragma endscop
}
