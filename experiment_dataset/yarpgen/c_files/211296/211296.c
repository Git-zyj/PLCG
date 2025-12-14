/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_10 * (~var_3)));
    var_17 = (min(var_17, ((min(48680, (var_7 ^ var_6))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = var_10;
        var_18 -= (max(var_9, (arr_0 [i_0])));
        var_19 = (max(var_19, 16008429589991490270));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_5 [i_1] = ((~(!122)));

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 9;i_3 += 1)
            {
                arr_11 [i_1] [i_3] [i_3 + 1] = ((-var_15 ? (((arr_4 [i_3 + 1]) + (arr_4 [i_3 + 1]))) : (((((~var_15) == (max(var_2, (arr_9 [i_3] [i_2] [i_3] [9])))))))));
                arr_12 [i_3] [i_1] [i_1] [i_3] = (((((((max(117, 1888598306411985085))) ? 2167336920909608242 : (arr_7 [i_3 + 1] [i_3 - 2] [i_3 - 1])))) ? (((~(min(609041492, 116))))) : (((arr_3 [i_3 - 1] [i_3]) * var_13))));
            }
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                arr_17 [i_4] = (max(var_0, var_9));
                var_20 = -116;
                var_21 = var_0;
            }
            var_22 = ((((max(((max((arr_8 [i_2]), var_2))), 7412816652892332323))) * (max(((max(var_0, (arr_6 [i_1] [i_2])))), (0 + 10509748838025944317)))));
            arr_18 [i_2] [i_1] = ((106 ? var_9 : var_10));
            var_23 += ((((((var_9 ? (arr_4 [0]) : 7412816652892332323)) == -7)) ? 1837889476 : ((var_6 ? 18023804750335921058 : var_8))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            arr_21 [i_5] = var_13;

            for (int i_6 = 1; i_6 < 7;i_6 += 1)
            {
                var_24 = var_0;
                arr_26 [i_6] [i_6 + 3] [0] [1] &= var_10;
                arr_27 [i_1] [i_5] [i_5] = (((arr_22 [8] [8] [i_6 - 1]) ^ var_7));
            }
            var_25 = (((arr_23 [8] [i_1] [i_1] [i_1]) << (var_10 - 3757)));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            arr_30 [i_7] = (((64503 ^ 1029) != var_15));
            var_26 = (((var_9 ? var_14 : var_7)));
            var_27 = var_10;
            arr_31 [3] [i_7] = -var_2;
            var_28 = (arr_29 [6] [i_1] [6]);
        }
        arr_32 [3] = (arr_28 [i_1]);
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        var_29 += ((-((-116 ? 4895488703070993022 : 4485015156210580631))));
        var_30 = (min(var_30, (!var_10)));
        arr_35 [i_8] = ((-4485015156210580636 + (~-7)));
        arr_36 [i_8] = var_8;
    }
    #pragma endscop
}
