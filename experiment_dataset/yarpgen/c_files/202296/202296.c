/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((var_12 ? var_6 : ((((((45 >= (arr_0 [i_0] [1]))))) / (min((arr_1 [i_0] [i_0]), 3226887064))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] = (min(0, -7610));
                    var_13 = ((var_5 ? ((-31 ? var_7 : var_10)) : ((((!(((1 ? 18446744073709551592 : 45)))))))));
                    arr_10 [i_0] [i_1] = ((29 ? var_3 : (min(var_2, (min(var_4, (arr_1 [i_0] [i_1])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [10] [i_1] = ((var_2 ? (((var_5 < (arr_6 [i_0] [i_1] [i_2 - 2] [i_4])))) : var_6));
                                arr_17 [i_0] [i_1] [i_1] [i_3] [i_4] = (((((((((arr_11 [i_0] [i_4] [i_2 - 1] [i_0] [i_0] [i_0]) ? var_12 : 253))) >= var_0)))) & ((29 >> (var_5 + 353181430))));
                                var_14 = (-((var_10 ? (min((arr_15 [11] [i_3] [i_2] [i_1] [i_0] [i_0]), var_9)) : 1490667330654650206)));
                                arr_18 [i_1] [i_1] = var_0;
                                var_15 = (max(var_15, (((max((arr_8 [i_2] [i_2] [i_2 - 1]), var_2))))));
                            }
                        }
                    }
                    var_16 = (~var_6);
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
    {
        arr_22 [i_5] = (max(var_10, ((min(-1786285447, var_0)))));
        arr_23 [i_5] = (max((min((arr_15 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]), (arr_21 [i_5] [i_5]))), (var_1 < var_5)));
        var_17 = ((arr_21 [i_5] [i_5]) || ((min(68, 0))));
        arr_24 [i_5] [i_5] = (min((arr_21 [i_5] [i_5]), (((!var_11) ? 143974450587500544 : (arr_4 [i_5] [i_5] [i_5])))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
    {
        arr_27 [i_6] = var_5;
        arr_28 [i_6] [i_6] = 1091581356;
    }
    var_18 = var_3;
    var_19 = ((((max((24 && 2925355497223925270), var_1))) && var_3));
    var_20 = var_1;
    #pragma endscop
}
