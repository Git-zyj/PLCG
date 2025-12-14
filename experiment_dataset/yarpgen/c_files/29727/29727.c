/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    var_13 ^= var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, (var_11 || var_5)));
                    arr_6 [11] [1] [12] = (1 >= (arr_0 [i_0]));
                    arr_7 [i_0] [i_1] = var_2;
                }
            }
        }
        arr_8 [i_0] [i_0] = (4077417440558050507 / (1 / var_10));
        arr_9 [i_0] = (0 ? var_6 : 5986551781830369032);
        var_15 = 0;
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_16 = (~(((((arr_10 [i_3]) || 5986551781830369020)) ? (var_3 % var_2) : 2784635275641467778)));
        var_17 = ((~((((arr_1 [i_3]) >= (arr_3 [i_3] [i_3]))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_18 = (min(var_18, (((+((1 ? var_3 : (((arr_0 [i_4]) ? (arr_13 [i_4]) : (arr_0 [i_4]))))))))));
        arr_14 [1] [i_4] = arr_3 [i_4] [i_4];
    }
    var_19 = (~-var_2);
    #pragma endscop
}
