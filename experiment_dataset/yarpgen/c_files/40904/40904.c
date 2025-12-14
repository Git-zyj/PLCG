/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = ((max(4018918408, (arr_2 [i_0]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_3] = (max(23444, (((1 ? -23455 : var_11)))));
                            arr_11 [i_0] [1] [i_3] [1] = (max((max(1, (arr_7 [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_0 + 2]))), (!1046355019401547016)));
                        }
                    }
                }
            }
        }
    }
    var_19 = var_14;

    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        arr_14 [i_4] = ((((((arr_12 [i_4]) ? (arr_13 [i_4]) : 1))) ? (arr_12 [i_4]) : (max(1, 6261182439282697782))));
        arr_15 [i_4] [i_4] = ((((max(((1 ? 2302292457304228066 : var_7)), -var_13))) ? (((((arr_13 [i_4]) | (arr_12 [i_4]))) * (((max(48, 23469)))))) : ((4294967287 ? (arr_13 [i_4]) : (~var_12)))));
        arr_16 [i_4] = ((23438 ? ((((!(arr_12 [i_4]))))) : (~1984)));
        var_20 = max(4294967267, (arr_13 [i_4]));
    }
    #pragma endscop
}
