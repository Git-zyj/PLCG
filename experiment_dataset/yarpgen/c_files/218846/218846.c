/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (96 && 35184372088831);
    var_14 = (max((((121 && ((min(var_12, -20735)))))), var_5));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = var_12;
        var_15 = ((12198758349692388085 ? (arr_0 [i_0] [i_0]) : 121));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    {
                        var_16 ^= (((var_2 / (arr_4 [i_0] [i_3]))));
                        var_17 = arr_9 [i_3 + 2] [i_3] [i_3 + 2] [i_3] [i_3 + 2] [i_3 + 1];
                    }
                }
            }
        }
        var_18 += (~28);
        arr_10 [12] |= ((-(arr_7 [i_0])));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_14 [i_4] = ((((min(var_4, (max(1, 15025929523245081635))))) ? (((102 - 3420814550464469989) ? var_2 : 9223372036854775795)) : (arr_3 [i_4])));
        arr_15 [i_4] = (max(1, var_8));
        var_19 = (((!(((var_1 ? -2011949611 : var_4))))));
        var_20 = max((3420814550464469989 - 33976), 9223372036854775808);
        arr_16 [i_4] = var_7;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    {
                        var_21 = (min(var_21, (((!(arr_6 [i_7 - 1] [i_7 - 1] [i_5] [i_5]))))));
                        arr_25 [i_8] [i_7] [i_6] [i_5] = var_11;
                    }
                }
            }
        }
        var_22 = 10130;
        arr_26 [i_5] = (arr_13 [i_5]);
        var_23 = ((var_2 ? (arr_18 [i_5]) : ((var_6 ? 65521 : 1))));
    }
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 11;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 13;i_10 += 1)
        {
            {
                var_24 = -17428;
                var_25 = (min(var_25, var_3));
                var_26 = ((((var_10 ? 0 : -16))) ? 132120576 : ((((arr_19 [i_9 + 2]) > (arr_19 [i_9 + 3])))));
            }
        }
    }
    #pragma endscop
}
