/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 *= (max((((-25 ? 36 : -42))), ((var_6 ? 25 : var_2))));
        arr_3 [i_0] = (((((max((min(-47, 47)), (min(25, -47)))))) * (((var_2 < var_1) ? ((25 ? -26 : var_2)) : (max(var_0, 47))))));

        /* vectorizable */
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            arr_8 [i_1] [i_1] = var_4;
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        {
                            arr_15 [i_3] [i_1 - 4] [i_3] [i_3] [i_4] [i_1] [i_2] = (40 / var_2);
                            arr_16 [i_1] [i_1] [i_1] = (-26 / 47);
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            var_14 ^= (min(25, ((((var_0 ? -74 : var_10))))));
            var_15 *= ((((40 ? var_12 : 33)) * ((26 ? 46 : -26))));
            arr_21 [i_5] = ((-var_5 ? ((min((33 != var_8), 33))) : ((var_1 ? -25 : var_9))));
            arr_22 [i_0] = (min(((-((24 ? 33 : -31)))), 47));
        }
        arr_23 [i_0] = (max((((-8 + ((min(47, var_9)))))), (((26 > 33) ? (var_2 - 41) : (((-41 ? -23 : var_9)))))));
    }
    var_16 = var_0;
    #pragma endscop
}
