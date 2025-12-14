/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    var_13 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                var_14 = (((!32750) ? (((arr_5 [i_0] [i_1]) ? (arr_0 [i_1] [13]) : 1)) : (arr_4 [i_0] [3] [i_0])));
                arr_10 [i_0] [i_0] [i_2] = (((((arr_4 [i_0] [i_0] [i_2]) <= var_6)) ? ((var_3 ? (arr_4 [i_0] [i_1] [i_2]) : 1274099091)) : 1));
                var_15 *= (-24062 * 1);
                var_16 = (max(var_16, var_2));
                var_17 = (min(var_17, ((1 > ((((arr_7 [i_2] [i_1] [i_0]) && 18446744073709551615)))))));
            }

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                arr_13 [i_0] = var_1;
                var_18 = ((!(arr_4 [i_0] [i_1] [i_3])));
            }
            var_19 = (min(var_19, (arr_7 [i_0] [i_0] [i_1])));
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_16 [i_0] = ((var_2 != (arr_5 [i_0] [8])));
            arr_17 [i_4] [i_4] [i_4] &= ((-(arr_5 [8] [i_0])));
            var_20 ^= ((34225520640 ? -10831 : -3363504428095953461));
            var_21 = (((arr_14 [i_0] [4] [i_0]) ? (arr_14 [i_0] [i_4] [i_4]) : 1));
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            arr_21 [i_0] = ((!((!(arr_19 [i_5] [i_0] [1])))));
            arr_22 [i_0] = 2653129029;
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    {
                        var_22 &= (arr_24 [9] [9] [i_6] [i_7]);
                        var_23 = ((!(arr_15 [i_0] [i_5] [i_6])));
                        arr_30 [i_0] [i_0] [i_0] [i_0] = (((arr_1 [i_0]) && (arr_1 [i_0])));
                        var_24 = 2147483643;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    {
                        var_25 = (((((1 ? 1874281098832161612 : 262143))) && (arr_2 [i_0] [i_0])));
                        var_26 = ((((var_2 < (arr_1 [13]))) ? ((var_0 ? 18446744073709551615 : var_5)) : (arr_25 [i_0] [i_8] [i_9] [i_0])));
                        var_27 = (((!252) ? (arr_28 [i_0] [i_8] [6] [i_10] [i_8]) : (!var_7)));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 13;i_11 += 1)
    {
        var_28 -= var_4;
        arr_41 [i_11] [i_11] &= (arr_39 [i_11]);
        arr_42 [i_11] [1] = (arr_18 [i_11]);
        var_29 = ((1 ? 1 : (arr_24 [i_11] [i_11] [i_11] [i_11])));
    }
    #pragma endscop
}
