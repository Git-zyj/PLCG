/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [3] [3] |= (max((42768 / 28451), (42758 / 42768)));
        var_17 -= var_5;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            arr_16 [i_1] [6] [i_3] [i_4] [i_3] = ((-(arr_14 [i_1])));
                            arr_17 [17] [i_2] [19] [i_3] [i_1] = ((176 + (arr_13 [i_3])));
                            arr_18 [1] [i_3] [3] [3] [7] = (((arr_8 [i_2] [i_5]) - (arr_13 [i_3])));
                        }
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            arr_21 [i_3] = 18260594090804393817;
                            arr_22 [i_1] [i_2] [i_2] [i_2] [i_3] = (1772204594 / -1772204595);
                            var_18 = (arr_9 [i_1] [i_3] [i_1]);
                            var_19 ^= (arr_9 [i_1] [i_4] [i_3]);
                        }
                        for (int i_7 = 1; i_7 < 22;i_7 += 1)
                        {
                            arr_27 [i_1] [i_4] [i_1] &= 2373368165;
                            var_20 |= ((673221283 - (arr_24 [i_7 + 1] [i_7 + 1] [i_7 + 1])));
                        }
                        arr_28 [i_1] [i_3] [i_3] = ((4 ? var_3 : 22756));
                        var_21 = ((!(arr_8 [i_1] [i_4])));
                    }
                }
            }
        }
        var_22 = ((42779 & ((var_7 ? -58 : 1901077361))));
        var_23 = (!var_0);

        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            arr_31 [i_1] [i_1] [i_8] = 42778;
            arr_32 [i_8] [11] [i_8] = 12812;
            var_24 = (-1772204608 / 42768);
        }
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            var_25 = (58326 & var_5);
            var_26 = 4325597693219071926;
        }
    }
    var_27 = (((var_3 ? (52 / -52) : var_9)));
    var_28 = ((var_8 - (var_6 - -var_7)));

    for (int i_10 = 0; i_10 < 25;i_10 += 1)
    {
        var_29 = 6692475238822983170;

        for (int i_11 = 3; i_11 < 23;i_11 += 1)
        {
            var_30 = (((-69 * var_10) & 42750));
            var_31 = (min(var_31, (((((min((arr_40 [i_10] [i_11 + 1]), (arr_40 [i_10] [i_11 - 2])))) & 58326)))));
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            var_32 ^= ((((34439 & (arr_39 [i_10] [i_10] [i_10]))) & (((!(arr_42 [i_10] [i_12]))))));
            arr_43 [i_12] = 10669452983288821957;
        }
        arr_44 [i_10] = 1857;
        var_33 = (((((((7206 ? var_1 : 1873)) * 1844))) ? 22756 : var_7));
    }
    var_34 = var_8;
    #pragma endscop
}
