/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-9223372036854775807 - 1);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 |= (min(7, 9223372036854775798));
        arr_4 [i_0] [i_0] = var_5;
        arr_5 [i_0] &= var_9;
    }
    for (int i_1 = 4; i_1 < 24;i_1 += 1)
    {
        var_13 = (min(var_13, 124));
        var_14 = ((+((48 / ((min((arr_7 [i_1]), var_3)))))));
        arr_8 [i_1] &= 9223372036854775807;
    }
    for (int i_2 = 2; i_2 < 16;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_15 = (min(((((arr_6 [i_2 - 2]) > (arr_6 [i_2 + 1])))), (min((min((-9223372036854775807 - 1), var_7)), var_10))));
                                var_16 += (min((17043 + 1), 1));
                            }
                        }
                    }
                    var_17 = ((((((1 - (arr_17 [i_2] [i_2 - 2] [i_2 - 2] [i_2]))) - var_4)) > (369853699 / 369853691)));
                }
            }
        }
        arr_23 [i_2] [i_2] = (min((var_0 || 1844194894612941814), -124));
    }
    for (int i_7 = 2; i_7 < 16;i_7 += 1) /* same iter space */
    {
        arr_26 [i_7 + 1] [i_7 - 2] = (min(-124, ((-46 ? -var_10 : 1755761905))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 15;i_9 += 1)
            {
                {
                    arr_33 [i_8] [i_9] [i_7 + 1] = (((min(2848, var_2))));
                    var_18 = ((((((((var_7 ? var_5 : 48))) ? var_7 : 2311711980))) ? (((arr_24 [i_7 - 2]) ? (arr_24 [i_7 + 1]) : (arr_24 [i_7 + 1]))) : 33175));
                }
            }
        }
    }
    var_19 = var_1;
    #pragma endscop
}
