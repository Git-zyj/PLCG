/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_12 [i_2] = (var_13 >= var_3);
                        arr_13 [i_0] [i_0 + 2] [i_0 - 4] [i_0 - 2] = 0;
                    }
                }
            }
        }
        var_14 = (min(var_14, -0));

        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        arr_21 [i_5] [i_5] [i_5 - 1] [i_5] [i_5] = (arr_10 [i_0 - 1] [i_4] [i_5 - 1] [i_6] [i_0 + 1]);
                        arr_22 [i_0] [i_4] [i_5] [i_4] = -var_0;
                        arr_23 [i_0 - 3] [i_0 - 3] [i_0] [i_0] [i_0 - 3] = (arr_15 [i_0] [i_0] [2]);
                    }
                }
            }
            var_15 ^= (((((((var_13 && (arr_3 [i_4]))) ? (var_3 && var_2) : (!414611724277883510)))) ? (arr_8 [i_0] [i_0 - 1] [i_4] [i_4]) : var_4));
            var_16 = max((634401930 / 17574556545057369641), ((min(-41, 0))));
        }
        /* vectorizable */
        for (int i_7 = 3; i_7 < 18;i_7 += 1)
        {
            var_17 = (((arr_8 [i_0 - 1] [i_7] [i_7] [i_0 - 1]) / (~var_5)));
            var_18 += (15804907181028894696 ^ -88);
        }
    }
    for (int i_8 = 3; i_8 < 19;i_8 += 1)
    {
        var_19 = var_4;
        var_20 = (min(var_20, ((((-5259 ? 0 : (-32767 - 1)))))));
        arr_30 [i_8] = ((~(18446744073709551615 <= 3575365858)));
    }
    var_21 = (((min((min(var_0, var_2)), (865354566 + 1))) >> (var_1 + 34588385909729546)));
    #pragma endscop
}
