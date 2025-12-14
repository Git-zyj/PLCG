/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= min((((((-9223372036854775807 - 1) | (-9223372036854775807 - 1))) ^ 342449120387315508)), ((((-9223372036854775807 - 1) ? var_9 : (537330256 | var_4)))));
    var_14 -= ((((-((var_6 ? var_5 : var_0)))) != ((min(((-1 ? -537330256 : var_6)), var_3)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            arr_4 [i_1] [i_0] = (((arr_0 [i_0]) ? (((arr_1 [19] [i_1 + 1]) ? 393216 : (4191305400303563255 != var_3))) : ((((min(660753118, var_12)) != (min(511543909079288743, (arr_0 [18]))))))));
            arr_5 [i_1] [i_1] = (((-(arr_2 [i_0] [i_1] [i_0]))));
        }
        var_15 -= (((((44 ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? ((((arr_0 [i_0]) * (arr_0 [i_0])))) : var_12));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            var_16 = (max(var_16, ((((arr_3 [i_3 + 2] [24] [i_2]) != (arr_3 [i_3 + 1] [24] [i_3]))))));
            arr_11 [i_2] = ((((2990343462856907418 ? (arr_7 [i_2] [i_2]) : -57)) >= 660753118));
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            arr_15 [2] |= ((+(max((!-88), ((var_0 ? 660753126 : (arr_1 [i_4] [i_2])))))));
            var_17 = arr_9 [i_2] [i_2];
            var_18 = (((~(max((arr_1 [i_2] [i_2]), -57)))));
            var_19 = ((((min((((arr_0 [3]) ? 5209032025454653732 : (arr_2 [0] [i_2] [i_2]))), (arr_10 [2])))) ? (arr_6 [i_2]) : (arr_6 [8])));
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_20 = ((((max((arr_14 [i_2]), (arr_13 [i_2]))) >= (((12 ? (arr_10 [0]) : var_9))))));
            var_21 = (((arr_8 [i_2]) | (17179869183 | var_4)));
        }

        /* vectorizable */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            arr_20 [i_2] [i_2] = (((arr_1 [i_2] [i_2]) == (arr_1 [i_6] [i_2])));
            var_22 = ((267911168 ? (arr_8 [i_2]) : 2310902826));
            arr_21 [i_2] = 6063830922850745369;
            arr_22 [i_2] = -17179869183;
        }
    }
    #pragma endscop
}
