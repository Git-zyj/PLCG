/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_12 = (min(var_12, (1 < 12249)));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    {
                        var_13 = (~((~(((arr_2 [i_0] [i_1 - 1]) | var_9)))));
                        arr_13 [i_1] [i_1] [1] [1] = (max((-7965676037715504446 > -1), var_0));
                    }
                }
            }
        }
        var_14 = (((var_1 + var_9) == -var_7));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
    {
        var_15 = (min(var_15, (((var_4 == (arr_10 [i_4] [i_4] [i_4] [i_4]))))));
        var_16 = (max(var_16, (((-(arr_10 [i_4] [i_4] [i_4] [i_4]))))));
        var_17 += (~var_8);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                {

                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        arr_27 [i_6] = 1;
                        var_18 = (((arr_17 [i_6 - 1] [i_6 - 1]) ^ var_6));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_19 = (1 % var_3);
                                arr_33 [i_4] [i_4] [i_4] [i_4] [i_6] [i_6] [1] = (-7156337929354219897 + 32109);
                                arr_34 [i_6] = (((-8151350564162680089 + 9223372036854775807) << (7325268308625132515 - 7325268308625132515)));
                                var_20 = 1;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_21 ^= (arr_35 [i_6 - 1] [i_10 - 1] [i_10 + 3] [i_10] [i_10 + 2] [i_10]);
                                var_22 = (max(var_22, (((var_6 - (arr_36 [i_10 + 2] [i_10] [i_10 + 2] [i_10 + 1]))))));
                                arr_40 [8] [i_5] [0] [i_10] [i_5] [i_10] &= arr_25 [i_6 - 1] [i_6 - 1] [i_10 + 2] [i_10 + 1];
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 3; i_12 < 12;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 16;i_13 += 1)
                        {
                            {
                                var_23 |= (~9223372036854775807);
                                arr_45 [i_4] [i_5] [i_6] [i_12 + 2] [i_13] = 9223372036854775801;
                                var_24 &= (arr_26 [i_12] [i_4]);
                            }
                        }
                    }
                }
            }
        }
        var_25 -= var_4;
    }
    var_26 = (min(var_26, var_9));
    #pragma endscop
}
