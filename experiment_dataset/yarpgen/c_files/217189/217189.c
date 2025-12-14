/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, ((min((~186), 87)))));
                    var_14 = ((((~((max(102, 255))))) & ((min(7, 197)))));
                    var_15 = (max(var_15, (min(136, 77))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_1] [i_3] [1] = (min(-76, (max(((min(227, 55))), (~244)))));
                                arr_14 [i_2] [i_2] = max(200, (((63 <= (~240)))));
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
    {
        var_16 ^= 248;
        var_17 = (min(var_17, (190 > 90)));
        arr_17 [i_5] [i_5] &= (55 != 183);

        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            var_18 = (!184);
            arr_20 [i_5] [i_5] [i_5] = (98 / 200);
            var_19 = 55;
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
    {
        var_20 -= -158;

        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            arr_25 [i_7] [i_7] [i_8] = 227;
            arr_26 [i_7] [i_8] [i_7] = (2 * 0);
        }
        for (int i_9 = 2; i_9 < 18;i_9 += 1)
        {
            var_21 = (!201);
            var_22 &= (!250);
            arr_29 [i_7] = (((90 / 98) / 158));
        }
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            var_23 = (min(var_23, (7 && 0)));
            var_24 = (min(var_24, 106));
            var_25 = (76 / 57);
        }
    }
    for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
    {
        var_26 = (min(var_26, ((((max(-230, 200)) ^ (!212))))));
        /* LoopNest 2 */
        for (int i_12 = 2; i_12 < 18;i_12 += 1)
        {
            for (int i_13 = 4; i_13 < 18;i_13 += 1)
            {
                {
                    arr_41 [i_11] [i_13 - 2] &= (((min(78, 77))));
                    var_27 &= 246;
                    var_28 |= (min(((min(240, 54))), -33));
                }
            }
        }
    }
    #pragma endscop
}
