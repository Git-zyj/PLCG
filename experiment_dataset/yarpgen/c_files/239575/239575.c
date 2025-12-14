/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_18 = (-818 >= -818);
                arr_6 [i_0] [i_1] [i_0 - 2] = (arr_0 [i_0 - 3]);
            }
        }
    }
    var_19 &= 9223372036854775807;

    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = -831;
        arr_10 [10] |= -25;
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_20 &= ((!18713) - (var_15 < 46823));
        arr_13 [i_3] [i_3] = (((-1411297496 - 13926) < 0));
        var_21 = 46279;

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_22 -= -2;

            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                var_23 -= (arr_11 [i_3]);
                arr_20 [0] [18] [0] [i_5] = (~(min(((-840 ^ (arr_18 [i_3]))), (((var_1 ^ (arr_1 [i_3])))))));
                arr_21 [i_3] [12] [11] = var_1;

                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    arr_26 [i_3 - 1] [i_3 - 1] [i_3 - 1] [21] = -20;
                    var_24 += 0;
                }
            }
            var_25 = (22849 | var_12);
        }
        /* vectorizable */
        for (int i_7 = 1; i_7 < 20;i_7 += 1)
        {

            for (int i_8 = 1; i_8 < 20;i_8 += 1)
            {
                arr_32 [0] [0] [3] [3] = (arr_14 [i_7]);
                arr_33 [i_3] = (arr_17 [i_7 + 1] [i_7 - 1] [i_7]);
            }
            var_26 *= 13822;
        }
    }
    #pragma endscop
}
