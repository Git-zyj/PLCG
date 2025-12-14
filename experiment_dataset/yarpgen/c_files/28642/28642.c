/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, -var_1));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_13 += ((!(arr_0 [i_0])));
        var_14 = (min(var_14, (((((((arr_1 [i_0]) / (arr_0 [i_0 + 2])))) ? (((-(arr_0 [i_0 + 1])))) : (((arr_0 [i_0 + 3]) ? (arr_1 [i_0 - 2]) : var_1)))))));
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    var_15 = ((!(arr_1 [i_3])));
                    var_16 += (!((min((((-(arr_4 [4])))), var_3))));
                }
            }
        }
        var_17 = (max(var_17, var_1));
    }
    for (int i_4 = 3; i_4 < 15;i_4 += 1) /* same iter space */
    {
        var_18 = (max(var_18, (((-(((!var_0) ? var_11 : var_11)))))));

        for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
        {
            var_19 = (max(var_19, (arr_0 [i_4])));
            var_20 += (arr_3 [i_5]);
            var_21 = ((((((!(arr_11 [i_4]))))) <= (min(((-(arr_10 [i_4 - 1] [i_4]))), (arr_7 [i_4] [i_5])))));
            var_22 = (max((!var_7), var_2));
            var_23 = var_7;
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
        {
            var_24 -= var_0;
            var_25 = (max(var_25, ((((arr_4 [6]) == ((((((var_7 ? (arr_2 [i_4 - 3]) : (arr_15 [i_6] [i_6])))) >= (((arr_16 [10] [i_4] [i_6]) ? (arr_14 [i_6] [i_6]) : var_8))))))))));
            var_26 = ((max((arr_1 [i_6]), (arr_15 [5] [i_6]))));
        }
        var_27 = min(var_2, (var_5 % var_0));
    }
    var_28 = (((!var_10) ? -var_11 : var_0));
    #pragma endscop
}
