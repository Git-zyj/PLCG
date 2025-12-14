/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_18 = ((!(arr_1 [i_0 + 1])));
        arr_3 [i_0 - 2] = (((var_11 + 2147483647) << (var_6 - 46)));
        var_19 = (max(var_19, (arr_0 [i_0] [i_0])));
        arr_4 [i_0] = (((arr_2 [i_0] [0]) || 21885));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_20 = (max(var_20, var_2));
                        arr_11 [i_1] = var_5;
                        var_21 &= (((3705719716 ? 40290 : 1)));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_22 = (min(var_22, (((~((4063232 ? -1 : 65535)))))));
        var_23 = ((~((0 ? -32758 : 1804266108935479351))));
    }
    var_24 = var_8;
    var_25 = (min(19414, 25245));
    #pragma endscop
}
