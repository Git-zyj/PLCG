/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (+-1);
    var_18 = (min(((((((var_10 ? var_12 : 7))) ? var_7 : ((var_5 ? var_6 : -1))))), (((-1 ? 18 : 24902)))));

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        arr_3 [i_0 + 3] = -4;
        var_19 = 18446744073709551615;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            arr_8 [i_1] = ((var_10 ? 46368 : -10));
            var_20 *= (((((var_11 ? 1 : (arr_7 [8] [i_1])))) ? (arr_5 [i_2]) : ((18446744073709551598 ? 111 : 0))));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                var_21 += (!1);
                var_22 -= (arr_4 [i_1]);
            }
            arr_14 [i_1] = (arr_13 [8] [i_3] [i_3]);
        }
        arr_15 [i_1] = (~0);
        arr_16 [3] = ((~(arr_5 [1])));
    }
    #pragma endscop
}
