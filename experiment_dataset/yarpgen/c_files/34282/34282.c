/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_11 = (min(var_11, (((((max(7242, (arr_1 [i_0 + 2] [8])))) ? (((((arr_1 [i_0 - 2] [i_0 + 3]) > 789902552)))) : ((1347 ? (arr_1 [i_0 + 1] [i_0 + 1]) : (arr_1 [i_0 + 1] [i_0 - 1]))))))));

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            var_12 = (-127 - 1);
            var_13 = (arr_1 [i_0] [i_0 - 2]);
        }
        var_14 = (min(var_14, ((max((((arr_0 [i_0 + 3]) ? (arr_2 [i_0]) : ((12382899730313688096 ? (arr_1 [12] [i_0 + 2]) : 5)))), 10507032235442867218)))));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_15 = ((((var_10 ? (arr_6 [i_3] [i_3]) : 12382899730313688096)) ^ (((arr_5 [i_3]) | 255))));
            var_16 = 1442182624;
            arr_9 [19] [19] [11] = (((((((arr_8 [22]) <= 2)) && ((max((arr_8 [i_2]), 48649))))) ? ((var_4 | ((10507032235442867218 ? (arr_8 [i_2]) : var_8)))) : (((((var_7 ? var_2 : -114)) | (((arr_6 [i_2] [i_3]) ? 1387 : 122)))))));
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    arr_14 [i_2] [i_4] [3] = (((-15 - 1703310617) ? (((((122 ? 18446744073709551609 : 162))) ? (60497 < 81) : ((max(49384, -104))))) : var_0));
                    var_17 = (arr_6 [i_4] [i_4]);
                }
            }
        }
    }
    var_18 &= (((((((min(-114, var_6))) ? var_9 : (min(0, var_1))))) ? ((var_7 ? ((max(var_4, 69))) : ((min(113, var_9))))) : var_5));
    var_19 = ((var_8 != (((((5 <= 18453) != var_4))))));
    #pragma endscop
}
