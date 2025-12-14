/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_15 += (((((arr_3 [i_1 + 2] [6]) ? 0 : var_5)) < 4853872976644777007));
                var_16 += ((0 ? (27487 + -1648627330) : 4294967273));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 += (max((((30 ? ((((var_8 + 2147483647) >> (8771372733048454230 - 8771372733048454217)))) : (min(var_0, 4294967273))))), ((min(-10072, (arr_13 [i_4] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_0]))))));
                                var_18 |= (((((6 & 0) ? (arr_13 [i_0 - 1] [i_1] [i_2] [i_3] [i_3] [i_3]) : (2412681487 >= -593121939))) / (min(-28, ((max((arr_1 [i_0 - 2]), 27500)))))));
                            }
                        }
                    }
                }
                var_19 = (min(var_19, var_14));
                var_20 -= (arr_10 [i_0] [i_0] [i_1 + 1] [i_1]);
            }
        }
    }
    var_21 = (min(var_21, (((((((var_13 ? var_5 : 4294967281))) ? ((9 ? var_2 : var_14)) : (1 - 4294967289))) >> (((max(262143, ((var_8 ? 3758096384 : var_5)))) - 3758096349))))));
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            {
                var_22 ^= 145;
                var_23 = (max(4294967273, 15535289879074255166));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 0;i_8 += 1)
        {
            {
                var_24 &= (13592871097064774609 << 28);
                arr_29 [7] [3] |= (arr_15 [i_7] [i_7] [12] [i_8] [i_8 + 1] [i_8 + 1]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 1;i_11 += 1)
            {
                {
                    var_25 &= -764;
                    var_26 = (max(var_26, -27487));
                    var_27 = (min(var_27, ((max((((10824980104462331292 + var_11) + 192570666)), (((((((!(arr_13 [i_9] [i_9] [i_10 - 1] [i_10] [i_9] [i_9]))))) <= (max(var_4, 764))))))))));
                }
            }
        }
    }
    #pragma endscop
}
