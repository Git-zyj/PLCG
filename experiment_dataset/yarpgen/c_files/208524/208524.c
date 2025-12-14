/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_20 = (((((4248269866 ? 16384 : (arr_0 [i_0 + 3] [i_0 + 2])))) ? (arr_1 [i_0]) : (((arr_1 [i_0]) ? (arr_0 [i_0 + 3] [i_0 - 1]) : (arr_0 [i_0 - 1] [i_0 + 3])))));
        var_21 = ((max(((min(151, (arr_1 [i_0])))), (((arr_1 [i_0]) | (arr_0 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        var_22 = arr_6 [i_3] [i_2] [i_1];
                        var_23 ^= (((((+(((arr_8 [2]) ? (arr_1 [i_1]) : (arr_4 [i_2] [i_2])))))) != (((((~(arr_13 [i_4])))) ? (((arr_12 [i_1] [15] [i_1] [i_1]) * var_8)) : 32757))));
                        var_24 = (-9223372036854775807 - 1);
                    }
                }
            }
        }
        var_25 = (min(var_25, 1));
        var_26 *= (((arr_6 [7] [i_1] [i_1]) ? ((((~(arr_0 [i_1] [i_1]))) + (arr_0 [12] [9]))) : (arr_1 [i_1])));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
    {
        var_27 = (max(var_27, var_2));
        var_28 &= ((((((arr_9 [i_5] [i_5] [i_5] [i_5]) * 1988678868087529877))) ? (arr_13 [i_5]) : var_7));
    }
    var_29 |= 104;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            {

                /* vectorizable */
                for (int i_8 = 2; i_8 < 14;i_8 += 1)
                {
                    var_30 = (((arr_2 [i_6]) ? ((var_17 ? (arr_5 [i_8 + 1] [i_7] [i_6]) : (arr_13 [6]))) : (((((arr_13 [i_6]) > 42))))));
                    var_31 = ((arr_0 [1] [i_8 - 2]) / var_14);
                }
                var_32 = (arr_21 [i_6] [i_6] [i_6] [i_6]);
            }
        }
    }
    #pragma endscop
}
