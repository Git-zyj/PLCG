/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= min(((((var_11 && var_6) || var_13))), var_5);
    var_15 += var_4;
    var_16 = (max(var_16, var_5));
    var_17 = (((1704679379 << (3205 - 3187))));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_18 = (min(var_18, ((((arr_1 [4] [4]) < (min((arr_0 [i_0] [i_0 - 2]), var_9)))))));
        var_19 = (min((((arr_1 [i_0 - 1] [i_0 + 1]) & (arr_1 [i_0 - 1] [i_0 - 2]))), ((max(var_7, (arr_1 [i_0] [i_0 - 1]))))));
        var_20 -= (max(((var_5 - ((var_2 >> (var_9 + 1523990037))))), (arr_0 [9] [i_0 - 1])));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_21 = ((var_7 || (((var_6 << (var_13 + 26320))))));
            arr_9 [i_1] [i_1 + 2] [i_1] = (arr_5 [i_1 - 1] [i_2]);
        }
        arr_10 [i_1 + 1] = ((var_4 ? ((((var_10 != (arr_5 [i_1] [9]))) ? (3006088842 / 2590287909) : (!var_7))) : (arr_7 [i_1] [6] [6])));
        var_22 += (max((!var_13), (max(var_6, (arr_1 [i_1 - 2] [i_1 - 2])))));
        var_23 = max(1704679369, -1);
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        var_24 = (max(var_24, var_2));
                        var_25 |= (((~((var_11 ? var_12 : var_2)))));
                        arr_21 [i_1 - 1] [6] [i_3 + 1] [i_5] = ((~(min((2590287916 | 1374314466), var_2))));
                        arr_22 [i_1 - 2] [i_3] [13] [i_5] = ((-(((!(arr_20 [12] [i_3] [i_4] [i_5]))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 12;i_6 += 1)
    {
        var_26 = (max(var_26, 38400));
        var_27 -= (((!var_13) ? (arr_24 [i_6 + 1]) : (arr_2 [i_6])));
    }
    #pragma endscop
}
