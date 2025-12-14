/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = ((8388608 % (max(((1441107604 ? var_1 : -8388609)), (((-2147483647 - 1) | 0))))));
        arr_3 [i_0] [i_0] = 10194672343866383530;
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        var_17 = 8252071729843168058;
        var_18 = (min(36, (-2147483647 - 1)));
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 14;i_4 += 1)
            {
                {
                    arr_13 [i_2 - 1] [i_3] [i_4 - 3] [i_2] = (((((((8252071729843168085 ? -1673178728 : -8388620))) ? (((arr_12 [i_2 - 1] [i_2] [i_3] [i_4 - 2]) ? var_13 : 31666)) : 736905811)) | ((8388620 ? 14 : ((-10890 ? 144 : 5))))));
                    var_19 = arr_1 [i_3] [i_4];
                }
            }
        }
    }
    var_20 &= var_1;
    var_21 = (min(534095268, 3));
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            {
                var_22 = (max(var_22, (198 / 8388609)));
                var_23 *= (~8388609);
            }
        }
    }
    #pragma endscop
}
