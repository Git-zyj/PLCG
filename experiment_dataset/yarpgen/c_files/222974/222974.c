/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_20 = (max(var_20, var_5));
        var_21 = min(((-1 ? 0 : -6)), -4);
        arr_3 [i_0] [i_0] = var_2;
    }
    var_22 = (max(var_22, (((min(((-5 ? 78 : var_0)), var_3))))));

    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_23 = (min((max((arr_4 [i_1]), (-8238 + -18))), (min((((-(arr_5 [i_1])))), (-29 & 0)))));
        var_24 = (arr_5 [i_1]);
        var_25 = 15;
        arr_6 [i_1] = ((-(((0 / -37) * ((max(9, 2240)))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_26 |= -21;
        arr_9 [i_2] = (((arr_8 [i_2]) + (-1 < -1)));

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_27 = ((14704753469781124195 ? (17324 && -1) : 5916807620840219464));
            var_28 = (((arr_8 [i_2]) + ((var_10 ? var_14 : 4095))));
        }
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            var_29 ^= ((var_8 ? var_15 : 701247892));

            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                var_30 = var_8;
                var_31 = (-32767 - 1);
            }
            arr_19 [i_2] [i_4] [i_4] = (((arr_17 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4]) < ((var_9 ? 0 : 6234145947780210318))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        var_32 = ((-8975549871889832019 < (arr_4 [i_4 - 1])));
                        var_33 = (max(var_33, (((-((-(arr_11 [12]))))))));
                        arr_27 [i_7] [i_6] [6] [i_2] = (((arr_18 [i_4 + 3] [i_4 + 1]) + var_2));

                        for (int i_8 = 2; i_8 < 13;i_8 += 1)
                        {
                            arr_32 [i_2] [5] [7] [i_4] [7] [i_8] &= (((((var_10 ? 0 : var_7))) ? ((-4018115968909063497 ? 4018115968909063487 : 2097151)) : -126));
                            var_34 = ((arr_2 [i_2]) ? var_17 : var_14);
                        }
                    }
                }
            }
        }
        arr_33 [i_2] [i_2] = (18446744073709551613 * 82);
        arr_34 [12] [i_2] = (~8975549871889832012);
    }
    #pragma endscop
}
