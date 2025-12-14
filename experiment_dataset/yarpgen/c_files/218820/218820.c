/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = (min(var_15, (arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_16 ^= (!844424930131968);
                                arr_12 [8] [8] [i_3] [i_2] [8] [8] [8] = var_6;
                                arr_13 [i_4] [i_4] [19] [i_3] [i_4] = ((var_2 >= ((max(var_10, (arr_6 [i_3] [i_4]))))));
                                arr_14 [i_0] [i_0] [1] [i_3] [i_4] = (max(var_11, ((((min(var_1, var_7))) ? ((min(var_6, var_1))) : var_14))));
                            }
                        }
                    }
                    arr_15 [i_0] = ((+(min((arr_2 [i_0]), var_10))));
                    var_17 = (arr_10 [i_0] [i_1] [i_2] [i_2]);
                    arr_16 [i_1] = var_8;
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_18 = (min(var_18, ((((max(((var_10 ? var_13 : (arr_19 [23]))), var_10)) / ((min(657412473, (((4294967295 ? var_13 : -68)))))))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {

                        for (int i_9 = 1; i_9 < 22;i_9 += 1)
                        {
                            var_19 = ((!(arr_17 [i_9 - 1])));
                            arr_31 [i_5] [i_8] [i_7] [i_7] [i_7] [i_7] = (((-32767 - 1) * 1));
                            var_20 = (arr_18 [18]);
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_21 &= -12;
                            arr_34 [i_5] [i_6] [15] [i_8] = (~var_9);
                            var_22 = (min(var_22, 179));
                        }
                        for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
                        {
                            arr_37 [i_8] [i_11] [18] [i_7] [i_6] [i_6] [i_8] = 511;
                            var_23 *= (((arr_35 [i_5] [i_6] [i_7] [i_5]) ? 35155 : (arr_20 [13] [13] [20])));
                            var_24 = (min(var_24, (arr_20 [10] [10] [i_8])));
                        }
                        for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
                        {
                            var_25 = -511;
                            var_26 = (min(var_26, (((var_14 >= (arr_39 [i_12] [i_8] [i_7] [i_6] [1]))))));
                        }
                        var_27 = (min(var_27, (((4294967295 ? 844424930131977 : -18)))));
                    }
                    var_28 = (min(123, (((arr_23 [i_5] [i_5]) ? (~var_12) : ((~(arr_40 [i_5] [2] [i_6] [i_6] [6])))))));
                    var_29 += var_10;
                }
            }
        }
    }
    var_30 &= var_6;
    #pragma endscop
}
