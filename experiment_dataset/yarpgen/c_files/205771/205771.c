/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (~0);

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_13 = var_7;
            var_14 &= ((135 / (arr_1 [i_1])));
            var_15 = (max(var_15, var_10));
            var_16 = ((1 ? -2042048818 : -2042048802));
        }
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                arr_12 [i_2] [i_2] [i_2] = (((arr_6 [i_2 + 2] [i_2 - 1] [i_0]) > 0));
                var_17 = (min(var_17, (((~(arr_5 [i_3] [4]))))));
                var_18 = (~(arr_5 [i_2] [i_2 - 1]));
            }
            for (int i_4 = 1; i_4 < 15;i_4 += 1)
            {
                var_19 = ((~(~-839187680587901423)));
                var_20 = (0 <= 3);
            }
            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                var_21 = ((~(!20)));
                arr_18 [i_5] [i_5] [i_2] [i_0] = (~var_2);
                arr_19 [0] [i_2] = ((82723291 ? var_2 : (arr_16 [i_2 + 2])));
                arr_20 [i_0] [i_2] [i_5] = (((arr_10 [i_2 + 1] [i_5 + 1] [i_5 + 1]) ? (arr_5 [i_2] [i_2 - 1]) : (arr_9 [i_0] [i_2])));
            }
            var_22 = (!-2);
            var_23 ^= ((-(-1384911987 / var_1)));
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        var_24 = (arr_9 [i_6] [i_6]);
        var_25 = (arr_2 [i_6]);
        var_26 = ((!-11) * (arr_9 [i_6] [i_6]));
        arr_23 [i_6] = ((!(arr_15 [15] [i_6] [i_6])));
    }
    var_27 = ((-(2042048818 / -2042048818)));
    #pragma endscop
}
