/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_18 = (max(var_18, ((((arr_0 [i_0]) << ((((var_10 ? var_12 : (arr_1 [i_0]))) - 3655361742)))))));
        var_19 = var_11;

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                arr_7 [i_2] = ((var_14 ? (arr_6 [i_2] [i_2] [i_2] [i_2]) : 67));
                arr_8 [i_2] = (((((var_8 ? (arr_4 [i_2 - 1] [i_2 + 1] [i_2 + 2] [i_2]) : (arr_4 [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2])))) ? ((-(arr_4 [i_2 + 1] [i_2 + 2] [i_2 + 1] [i_2]))) : (((arr_4 [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_2 - 1]) >> (var_6 - 4233506846)))));
            }
            var_20 |= ((((!(arr_4 [i_1] [i_1] [i_0] [i_0]))) ? ((-6385 ? (((arr_0 [i_0]) ? -6404 : var_17)) : ((min(95, var_9))))) : (((((((arr_2 [i_0]) ? (arr_1 [12]) : var_12))) || (arr_2 [i_1]))))));
        }
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
    {
        var_21 = (arr_6 [i_3] [i_3] [i_3] [i_3]);
        var_22 = (max(var_15, (((-1 ? (arr_6 [i_3] [i_3] [13] [i_3]) : -3412126140543548128)))));
    }
    var_23 |= (min(var_14, (min(var_8, (230 / var_17)))));
    #pragma endscop
}
