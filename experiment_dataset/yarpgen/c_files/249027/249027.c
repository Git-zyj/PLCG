/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_13 &= (arr_1 [i_0 + 1] [i_0 + 1]);
        arr_4 [i_0] [i_0] = ((var_1 / (arr_3 [i_0 - 1] [i_0 - 1])));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_8 [7] = var_6;
        var_14 = (~(939524096 != 4035225266123964416));
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    arr_14 [6] [i_2 + 1] [i_1] [i_1] = ((157 ? 78 : -31));
                    arr_15 [6] [i_2] [i_2] [i_3] = ((~(max(var_11, var_1))));
                    var_15 = (max(var_11, ((((((arr_5 [i_1]) ? var_10 : var_12))) ? (((var_9 << (((((arr_10 [i_2] [i_1]) + 84)) - 2))))) : ((var_8 ? var_11 : var_6))))));
                }
            }
        }

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            arr_18 [i_1] [i_1] [i_1] = ((((((arr_3 [i_1] [i_1]) ? (arr_3 [i_1] [i_4]) : (arr_3 [i_1] [9])))) - ((var_6 ? (arr_13 [i_1] [0] [1] [i_1]) : (max(1152921504606846975, 17275))))));
            var_16 = (min(var_16, (arr_9 [i_4] [i_1] [i_1])));
            arr_19 [i_1] &= ((var_11 || ((!((max(var_10, var_7)))))));
            arr_20 [i_1] [i_1] [i_4] = (17275 >= var_8);
        }
        var_17 = (arr_7 [i_1]);
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_18 = (max((max((max(16376931872775152358, (arr_21 [i_5]))), ((16376931872775152358 << (var_4 + 20604))))), (max(9129066546896655536, var_11))));
        arr_24 [i_5] &= (((~(max(144112989052600320, 4206750977962640271)))));
        var_19 += (-2804211895082089894 / 14239993095746911345);
        var_20 = (max(var_20, (!901)));
    }
    var_21 = ((251 >= (max(((max(-80048382, 147))), (~4352452634087762369)))));
    var_22 = var_8;
    #pragma endscop
}
