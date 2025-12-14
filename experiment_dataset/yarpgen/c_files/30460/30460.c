/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] [i_2] [i_2] = ((((min(((-599276680 ? var_8 : (arr_5 [i_0]))), (max(var_13, (arr_5 [i_2 - 2])))))) ? (min((arr_1 [8]), -29)) : (((arr_1 [i_1 + 1]) ? (arr_1 [i_1 + 1]) : (arr_1 [i_1 + 3])))));
                            arr_12 [i_2] = var_7;
                        }
                    }
                }
                arr_13 [i_0] = ((+(((((arr_7 [i_0] [i_0] [i_0]) ? var_12 : (arr_4 [i_0]))) * ((min(-599276680, (arr_1 [i_0]))))))));
            }
        }
    }
    var_16 = (((599276696 % (~var_13))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            {
                arr_18 [i_4] [i_4] = 599276674;
                var_17 = ((arr_17 [i_4] [i_5] [i_5]) - (arr_15 [i_4]));
                arr_19 [i_4] [i_5] [i_4] = (arr_16 [8] [i_5] [i_4]);
            }
        }
    }

    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        var_18 = ((599276696 ? -3196864637323002121 : (arr_22 [i_6])));
        var_19 = ((-(arr_20 [i_6] [i_6])));
        arr_23 [6] |= var_3;
        arr_24 [i_6] = 435877574;
        var_20 = ((((min(((min(-29, -38))), (arr_20 [7] [i_6])))) ? 1848387493 : 2969874));
    }
    for (int i_7 = 1; i_7 < 19;i_7 += 1)
    {
        arr_27 [i_7] [i_7 + 2] = (arr_25 [i_7]);
        var_21 = min(var_15, (arr_25 [i_7]));
        arr_28 [i_7] = (min(1848387494, (((var_11 ? (max((arr_25 [i_7]), 37)) : ((0 + (arr_26 [i_7] [i_7]))))))));
        var_22 = ((((var_1 - -45) ? var_0 : (((arr_25 [i_7]) ? (arr_25 [i_7 + 1]) : 4294967285)))));
        arr_29 [i_7] = max(((-2081892402 ? (((2446579785 ? 599276680 : -37))) : (~1848387494))), (arr_26 [i_7] [i_7]));
    }
    for (int i_8 = 1; i_8 < 19;i_8 += 1)
    {
        arr_34 [i_8] = -var_13;
        arr_35 [i_8 + 1] [i_8 + 1] = 1;
    }
    #pragma endscop
}
