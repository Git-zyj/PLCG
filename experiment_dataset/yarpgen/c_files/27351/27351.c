/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_15 = ((~((~(~var_9)))));

        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = -var_14;

            /* vectorizable */
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                var_16 = (var_6 >= var_13);
                var_17 = 65534;
            }
        }
    }
    var_18 = ((+(((~90) ? 11004 : ((var_12 ? var_9 : var_10))))));
    var_19 = (min(var_13, (((0 ? var_4 : 11027)))));
    var_20 = max(((((var_1 ? -32176 : var_2)))), (max(10667, (((var_4 ? var_13 : 0))))));

    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_9 [i_3] = ((4294967295 ? (max(-var_4, (((arr_1 [i_3]) ? var_0 : 6075)))) : var_1));
        var_21 = ((!(arr_6 [4] [4] [i_3] [i_3])));
    }
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        var_22 = (max(var_22, 10667));
        var_23 = ((max(0, (arr_11 [i_4]))));
        arr_12 [i_4] [i_4] = (min(((max(var_11, 11007))), (((arr_11 [i_4]) - (!2823388197558629527)))));
        arr_13 [i_4] [i_4] = (((((!var_9) ? (~55968) : ((var_4 ? (arr_6 [i_4] [16] [16] [i_4 - 1]) : var_14)))) + -32184));
    }
    #pragma endscop
}
