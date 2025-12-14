/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_15 ? var_0 : var_7))) && var_1));
    var_19 = var_6;
    var_20 = var_17;
    var_21 = var_9;

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] &= ((!((min((arr_1 [i_0] [i_0]), (arr_1 [1] [i_0]))))));
        var_22 = (max(var_22, (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_23 = (min(var_23, 68));
        arr_7 [i_1] = ((((((arr_4 [i_1]) ? -0 : 3))) ? (((arr_5 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1]))) : (arr_4 [i_1])));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_10 [i_1] [i_1] = ((((((arr_0 [i_1] [1]) << (-45 + 49)))) && (arr_3 [i_2])));
            arr_11 [i_2] &= 56;

            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                var_24 &= (arr_13 [i_3] [i_1] [i_1]);
                var_25 = (arr_1 [i_1] [i_2]);
            }
            for (int i_4 = 2; i_4 < 22;i_4 += 1)
            {
                var_26 |= (((arr_1 [i_1] [i_1]) || (arr_1 [i_4 - 1] [i_1])));
                arr_20 [i_4] [15] [i_1] [i_1] &= ((!(arr_0 [i_1] [i_2])));
            }
            arr_21 [i_2] [i_2] [i_1] = ((((!(arr_14 [i_2] [i_2] [i_1]))) ? (arr_4 [i_2]) : (arr_16 [i_1])));
        }
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
    {
        var_27 &= ((((((arr_22 [i_5] [i_5]) ? (arr_22 [i_5] [i_5]) : (arr_15 [i_5] [i_5] [i_5] [i_5])))) ? (arr_15 [i_5] [i_5] [i_5] [i_5]) : (arr_15 [i_5] [i_5] [i_5] [i_5])));
        var_28 = (((arr_1 [i_5] [i_5]) ? (((arr_4 [10]) ^ (arr_3 [9]))) : ((((arr_0 [i_5] [1]) ? (arr_14 [i_5] [i_5] [i_5]) : (arr_19 [i_5] [i_5] [i_5]))))));
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
    {
        var_29 &= ((((min(((((arr_16 [i_6]) <= (arr_17 [i_6])))), (arr_4 [i_6])))) ? (((~(arr_27 [i_6])))) : (((arr_22 [i_6] [i_6]) ? (((arr_5 [i_6]) ? 31681 : 4923723392726718993)) : (arr_19 [i_6] [i_6] [i_6])))));
        arr_28 [18] = (arr_6 [i_6]);
    }
    #pragma endscop
}
