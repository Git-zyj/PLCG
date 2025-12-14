/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 31;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = 14319034133243144131;
        arr_3 [i_0] [i_0] = (max((arr_0 [i_0] [i_0]), ((((19086 ^ 764770843) ? (((~(arr_2 [i_0] [i_0])))) : ((4036136885 ? 617864133 : 3095737709)))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_16 = (arr_5 [i_1] [6]);

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_10 [i_1] [2] [i_2] = ((((min(1, (max(var_10, (arr_4 [i_1] [6])))))) > (arr_7 [i_2] [i_2] [2])));
            var_17 = (((((10066 ? -18 : -1776534200))) >= (((arr_0 [i_1] [6]) & (arr_0 [7] [i_1])))));
        }
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            var_18 = var_6;
            var_19 = (max(var_19, ((((((((arr_1 [i_1] [i_3 + 1]) ? var_4 : (arr_1 [i_3] [i_3]))) - var_4)) != (((((min(var_7, var_12))) ? (var_0 ^ var_8) : (((var_11 == (arr_9 [8] [i_1] [5]))))))))))));
        }
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            arr_17 [i_4] [6] [10] = (((arr_4 [i_5] [i_4]) ? (arr_4 [i_4] [i_5]) : -239373768));
            var_20 = -9148966948976913812;
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            var_21 = (min(var_21, ((((arr_4 [i_4] [i_6]) == (arr_2 [i_4] [i_6]))))));

            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                arr_26 [i_4] [i_6] [i_7] = ((((2519279570951315039 ? 1 : -1060517107)) - ((1816016110 | (arr_6 [i_4] [11] [11])))));
                arr_27 [i_4] = var_0;
            }
            var_22 = (min(var_22, (arr_16 [i_6])));
            arr_28 [i_6] [10] = var_3;
        }
        var_23 = var_11;
        var_24 = (min(var_24, (((-94 >= (~var_2))))));
    }
    #pragma endscop
}
