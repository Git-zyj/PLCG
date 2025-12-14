/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((61453659 ? -1210479857 : var_3))) ? ((14268994730594346373 ? var_14 : var_2)) : ((var_4 ? var_12 : var_10)))));
    var_19 = (((min(((min(var_17, 6))), ((var_2 ? var_9 : var_2)))) >= 80));
    var_20 ^= ((-(((var_12 && 4177749343115205264) + var_1))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] = ((~(~4177749343115205242)));
                    arr_9 [i_0] [i_0] [i_0] [i_2] = ((var_11 ? -var_15 : ((-var_3 ? ((1 ? var_13 : var_3)) : (max(-5693104688619817628, var_3))))));
                }
            }
        }
    }
    #pragma endscop
}
