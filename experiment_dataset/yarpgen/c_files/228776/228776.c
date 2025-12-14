/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_10 ? var_4 : (~102));

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = var_6;
                    var_15 = ((((((arr_2 [i_0] [i_0] [i_0]) ? (arr_6 [3] [1] [i_2] [i_2]) : (~54921)))) ? 0 : var_6));
                }
            }
        }
        var_16 = ((1 || (arr_0 [i_0])));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        var_17 = ((~((var_4 ? (arr_8 [i_3]) : (arr_8 [i_3])))));
        var_18 = ((-((1 ? var_1 : (arr_3 [i_3])))));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {
        var_19 = 3558543234;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    arr_18 [i_4] [i_6] [i_5] [i_6] = ((((((arr_17 [i_4] [i_4] [i_6]) ? (arr_17 [i_4] [i_5] [i_6]) : 1))) && -850983003));
                    var_20 = ((((((0 ? 0 : 1))) ? -var_4 : (min(736424049, var_11)))));
                    var_21 = (((1 ? ((-(arr_14 [19]))) : 0)));
                    var_22 = (arr_12 [i_5] [i_5] [i_6]);
                    arr_19 [i_6] = (max(((1612745707775100232 ? 62690 : 16534)), var_1));
                }
            }
        }
        var_23 = (!((((arr_1 [i_4]) ? (arr_5 [i_4] [i_4] [i_4] [i_4]) : (min(var_10, 5))))));
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
    {
        arr_22 [i_7] = var_0;
        arr_23 [19] [i_7] = (max(((~(0 & 1))), (((!0) ? (arr_12 [i_7] [i_7] [i_7]) : (((-127 - 1) ? var_1 : var_7))))));
        var_24 = ((min((arr_3 [i_7]), 0)));
    }
    var_25 = 0;
    var_26 = var_1;
    #pragma endscop
}
