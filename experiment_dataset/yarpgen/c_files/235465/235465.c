/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    var_15 = var_7;
    var_16 = ((((min(var_8, (var_4 | var_9)))) ? -8468 : (~var_6)));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_2 [12] |= 1;

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_17 += ((248 ? (arr_5 [i_0 + 2] [i_0 + 1]) : ((536870911 ? var_4 : ((105 ? 8 : 105))))));
            var_18 |= var_0;

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {

                /* vectorizable */
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    var_19 = (arr_7 [i_0 - 2] [i_1] [i_0 - 2] [i_3 + 1]);
                    arr_14 [i_0] [8] [i_0] = (arr_9 [i_0] [1] [1]);
                    var_20 -= (!(((95 ? -14 : 8))));
                }
                /* vectorizable */
                for (int i_4 = 2; i_4 < 12;i_4 += 1)
                {
                    arr_17 [3] [i_1] [3] [i_0] [1] = (((-9 ^ (arr_12 [2] [i_2] [i_1] [1]))));
                    var_21 += (((arr_6 [i_0] [i_0 - 1] [i_0 + 1] [i_4 - 2]) >> (((arr_8 [6] [i_1] [0]) - 1294584696))));
                }
                var_22 = (min((arr_13 [i_0] [i_1] [i_1]), 45));
            }
            var_23 |= (max(1, 31776));
        }
        var_24 = ((1 ? ((248 ? var_1 : (arr_13 [i_0] [i_0 - 1] [i_0]))) : ((var_6 ? (arr_13 [i_0] [11] [i_0 + 1]) : var_4))));
        var_25 += var_11;
        var_26 = ((var_3 + ((((max(21, -31777))) ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (((~(arr_7 [i_0] [11] [i_0] [i_0 - 2]))))))));
    }
    var_27 = var_12;
    #pragma endscop
}
