/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_0 - var_1) ? ((var_8 << (var_13 + 10051))) : (25 ^ 40))) + var_15));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_1] = (((-20 ^ 12001) ? (((+((max((arr_3 [i_0] [i_1]), (arr_4 [i_0] [1] [1]))))))) : (max(((max(-15807, 24))), (min(var_4, (arr_2 [i_1])))))));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_18 = (max(((((arr_1 [i_0]) >> (((arr_2 [3]) - 9089))))), (max(((((arr_6 [7] [i_1]) | (arr_3 [0] [0])))), (-37 ^ 7492337296698846927)))));
                    var_19 = (arr_1 [i_2]);
                }
                var_20 = var_15;
                arr_10 [i_0] [i_1] = (((arr_0 [i_0] [i_1]) << (((var_0 + 1006820318) - 16))));
                var_21 = arr_0 [i_1] [i_0];
            }
        }
    }

    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_22 = (max(var_22, (((((max((-6273335187305324396 % -1361679028), var_14))) ? (arr_12 [i_3] [i_3]) : (((var_7 < var_13) | ((var_2 ? -1361679049 : (arr_11 [i_3] [i_3]))))))))));
        arr_13 [i_3] = (arr_12 [i_3] [i_3]);
    }
    for (int i_4 = 2; i_4 < 20;i_4 += 1)
    {
        arr_16 [i_4] = (arr_14 [i_4]);
        arr_17 [i_4] = ((var_14 ? (((((arr_15 [i_4] [i_4]) - var_6)))) : (arr_14 [i_4])));
        arr_18 [i_4 - 2] [i_4] |= ((+((var_12 << (((arr_14 [i_4 - 2]) - 237))))));
        var_23 ^= var_10;

        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            var_24 ^= (arr_14 [i_5]);
            arr_21 [i_4 - 1] = (min((min((arr_14 [i_4]), (((arr_20 [i_4]) ? (arr_15 [i_4 + 1] [i_5]) : var_11)))), (arr_20 [i_4 + 1])));
        }
    }
    var_25 = ((var_9 ? 33 : 98));
    #pragma endscop
}
