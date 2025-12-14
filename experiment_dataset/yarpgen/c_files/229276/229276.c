/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_10 *= (arr_3 [6]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1] [i_1] [i_2] |= (min((min(var_7, 15597129047460389280)), (min((min(var_2, 0)), ((min(0, var_5)))))));
                    var_11 ^= ((!(((218 ? (!1312659303) : (min(var_2, var_1)))))));
                    arr_12 [i_0] [i_0] [i_0] [i_1] |= 152;
                    arr_13 [i_0] = 1;
                    arr_14 [i_0] [i_2] = var_7;
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        arr_18 [i_3 + 2] = 55;
        var_12 = 157;
        arr_19 [i_3] [i_3 - 1] = (min(37, -var_9));
        arr_20 [i_3] [i_3] = var_0;
        arr_21 [i_3] = var_1;
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_13 = var_8;
        arr_24 [1] = ((681904731 << (var_3 - 7613410013457172416)));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        arr_28 [i_5] = (arr_23 [i_5] [i_5]);
        var_14 = (var_4 ? 207 : var_0);
    }
    var_15 = (~var_9);
    #pragma endscop
}
