/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (((((((var_5 ? -4696843825259507522 : 1))) ? var_2 : var_2))) ? (((-4696843825259507522 - var_9) ? (max(-4696843825259507524, -4696843825259507524)) : var_7)) : (((4696843825259507521 | var_6) | var_5)));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = ((((((arr_2 [i_0]) | (1 | -4696843825259507524)))) ? (~-122) : var_1));
        var_14 *= ((!((max((2147483647 || -95), 94)))));
        var_15 = (~var_0);
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    {
                        var_16 *= (max(1, ((!((max(var_4, 0)))))));
                        var_17 += 4696843825259507521;
                    }
                }
            }
        }
    }
    var_18 = -1;
    var_19 = (min(var_19, var_8));
    #pragma endscop
}
