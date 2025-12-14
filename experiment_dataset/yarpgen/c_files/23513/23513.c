/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-25427 ? 4404079575898125956 : var_1));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_12 &= arr_0 [i_0];
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_13 = (arr_0 [i_1]);
                    var_14 = (max(var_14, (arr_3 [i_0])));
                    var_15 = (max(var_15, (((6177215074582928872 == ((max(62, (arr_7 [6] [i_1 - 1] [i_2])))))))));
                    arr_8 [i_2] [i_1] [i_2] [i_1] = (arr_1 [i_0 - 2] [i_0 - 1]);
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    var_16 *= 2147483647;

                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 10;i_6 += 1)
                    {
                        arr_20 [i_4] [i_5] [i_4] = ((-var_0 ? 1 : (arr_13 [i_3 + 2] [i_6 - 1])));
                        var_17 = (arr_14 [i_5] [i_3]);
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_18 = (min(var_18, (((((arr_7 [i_4] [i_4] [i_5]) >> (((arr_2 [i_3 - 1]) - 3522320712)))) == var_1))));
                        var_19 = (-2147483647 - 1);

                        for (int i_8 = 1; i_8 < 10;i_8 += 1)
                        {
                            arr_26 [i_3] [i_5] [i_5] [i_3] [i_3] [i_8] [i_8] = (~(((arr_25 [i_4] [i_5] [i_5] [i_5]) << (4294967292 - 4294967284))));
                            var_20 = 2147483647;
                            arr_27 [i_3] [i_3] [i_3] [i_3] [i_3 + 2] [i_3] = var_3;
                        }
                        var_21 = (min(1302804544, var_6));
                        var_22 ^= (((var_8 ? (arr_15 [i_3 - 1] [i_3 - 1] [i_3 - 1]) : 247)));
                    }
                }
            }
        }
        arr_28 [i_3 + 1] |= ((((~(arr_12 [i_3 + 1]))) != 11385));
    }
    #pragma endscop
}
