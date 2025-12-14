/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 += 27826;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        var_21 -= 1;
                        arr_10 [i_3] |= -2044581365;
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = 1682796358;
                        var_22 = (min(var_22, -139));
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_23 = -8323010859458766679;
                        arr_14 [i_0] [i_0] [i_2] [i_0] = 0;
                        var_24 = (min(var_24, 1091920597));
                        var_25 = 1;
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        arr_17 [i_5] [i_2] [i_2] [14] = (194544267 / 50);
                        arr_18 [i_2] = ((-8256053980882767240 | (-32767 - 1)));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_26 = (min(var_26, 118));
                        var_27 -= (2147483647 / 54922);
                        var_28 -= 1;
                        var_29 = 8256053980882767239;
                    }
                    var_30 = 1;
                    arr_21 [i_2] = (-8256053980882767231 && 1383145355);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                var_31 = 683;
                                var_32 = (!1);
                                var_33 *= 8245767077308549409;
                            }
                        }
                    }
                    arr_28 [i_0] [i_2] [i_0] [i_0] = -268435456;
                }
            }
        }
        var_34 = 683;
    }
    var_35 *= 1091920597;
    #pragma endscop
}
