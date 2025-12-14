/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= ((+(((var_11 + 9223372036854775807) >> (-9205815131630328947 - 9240928942079222637)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (9205815131630328977 && -5329648803720568102);
        var_14 = var_11;
        var_15 = (min(var_15, (((!((min(var_3, 9240928942079222661))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, var_6));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 = ((-(min(2264060634, (min(-6056300144727870833, 4123168604160))))));
                                var_18 = (((min(9240928942079222638, -5329648803720568102))) ? (4123168604160 % -1) : -var_4);
                                arr_13 [i_1] [3] [i_4] [i_4] = var_5;
                                var_19 = (max((-3 || -4123168604167), 9205815131630328931));
                            }
                        }
                    }
                    var_20 -= ((-5386484769897803410 ? 4123168604159 : (1048568 * -5)));
                    var_21 ^= 4123168604159;
                }
            }
        }
        arr_14 [i_0] = (min((max((max(var_3, 9205815131630328947)), var_11)), (((max(-4123168604180, var_6))))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 22;i_5 += 1)
    {
        arr_17 [10] |= var_3;

        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            var_22 = (max(var_22, (((4123168604159 ? var_8 : var_3)))));
            var_23 ^= var_8;
            arr_21 [4] = var_8;
            arr_22 [i_6] = (!var_11);
        }
        /* LoopNest 3 */
        for (int i_7 = 3; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    {
                        var_24 -= (!var_12);
                        arr_30 [i_5] [i_7] [i_9] = 241;
                        var_25 = (max(var_25, (((var_2 >> (var_6 - 43790))))));
                        var_26 = ((-((9205815131630328975 >> (var_5 - 8154436909712056369)))));
                        arr_31 [i_5] [i_5] [1] |= ((var_0 ? var_9 : (2109599794 / var_9)));
                    }
                }
            }
        }
        var_27 -= (!237);
    }
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        arr_36 [i_10] = ((-(((-1 != (max(var_0, -5329648803720568102)))))));
        var_28 = (max(var_28, var_1));
        arr_37 [i_10] = (max((~var_3), ((max(var_8, var_3)))));
        /* LoopNest 3 */
        for (int i_11 = 3; i_11 < 10;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 10;i_13 += 1)
                {
                    {
                        arr_47 [i_13] [i_12] [i_11] = (min(4123168604164, 4123168604146));
                        var_29 |= max((((var_2 ^ (-4123168604159 && var_9)))), ((var_3 ? var_10 : var_0)));
                    }
                }
            }
        }
    }
    var_30 = (max(15815611446630326490, -4123168604165));
    var_31 = (min((min((((0 ? 238 : 14))), (min(var_12, var_8)))), (min((!9205815131630328947), (max(var_12, var_1))))));
    #pragma endscop
}
