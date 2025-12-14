/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 |= ((arr_2 [i_0] [i_0]) ? (max((-9223372036854775807 - 1), (arr_1 [i_0]))) : (((((max((arr_0 [i_0] [i_0]), var_3))) ? 2147483644 : ((4 ? (arr_2 [i_0] [i_0]) : var_4))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_19 = 6157;
                    arr_10 [i_0] [i_0] [i_0] = ((!(((~(max((arr_3 [i_0] [i_0]), var_8)))))));
                    var_20 = var_15;
                    var_21 = (min(var_21, var_8));
                    var_22 = ((!(((-2147483645 ? var_1 : (-2147483647 - 1))))));
                }
            }
        }
        var_23 = ((~((~(arr_9 [i_0] [i_0] [i_0] [i_0])))));
        var_24 -= (2147483642 > 2147483637);

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_25 = -2147483645;
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {
                        var_26 = (arr_11 [i_4 + 1] [i_0]);
                        var_27 -= ((var_15 ? (((arr_16 [i_0] [i_3] [i_3] [i_5]) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (arr_9 [i_5] [i_4 + 1] [i_3] [i_0]))) : 2147483627));
                        var_28 = ((((((max(var_9, -2147483634)) ^ var_12))) ^ (var_11 / var_17)));
                    }
                }
            }
        }
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            arr_21 [i_0] [i_0] [i_0] = arr_16 [i_0] [3] [i_0] [i_6 + 1];
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 15;i_8 += 1)
                {
                    {
                        var_29 = (((arr_13 [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]) ? (max(-66, 2147483618)) : 44541));
                        var_30 *= 1;
                    }
                }
            }
            var_31 = (min(var_31, (!var_8)));
            arr_27 [i_0] [i_6] [i_0] = (max(1214664509, var_8));
            var_32 = ((44548 ? (arr_9 [i_6 + 1] [i_0] [i_0] [i_0]) : ((max(-2147483641, 2147483645)))));
        }
    }
    var_33 = var_12;
    var_34 = var_5;
    #pragma endscop
}
