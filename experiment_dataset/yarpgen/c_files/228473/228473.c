/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 8;i_4 += 1)
                    {
                        {
                            var_20 = (max(var_20, ((var_15 ? var_12 : var_15))));
                            var_21 = (min(var_21, var_5));
                        }
                    }
                }
            }
            arr_11 [i_1] = var_17;
            var_22 = ((var_17 ? var_10 : var_1));
            arr_12 [i_1] = ((var_2 ? var_2 : (~var_5)));
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 8;i_6 += 1)
            {
                {
                    arr_18 [i_0] [i_5] [i_6] = (min(var_8, ((var_8 ? -var_8 : (max(var_11, var_14))))));
                    arr_19 [i_0] [i_5] [i_0] [i_6] = var_14;

                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 8;i_7 += 1)
                    {
                        var_23 = ((var_19 ? var_5 : var_13));
                        var_24 = (((((-679674373 ? 1 : 4294967295))) ? (!1823576321) : (!var_19)));
                        var_25 = (max(var_25, ((var_17 ? (((var_15 ? var_13 : var_5))) : var_1))));
                    }
                }
            }
        }
        var_26 *= var_15;
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        var_27 = (max(var_27, ((var_16 ? (~var_5) : ((var_17 ? var_7 : var_5))))));

        for (int i_9 = 1; i_9 < 18;i_9 += 1)
        {
            var_28 = (((((var_7 ? var_14 : var_10))) ? var_19 : -var_15));
            var_29 |= (!var_3);
        }
        for (int i_10 = 2; i_10 < 16;i_10 += 1)
        {
            var_30 = var_8;
            arr_29 [i_8] [i_8] [i_8] = ((var_2 ? var_14 : ((var_15 ? var_16 : var_2))));
        }
        arr_30 [i_8] [i_8] = (~((var_7 ? var_8 : var_17)));
        arr_31 [i_8] = var_5;
    }
    var_31 = (min(var_31, var_19));
    var_32 ^= var_13;
    var_33 = var_13;
    #pragma endscop
}
