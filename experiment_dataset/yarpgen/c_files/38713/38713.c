/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= var_11;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, (arr_5 [i_0] [i_0] [i_0])));
                    var_18 = (max(var_18, (((((-((var_8 ? var_4 : (arr_6 [i_0]))))) >= (((((min((arr_4 [i_0] [i_2]), var_3))) / var_8))))))));
                }
            }
        }

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_13 [i_0] [i_3] = ((!((min(((min(1, 1))), (min(-1, 1534519349)))))));
            arr_14 [i_0] = (max((arr_12 [i_0]), (min((arr_12 [i_3]), (arr_12 [i_0])))));
            arr_15 [i_0] [i_0] = ((~((max((((!(arr_7 [i_0])))), (arr_2 [i_3]))))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 18;i_5 += 1)
                {
                    {
                        arr_20 [i_0] [i_0] [i_0] [11] = var_2;
                        var_19 = (min(var_19, (((var_9 ? (((-(arr_19 [i_5 - 1] [i_5 - 1] [i_4] [i_5 - 1])))) : (max(var_10, ((((arr_4 [i_0] [i_4]) ? (arr_8 [i_0] [i_4] [i_4]) : var_15))))))))));
                    }
                }
            }
        }
        var_20 = (max(var_20, (arr_10 [i_0] [4] [4])));
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        var_21 = (max(var_21, (arr_22 [i_6])));
        arr_23 [i_6] = (((arr_22 [i_6]) ? (min(var_8, var_10)) : var_10));
        var_22 = (((((max(824996892, 1) <= var_8)))));
        var_23 = (arr_22 [i_6]);
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 22;i_9 += 1)
            {
                {
                    var_24 = ((+(((arr_29 [3] [3] [i_9 + 1] [3]) ? (var_9 && var_15) : -var_9))));
                    arr_30 [i_8] = ((((((((var_7 ? var_7 : (arr_24 [15])))) ? ((107 ? var_1 : var_6)) : (var_7 * var_5)))) ? ((-((var_9 ? 1 : 89)))) : ((((min((arr_25 [i_7]), var_8))) ? (arr_25 [i_9]) : (var_7 + var_12)))));
                }
            }
        }
    }
    var_25 = (max(var_25, var_1));
    #pragma endscop
}
