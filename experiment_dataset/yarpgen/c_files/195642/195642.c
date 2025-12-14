/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 ^= 1;
        arr_3 [i_0] = var_8;
        arr_4 [i_0] = ((min(var_8, 26)));
        var_15 -= var_12;
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        arr_8 [i_1] = (((min(((var_4 - (arr_7 [i_1]))), ((var_10 ? var_8 : (arr_5 [i_1]))))) ^ var_9));
        var_16 += ((-(min(var_0, var_12))));
        arr_9 [i_1] [i_1] = 466534651;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                arr_15 [i_1] [i_1] [i_1] = (((arr_12 [i_1 + 1]) <= (arr_12 [i_2])));
                arr_16 [i_1] [i_1] [i_3] [i_3 + 1] = (((arr_0 [i_3 + 1] [i_1 - 1]) && (var_7 != var_8)));
                arr_17 [i_1] [i_1] [i_1] = (arr_7 [i_1]);
                var_17 = (min(var_17, ((((arr_11 [i_1] [i_1] [10]) ? var_6 : ((var_1 ? var_0 : var_13)))))));
            }
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                var_18 = (max(var_18, (32767 - -217612387)));

                for (int i_5 = 3; i_5 < 14;i_5 += 1)
                {
                    var_19 |= (arr_2 [i_4]);
                    arr_24 [i_1] [i_4] [i_2] [i_1] = (((var_13 + var_10) + 126));
                }
                var_20 += (arr_13 [i_1] [i_1]);
            }
            arr_25 [i_1] [i_1] = var_11;
            arr_26 [i_1] [i_1] = (((((var_2 ? var_2 : var_9))) && var_9));
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        arr_29 [i_6] = 14;
        var_21 = var_10;
        arr_30 [i_6] [i_6] |= var_1;
        arr_31 [i_6] = (((((var_3 * (arr_19 [i_6] [i_6] [i_6])))) ? var_4 : (arr_0 [i_6] [i_6])));
        var_22 ^= ((var_1 + (((arr_7 [4]) ? var_5 : var_10))));
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        arr_35 [i_7] = var_12;
        var_23 = 397973407;
    }
    var_24 = var_8;
    var_25 = (-(max(var_9, (var_4 && var_9))));
    var_26 = var_10;
    var_27 = (929691208 != -466534663);
    #pragma endscop
}
