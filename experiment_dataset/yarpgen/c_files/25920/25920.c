/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 4853513516014531451;

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_10 [i_1] [i_1] [1] [11] = ((max((arr_7 [i_3] [i_2] [i_1] [i_1] [i_1] [i_0]), var_6)));
                        var_16 = ((max((arr_0 [12]), ((((arr_4 [i_1]) * var_4))))));
                        var_17 = (max(((8419 ? 52013 : (1 & 0))), (((var_0 || (arr_8 [i_0] [i_0] [5] [i_2] [i_3] [i_3]))))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 14;i_6 += 1)
                {
                    {
                        arr_23 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = var_2;
                        arr_24 [i_4] [i_4] [i_4] [8] = ((max(var_10, (arr_8 [i_6 + 2] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6] [i_6]))));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_18 = (1605748239 && var_2);
                            arr_27 [i_0] [i_4] [i_5] [1] [i_4] = (((arr_14 [i_0] [i_4]) < (arr_22 [i_4])));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
    {
        var_19 = (((41 | 0) != (arr_11 [i_8] [i_8])));
        var_20 = (!188);
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
    {
        var_21 = ((8609 ? var_2 : 5107043504648695892));
        arr_35 [i_9] [i_9] = (((((183 ? -569304041609385360 : var_7))) ? var_9 : ((var_7 ? var_2 : (arr_22 [9])))));
        arr_36 [1] = var_10;
        arr_37 [i_9] = var_4;
    }
    #pragma endscop
}
