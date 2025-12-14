/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_10 += (!1661064586);
                var_11 = (max(var_11, (((((-(arr_3 [i_1 + 1] [2]))) >= (min(-912763793, (var_1 >= 1))))))));
                var_12 = (arr_3 [i_0] [10]);
                arr_5 [i_1] = -912763821;
            }
        }
    }
    var_13 += 15242;
    var_14 = -912763821;
    #pragma endscop
}
