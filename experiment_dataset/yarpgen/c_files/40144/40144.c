/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((var_1 ? -var_8 : var_2));

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_13 ^= ((var_3 ? var_6 : var_1));
                            var_14 = (var_11 ? var_0 : var_12);
                        }
                        for (int i_5 = 2; i_5 < 12;i_5 += 1)
                        {
                            var_15 = ((2688005301 ? 1 : 3899565674));
                            var_16 = ((var_5 ? var_1 : var_0));
                            var_17 = (((var_2 ? var_9 : var_5)));
                            var_18 = var_6;
                        }

                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            var_19 = (max(var_19, (((var_6 ? var_5 : var_3)))));
                            var_20 ^= (~var_5);
                        }
                    }
                }
            }
            var_21 *= ((var_12 ? var_5 : var_5));
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            arr_22 [i_0] [i_7] [i_7] |= -var_2;
            var_22 = ((var_0 ? var_7 : var_7));
            arr_23 [i_0] [i_0] [i_7] = (!var_5);
        }
    }
    for (int i_8 = 3; i_8 < 16;i_8 += 1)
    {
        arr_26 [i_8] = ((-13862 ? -1089131628932242215 : -13862));
        var_23 = (((!var_4) ? ((var_0 ? var_2 : var_9)) : var_5));
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 10;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 9;i_10 += 1)
        {
            {
                var_24 = ((((((((var_8 ? var_1 : var_1))) ? ((var_6 ? var_10 : var_11)) : (((var_8 ? var_5 : var_0)))))) ? var_11 : ((var_4 ? var_2 : var_5))));
                arr_32 [i_10] = ((~(!var_12)));
                arr_33 [i_10] = var_3;
                var_25 = ((!(~var_12)));
                arr_34 [i_10] = var_12;
            }
        }
    }
    #pragma endscop
}
