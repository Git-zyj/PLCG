/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    var_12 = ((var_9 ? ((-(!14))) : var_8));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_13 |= 701188605;
        arr_2 [i_0] = (145679274 ^ -701188598);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = 4294967295;
        arr_8 [i_1] = 8;
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 24;i_2 += 1) /* same iter space */
    {
        var_14 = (min(var_14, (arr_10 [i_2])));
        arr_12 [i_2] [i_2] = (((((arr_5 [i_2] [i_2]) == var_4)) ? ((1 ? -30341 : 1032636233)) : (arr_4 [i_2])));
        arr_13 [i_2] [i_2] = (-(((326014625 && (arr_4 [i_2])))));
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 23;i_4 += 1)
            {
                {
                    arr_20 [i_2] [i_2] [i_3] [i_4] = var_9;
                    arr_21 [i_3] [i_2] = 3;
                    arr_22 [i_2] [i_2] [i_4] = (arr_15 [i_2] [i_2]);

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        arr_25 [i_2] [i_2] = (arr_24 [i_2] [i_2] [i_2 - 2] [i_2] [i_2] [i_3 + 1]);
                        arr_26 [i_2] [i_3] [i_3] [i_4] [i_2] [i_2] = (1 >= 7);
                        arr_27 [i_2] [i_3] [i_4] [i_2] [i_5] [i_5] = ((var_4 / (((6165987672909840307 ? 4294967292 : 65533)))));
                    }
                    arr_28 [i_2] [i_2] = (!-2150368146498458566);
                }
            }
        }
    }
    var_15 = (((((var_5 ? (max(4294967295, 1)) : (((min(-1, 15))))))) && 122));
    #pragma endscop
}
