/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) | var_1));
        var_11 = ((!(((((min(var_1, -5150))) ? (arr_0 [i_0]) : (var_1 >= 4137384140))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    var_12 = (min(var_12, (var_0 * var_4)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                arr_16 [i_1] [i_1] [i_5] = (((arr_9 [i_1 + 1] [i_3] [i_1 + 1]) > (arr_9 [i_1 - 1] [i_1 - 1] [i_4])));
                                var_13 = 139611588448485376;
                            }
                        }
                    }
                    var_14 = (-43 | 3);
                }
            }
        }
        arr_17 [i_1 + 1] = ((~(arr_6 [6])));
        var_15 = ((var_7 ? (arr_8 [i_1 - 1] [i_1 + 1]) : (arr_8 [i_1 + 1] [i_1 + 1])));
    }

    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {

        for (int i_7 = 1; i_7 < 20;i_7 += 1)
        {
            arr_25 [i_6] [i_6] [i_7] = ((((arr_19 [i_6]) == 154)));
            arr_26 [i_6] [i_7] [i_7] = ((((((arr_24 [i_7 + 2] [i_7] [i_6]) >= 1267616835))) >= 5137));
        }
        arr_27 [i_6] = var_3;
        var_16 ^= ((~(((!(arr_18 [i_6]))))));
        arr_28 [i_6] = (min(var_9, (min(var_3, -5137))));
    }
    var_17 ^= var_3;
    #pragma endscop
}
