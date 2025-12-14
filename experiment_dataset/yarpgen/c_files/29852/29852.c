/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = (max(var_19, (((-1 ? 10163 : -108)))));
        var_20 = ((32767 ? 38662 : 22));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_21 = (max(var_21, (((21083 ? 0 : 29044)))));
        var_22 = ((0 ? 54485 : 0));
        var_23 = ((9799 ? 23071 : 253));
        var_24 = ((1 ? 195 : 86));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 9;i_2 += 1) /* same iter space */
    {
        arr_7 [10] = ((103 ? -16 : 255));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_25 = ((129 ? 0 : 21739));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_19 [9] [i_3] [i_6] [9] |= (((((2644 ? 64 : 31422))) ? 0 : -118));
                                var_26 = ((63 ? 201 : 63));
                                var_27 ^= 4690;
                                arr_20 [i_2] = ((6329 ? -106 : 19753));
                                arr_21 [i_5] = ((1930 ? -31 : (-127 - 1)));
                            }
                        }
                    }
                }
            }
        }
        var_28 = (max(var_28, 44));
    }
    for (int i_7 = 3; i_7 < 9;i_7 += 1) /* same iter space */
    {
        var_29 = (max(((9 ? 14353 : 85)), ((132 ? 56 : 37252))));
        arr_24 [i_7] = (max(((max(-16, 211))), 9086));
        var_30 = 65125;
    }
    var_31 = 50465;
    #pragma endscop
}
