/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (4252 & var_0);

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_21 = -var_15;
        arr_3 [i_0] = (((var_9 < 4294967280) ? ((~(max(3, 11217345806997966019)))) : var_14));
        var_22 = 11109;
    }
    for (int i_1 = 4; i_1 < 20;i_1 += 1)
    {
        var_23 = (~-1718525968);

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                var_24 = ((((((((var_7 ? -14961 : -16))) ? (!var_4) : (!var_19)))) | (min((!var_12), ((14348789747244612492 ? var_7 : 1855755607))))));
                arr_12 [i_3] [i_2] [i_1] = (min(var_3, (-3851 / var_17)));
                arr_13 [i_1] [i_1] |= 23;
            }
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                var_25 = ((!((((var_7 ? var_19 : var_7))))));
                var_26 = ((~((var_12 ? var_3 : var_17))));
            }
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_27 = -1718525968;
                            arr_24 [i_7] [i_2] [i_2] [i_1] = (max(((min(var_1, var_8))), (~var_19)));
                        }
                    }
                }
            }
            arr_25 [i_2] [i_2] = ((((min(var_7, -42))) ? (((!((min(81, var_3)))))) : (~-125)));
        }
    }
    for (int i_8 = 1; i_8 < 19;i_8 += 1)
    {
        var_28 = (~var_2);
        arr_29 [i_8] = ((((!(!var_3))) ? var_13 : (min(var_14, 9799556849495939114))));
        var_29 &= var_16;
    }
    /* vectorizable */
    for (int i_9 = 4; i_9 < 11;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 9;i_11 += 1)
            {
                {
                    arr_40 [i_11 - 1] [i_11] [i_11] [i_9 - 3] = var_11;

                    for (int i_12 = 1; i_12 < 11;i_12 += 1)
                    {

                        for (int i_13 = 4; i_13 < 9;i_13 += 1)
                        {
                            arr_47 [i_13 - 2] [i_10] [i_9] [i_10] [i_9] |= (114 == 95619932904508183);
                            arr_48 [i_12] [i_12] [i_11] [i_11] [i_10] [i_9] = (!var_14);
                            var_30 ^= ((var_8 * (!var_11)));
                        }
                        arr_49 [i_11] [i_11] [i_11 + 3] [i_11] [4] [i_11] = var_16;
                        arr_50 [i_11] [i_11] [i_10] [i_11] = (~4294967293);
                    }
                }
            }
        }
        arr_51 [i_9] [i_9] = (~var_10);
    }
    var_31 = ((min(32767, (var_11 > var_0))));
    var_32 = var_2;
    #pragma endscop
}
