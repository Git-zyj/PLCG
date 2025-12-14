/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_9 [i_1] [i_2 + 1] [i_1] [i_0] [i_1] = var_9;
                        var_10 = (max(var_10, (((!(((var_4 ? (var_4 & var_7) : var_9))))))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 4; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    {
                        arr_19 [i_6] [i_5] [i_4] [i_4] [i_0] = (14927 >= 1);
                        arr_20 [i_4] [i_4] = (((!var_9) % ((min(var_6, var_0)))));
                        arr_21 [i_6] [i_5] [i_0] [i_0] = (max((254 + 8108313396348738334), (!var_0)));
                    }
                }
            }
        }
        arr_22 [i_0] = ((!(((8108313396348738334 * (-32148 & 1))))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        var_11 = (!var_9);
        arr_27 [i_7] = (!var_4);
        var_12 = (var_2 == var_0);
    }
    for (int i_8 = 1; i_8 < 15;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 1; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    {
                        arr_39 [i_8 + 2] [i_8 + 1] = (+((-var_0 ? (var_1 * var_3) : (((var_4 ? var_4 : var_5))))));
                        arr_40 [i_8] [i_9 - 1] [i_10] [i_10] [i_11] = (min((((var_6 / var_0) << (8108313396348738334 - 8108313396348738324))), (((!(var_7 >> var_8))))));
                        arr_41 [i_11] [i_8] [i_11] [i_11] = ((!((max((max(var_8, var_1)), (((var_8 ? var_5 : var_5))))))));
                        var_13 = (3444950511 * 1169483252);
                        arr_42 [i_8] [6] [i_10] [i_8] = ((var_6 ? ((min(var_0, var_0))) : (max(var_1, var_7))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 3; i_13 < 15;i_13 += 1)
            {
                {
                    var_14 = (max(var_9, (var_9 | var_8)));
                    var_15 = ((((max(var_0, (!var_2)))) ? var_4 : (((max(var_3, var_2)) ? var_6 : (!var_3)))));
                    var_16 = var_0;
                }
            }
        }
    }
    var_17 = (min(var_2, var_5));
    var_18 = (max(var_18, var_9));
    var_19 = (max(var_19, var_5));
    #pragma endscop
}
