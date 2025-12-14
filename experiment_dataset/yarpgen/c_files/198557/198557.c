/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = (((1 & 1730623073351362214) ? ((((arr_0 [i_0]) != 65534))) : (((!((((arr_1 [i_0]) ? 0 : var_7))))))));
        arr_2 [i_0] = 1;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_15 = ((~(arr_5 [i_1])));
        var_16 = (max(var_16, (((var_0 ? (~64039) : 17)))));
    }
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        var_17 = 7895782525950896015;
        var_18 = (arr_7 [i_2 + 1]);
        arr_8 [i_2] |= var_0;
        var_19 = 32764;

        /* vectorizable */
        for (int i_3 = 4; i_3 < 12;i_3 += 1)
        {
            var_20 = (!0);
            var_21 = (((arr_3 [i_3 - 4]) == (arr_4 [i_2 + 1])));
        }
        for (int i_4 = 3; i_4 < 12;i_4 += 1)
        {
            arr_14 [i_2] [i_4] [i_2 - 1] = (arr_10 [i_2 + 1] [i_2]);
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        {
                            arr_22 [i_5] [i_5] = -var_9;
                            arr_23 [i_2] [i_5] = (((((min((arr_11 [i_6 - 1] [i_6 + 1] [i_6 + 1]), (arr_18 [i_2] [i_2] [i_5] [i_4 - 1] [i_4 - 2]))))) ^ 2008359850581642011));
                            arr_24 [i_5] [i_5] [i_7] = ((((((var_4 ? var_4 : 0))) ? (arr_12 [i_5] [i_7]) : (((arr_9 [i_2] [i_4]) ? (arr_7 [i_2]) : 1)))));
                            arr_25 [i_5] [i_4] [12] [i_6 - 1] [i_7] = (-119 >= 3490498535);
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_8 = 1; i_8 < 10;i_8 += 1) /* same iter space */
        {
            var_22 -= var_8;
            var_23 &= 11;
        }
        for (int i_9 = 1; i_9 < 10;i_9 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_10 = 3; i_10 < 10;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 11;i_11 += 1)
                {
                    {
                        arr_38 [i_2] [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_11] = 64312;
                        arr_39 [i_2] [i_9] [12] [i_11] = 282559355;
                    }
                }
            }
            var_24 = (~0);
        }
    }
    var_25 = var_12;
    var_26 = var_5;
    #pragma endscop
}
