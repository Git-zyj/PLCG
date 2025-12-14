/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 -= ((min(var_4, (arr_1 [i_1 + 1] [i_1 - 1]))) % ((((arr_3 [i_1 - 3] [i_1 - 3]) >> (((arr_2 [i_2 + 1]) + 9))))));
                    var_18 = ((12306585028580073508 ? -9223372036854775798 : 210));
                    arr_6 [i_0] = ((~((((arr_2 [i_0]) && var_16)))));
                    var_19 = (min(var_19, ((min((((arr_5 [i_1 - 3] [i_1 - 3] [i_1 + 1]) ? (arr_5 [i_1 - 1] [i_1 - 3] [i_1 - 3]) : (arr_1 [i_1 - 3] [i_1 + 1]))), ((((arr_1 [i_1 - 1] [i_1 + 1]) ? var_15 : var_11))))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_20 = (((arr_10 [i_3] [i_3]) < (arr_10 [i_3] [13])));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    var_21 *= (((arr_14 [0] [i_4] [i_5]) <= var_6));
                    var_22 += (((arr_7 [i_3]) >= (arr_7 [i_3])));
                    var_23 = (max(var_23, (var_9 / var_4)));
                    var_24 &= var_7;
                    var_25 = (((arr_9 [i_4]) < (arr_13 [i_3] [i_3] [i_3])));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        var_26 = var_6;
        arr_18 [i_6] = (arr_17 [i_6]);
        var_27 *= (1 >= var_3);
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        var_28 -= arr_13 [i_7] [i_7] [i_7];
        arr_22 [i_7] = ((((~(arr_12 [i_7] [i_7] [i_7]))) >> ((((((~(arr_4 [i_7] [i_7] [5] [i_7]))) % (var_7 % var_3))) + 24))));
        arr_23 [i_7] = (arr_8 [i_7]);
    }
    var_29 = (!var_6);
    var_30 = -var_13;
    #pragma endscop
}
