/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min(var_7, 5686353958976446860);

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = 3315349747;
        arr_3 [i_0] = (min((((979617563 == ((~(arr_0 [i_0] [i_0 - 1])))))), (((arr_1 [i_0]) ? (979617538 - var_3) : var_8))));
        arr_4 [i_0] [i_0] = (((~(38568 * 443069117))));
        arr_5 [i_0 - 3] &= min((((max((arr_0 [2] [i_0]), 4292530308685746799)))), (((((var_17 ? var_8 : -17502))) ? (max((arr_0 [1] [i_0 + 1]), (arr_0 [i_0 - 3] [i_0]))) : var_6)));
    }
    for (int i_1 = 4; i_1 < 14;i_1 += 1)
    {
        arr_8 [1] = ((((12 ? (!var_15) : (min(var_3, 443069117)))) / (((((max(37624253, var_8)) < (((min(var_13, var_4))))))))));
        arr_9 [i_1] = (((min(3315349746, 6089728469415449005)) >> 1));
    }
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        var_19 = (min((((var_3 / var_6) ? (max(var_8, (arr_0 [i_2 + 1] [i_2]))) : ((max((arr_1 [i_2]), 1))))), (min(0, (arr_11 [i_2] [i_2])))));
        arr_12 [i_2] [i_2] = (-(max((max(var_1, var_9)), (min(var_5, -9223372036854775796)))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        arr_22 [i_2] = (max(((979617538 ? (arr_17 [i_2 + 2] [i_2] [i_2 + 1]) : (arr_17 [i_2 + 2] [i_2] [i_2 + 1]))), ((~(arr_17 [i_2 + 2] [i_2] [i_2 + 1])))));
                        var_20 = (min(var_20, ((max(((min((max(1, var_16)), var_1))), var_11)))));
                        arr_23 [i_2] [i_2] = (((max((arr_1 [i_5]), (arr_1 [i_2 - 2])))) ? (((arr_1 [i_2 - 1]) ? var_9 : (arr_1 [i_4]))) : (((-9223372036854775807 - 1) / var_5)));
                        var_21 = (min(var_21, (max((((min(6389442328453113592, 1)))), ((((max((arr_15 [i_2] [i_4]), 1))) ? (~var_6) : (min(var_10, (arr_0 [i_2 + 2] [i_3])))))))));
                        arr_24 [i_2] [i_2 + 2] [i_2 - 2] [9] [i_2] = (((((~(~var_12)))) | ((min(var_0, -99)))));
                    }
                }
            }
        }
    }
    var_22 = ((((39 - ((2075177814 ? var_12 : var_11)))) & var_17));
    var_23 = max((max(var_11, ((((((-32767 - 1) + 2147483647)) >> (4192437353 - 4192437339)))))), (min(var_5, ((var_11 ? 5765404922078737088 : var_3)))));
    #pragma endscop
}
