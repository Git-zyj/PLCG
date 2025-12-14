/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 = (min(var_17, (min((((max(var_14, var_12)) << (((min(var_4, var_13)) - 601765816)))), var_15))));
        var_18 = (min(var_18, (((min(2252216538, -20722)) + var_5))));
        var_19 = min(2956979905, 524288);
    }
    for (int i_1 = 4; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_8 [2] [i_1] [i_1] = max(((var_1 & (2167 | 2016))), var_10);
            var_20 ^= var_11;
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            arr_12 [15] [15] [i_3] = (min((min((max(var_4, var_12)), var_9)), (max((min(var_10, 25)), (min(var_9, var_14))))));
            var_21 -= (((0 & (max(0, 2)))) << (((((min(var_0, var_0)) << (var_7 - 19768))) - 335544307)));
            var_22 = (((min(((var_14 >> (var_3 - 3544883983))), (-22090 | 1944722732))) ^ (((((var_13 ^ var_4) == (var_8 > var_6)))))));
            arr_13 [19] = var_10;
            var_23 *= var_0;
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            arr_16 [i_1] [i_1] &= var_10;
            arr_17 [i_4] = (((min(((min((-32767 - 1), 15453))), var_3)) * var_1));
            var_24 = (max(var_24, var_14));
        }
        arr_18 [11] = (((2522064150 + 2) << (((min(1971410518, 1742)) - 1721))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 20;i_6 += 1)
            {
                {
                    var_25 *= (max((max(((max(0, -7673))), ((var_7 << (var_15 - 21611))))), var_7));
                    arr_23 [13] [13] [18] = var_4;
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        arr_26 [i_7] [i_7] = (min(var_12, (min(-8, 4))));
        var_26 = var_1;
        arr_27 [i_7] [i_7] = ((((min(-23517, 0))) * ((max(7776, 1759)))));
    }
    var_27 = min((min((2206596554 ^ 0), (min(var_13, var_15)))), (((var_11 & var_1) & (max(768, 3866884499)))));
    var_28 = min((min(768, 0)), var_11);
    #pragma endscop
}
