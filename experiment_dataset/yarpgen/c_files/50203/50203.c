/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (((min(2147483647, 9350)) << (((((min(-1943630600, -20748)) + 1943630626)) - 26))))));
                var_14 = ((~((var_4 % (min(var_3, var_7))))));
                var_15 = var_8;
            }
        }
    }

    for (int i_2 = 3; i_2 < 17;i_2 += 1)
    {
        var_16 = (min(var_16, (((-32746 <= (((max(var_10, var_7)) % (max(var_5, var_0)))))))));
        var_17 &= (max((min(2147483635, 28367)), -28380));
        arr_8 [0] = (((min(9753, 6393066651035082525)) + (253952 == var_9)));
    }
    for (int i_3 = 2; i_3 < 11;i_3 += 1)
    {
        arr_12 [i_3] = (-32744 * -4559);
        var_18 = ((16863245588699922885 > 28385) ? (~var_3) : -253945);
        var_19 = (min((max(-13932, 2049702151882721902)), (var_12 > -28360)));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_20 = -28365;
        var_21 = (min(var_21, 70366596694016));
    }
    #pragma endscop
}
