/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((((!((min(var_8, var_4)))))), var_8));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 = (max(var_13, ((min(-36, 247)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_2] = ((-(max((!112), var_2))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, ((max(((min(var_9, var_0))), ((~(var_7 ^ var_6))))))));
                                var_15 = (min(var_15, ((((((2147483620 * (808142106 > -2147483620)))) ? (((((var_8 ? var_6 : var_0)) - (var_8 - var_4)))) : (((~var_6) | ((var_9 ? var_10 : var_2)))))))));
                            }
                        }
                    }
                    var_16 -= (((min(var_0, (min(var_4, var_2)))) ^ ((var_2 & (((max(var_1, var_3))))))));
                }
            }
        }

        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            arr_24 [i_0] [i_0] [i_0] = ((157720670614083856 << (((-797331865 + 797331906) - 39))));
            var_17 = ((((min(-2068185979242509411, ((min(var_10, var_4)))))) ? (~-157720670614083856) : (((~(min(var_2, var_9)))))));
        }
    }
    var_18 = (max(var_18, ((max(var_8, (min((((114 ? var_1 : 2740431073))), var_11)))))));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            {
                var_19 = (max((((var_2 ? var_5 : var_8))), (((~(var_8 + var_2))))));
                var_20 = var_5;
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 10;i_9 += 1)
                    {
                        {
                            var_21 = ((-0 + (var_8 % var_10)));
                            var_22 = ((-(var_8 * var_8)));
                            var_23 = ((min((~var_11), var_9)) ^ ((max((var_6 <= var_9), ((var_2 ? var_3 : var_7))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
