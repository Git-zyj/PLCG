/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_5, 8597340862015828455));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = -8538688876054035964;
        var_14 = (((((1 ? (arr_1 [7] [7]) : 65023))) ? 2015461962 : ((((~(arr_3 [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1 - 3] [i_1] = 507341332;
        arr_9 [i_1] = (~250546736);
    }
    for (int i_2 = 3; i_2 < 14;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = (arr_3 [i_2 - 3]);

        /* vectorizable */
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                arr_21 [i_2 - 2] [i_2 - 2] [i_3] [i_4] = 25585;

                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    var_15 = ((0 ? 1 : 654012263223770267));
                    var_16 = ((((((-9223372036854775807 - 1) ? var_10 : -886219710128187952))) ? -8538688876054035961 : (arr_3 [i_4 - 1])));
                    arr_24 [i_2 - 3] [i_3 + 2] [i_3] = (~-33);
                }
                var_17 = -8;
                arr_25 [i_3] [i_3] [i_4] = 1;
            }
            arr_26 [i_2] [i_3] = -1;
        }
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 3; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 13;i_9 += 1)
                    {
                        {
                            var_18 = max(var_10, ((1 ? (-9223372036854775807 - 1) : 134)));
                            arr_37 [i_2] [i_2] [i_6] [i_2] [3] = (min(((min(-1, (max(-1725394842, 26447))))), ((18446744073709551615 - (arr_33 [i_6] [i_6 + 1] [i_6] [i_7 - 3] [i_7 - 3])))));
                            var_19 = (min(var_19, 2975056050));
                            var_20 = (((min(var_9, -6400382892700595626))));
                        }
                    }
                }
            }
            arr_38 [i_6] [10] = (max(9223372036854775806, (~134217727)));
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                {
                    var_21 = (((((var_6 ? var_7 : 805306368))) >= ((57551 ? (arr_39 [i_10] [i_2 - 3]) : 6895051150221103068))));
                    arr_43 [9] [i_10] [i_2] = (((~-21005) ? 0 : (~var_5)));
                }
            }
        }
        var_22 = (max(var_22, (((((((-4212896712773285157 ? var_5 : -2147483622)) - (arr_27 [12]))) << ((1 ? (arr_34 [i_2 + 1] [i_2] [i_2 - 2] [i_2]) : 48391)))))));
        arr_44 [i_2] = (((arr_39 [4] [i_2 - 1]) ? -var_5 : (((0 ? var_8 : (arr_14 [i_2] [14] [i_2]))))));
    }
    #pragma endscop
}
