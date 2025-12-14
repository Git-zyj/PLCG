/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                var_12 = ((!(arr_6 [i_2] [i_0] [i_0])));
                var_13 = var_7;
            }
            for (int i_3 = 3; i_3 < 12;i_3 += 1)
            {
                var_14 = var_8;
                arr_13 [i_0] [1] [i_0] [i_3] = var_5;
            }
            var_15 = (((arr_7 [i_0] [i_1] [i_1]) ? var_5 : (arr_1 [i_0])));
            var_16 = ((!(!var_6)));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            arr_18 [i_0] [i_0] [i_0] = (((arr_15 [i_0] [i_0]) ? (arr_17 [i_0] [i_4]) : (arr_14 [i_0])));
            arr_19 [i_0] = (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_4]) : (arr_0 [i_0] [8])));
        }
        arr_20 [i_0] [i_0] = var_1;
        arr_21 [i_0] = ((var_3 ? (~var_0) : (arr_8 [i_0] [i_0])));
        arr_22 [i_0] [i_0] = var_7;
    }
    for (int i_5 = 3; i_5 < 15;i_5 += 1)
    {
        var_17 = (max(var_8, (((!(arr_23 [i_5]))))));
        var_18 = (arr_24 [i_5 + 1]);
    }
    var_19 = var_4;
    var_20 = var_3;
    var_21 = (((((var_11 ? var_6 : var_8))) ? (((!(!var_5)))) : ((min((7018609857088349180 >= 1040464262), (!var_9))))));
    #pragma endscop
}
