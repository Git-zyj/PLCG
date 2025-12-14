/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [9] = ((var_1 ? 1742640466 : (max(1742640453, 1319936031))));
        var_15 = ((-(min(var_11, ((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_14)))))));
        var_16 = max(((((min((arr_0 [i_0]), 18446744073709551600)) != (((var_13 ? -2096357839 : -1319936004)))))), (((max(18200299794106388736, 7637843974431166777)) / (arr_1 [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        arr_6 [i_1] = (((arr_1 [i_1 + 2]) / (arr_1 [i_1 - 2])));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        arr_14 [i_3] [i_2] = arr_5 [i_4];
                        var_17 ^= ((((((1894887712 || (arr_8 [i_4] [i_2]))))) > (6600176166040738060 / var_5)));
                        var_18 = 2483342425122938892;
                    }
                }
            }
        }
    }
    var_19 = ((12466987950493095432 & ((var_0 + (1644259477 + 2471735)))));
    var_20 = 0;
    var_21 = ((!(!829796894)));
    #pragma endscop
}
