/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(-var_8, (min(var_0, (~640489470)))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            arr_14 [i_0] [i_0] [i_2] [4] [i_0] [i_0] |= ((-((max(var_3, var_0)))));
                            arr_15 [i_2] [i_2] [i_2] [i_2] [i_0] [i_2] = 96;
                        }
                        var_13 = (min(var_13, ((min(((var_11 ? var_5 : var_8)), (((var_1 ? var_9 : var_1))))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 10;i_6 += 1)
            {
                {
                    var_14 = (max(((33884 ? -9143557200307859546 : 33884)), (!31647)));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 8;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 8;i_8 += 1)
                        {
                            {
                                arr_26 [i_0] [i_8 - 1] [i_0] [i_0] [i_6] = ((max(var_4, var_9)));
                                arr_27 [i_7] [i_7] [i_0] [i_7] = (max((min(var_1, var_1)), (((-1447410943 ? 31648 : 1)))));
                                arr_28 [0] [i_5] [i_5] [i_0] [i_8 - 1] = ((~(min((~var_6), var_9))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 9;i_10 += 1)
                        {
                            {
                                var_15 = var_3;
                                var_16 -= (!(((-1 ? -3740382808506866193 : 1447410943))));
                                arr_34 [i_0] [i_0] [i_6 - 2] [i_6 - 2] [i_9 - 3] = (max(var_5, -640489481));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 12;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_13 = 1; i_13 < 10;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 11;i_14 += 1)
                    {
                        for (int i_15 = 3; i_15 < 11;i_15 += 1)
                        {
                            {
                                arr_50 [i_11] [i_13] [i_11] [i_11] [i_11] [i_11] = 3385270851;
                                var_17 |= (max(((((max(var_5, var_7))) ? (((min(var_2, var_3)))) : (max(1564635239339724628, 65535)))), (((!((max(var_0, var_6))))))));
                                var_18 = (min(var_18, ((min(58163, 17176521329772253424)))));
                                var_19 = 1113402338;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 12;i_17 += 1)
                    {
                        {
                            var_20 = var_5;

                            for (int i_18 = 1; i_18 < 9;i_18 += 1)
                            {
                                var_21 = ((-(max(var_9, var_0))));
                                arr_58 [i_17] [i_17] [i_16] [i_12] [i_12] [i_11] = (min((~var_0), var_9));
                            }
                            for (int i_19 = 0; i_19 < 12;i_19 += 1)
                            {
                                var_22 = var_9;
                                var_23 = (max((((var_0 ? var_6 : var_3))), (min(var_8, var_10))));
                            }
                            var_24 = var_4;
                            var_25 = ((max(((var_8 ? var_10 : var_0), 21625))));
                        }
                    }
                }
                arr_61 [i_11] [i_12] = ((~(~var_0)));
                var_26 ^= (((((~((max(var_2, var_6)))))) ? ((2100472439 ? -544249912 : 839737784)) : var_6));
            }
        }
    }
    #pragma endscop
}
