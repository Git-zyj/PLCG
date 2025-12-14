/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= ((var_12 % ((1135899668 ? -1722772811 : -16522))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_16 = (max((((((0 ? -18245 : (arr_1 [i_0])))) ? 1 : 1135899651)), (arr_0 [i_0 - 1])));

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            arr_5 [i_1] [i_0] [i_0] &= 19218;
            arr_6 [i_0] = (((((-34 ? ((250 ? (arr_3 [i_1] [i_0]) : -1135899671)) : -1135899651))) ? 19218 : ((1135899651 ? 1722772829 : var_1))));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_1] [i_0] [15] = (((((max(1, (arr_4 [i_2] [i_1])))) ? (var_4 & var_10) : ((1 ? 15631497318440188600 : 1131985987)))));
                        arr_13 [i_0] [i_0] &= var_13;

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_17 = arr_10 [i_0] [i_0] [i_2] [i_3] [i_1];
                            arr_17 [i_0 - 1] [i_1] [i_2] [i_3 + 3] [i_4] = (max((max(9, 21299)), -1));
                            arr_18 [i_0 + 2] [i_1] [i_2] [i_2] [1] [i_3] [i_4] = ((((0 ? (((11663141438444239314 ? var_8 : (arr_11 [i_0] [i_1] [i_2])))) : ((var_8 ? 1 : 1919045454152635021)))) << 1));
                        }
                    }
                }
            }
            var_18 = 22506;
            arr_19 [i_0] [i_0] [i_1] = (max(((var_1 / (((4294967295 ? var_10 : (arr_15 [i_0] [i_0 + 2] [i_1] [i_1] [i_1] [i_1])))))), -7943120988104379589));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_19 = var_7;
            arr_22 [i_0] = 41123;
            var_20 = (((~((65535 ? 361855681 : 112)))));

            for (int i_6 = 3; i_6 < 15;i_6 += 1)
            {
                arr_26 [i_6] [i_6] [i_6] [i_6] = var_8;
                var_21 ^= 1135899650;
            }
        }
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        var_22 = var_4;
        var_23 = 1490360408;
        var_24 = 3598;
        var_25 = arr_9 [i_7];
    }
    #pragma endscop
}
