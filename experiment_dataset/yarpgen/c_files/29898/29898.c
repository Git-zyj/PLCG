/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_13 = (((var_4 > var_10) ? (arr_0 [i_0] [i_0 + 1]) : (((arr_1 [i_0]) ? 2147483647 : (max(2147483643, var_11))))));

        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            var_14 = arr_2 [i_0 - 1];
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_15 = ((-(arr_3 [i_0] [i_0])));
                        var_16 = (min(var_16, (((-8192 ? (((var_7 >= (arr_7 [i_0 - 1] [i_0 - 1] [i_1 + 1] [i_1 - 2])))) : ((-(arr_7 [i_0 - 1] [i_0 - 1] [i_1 - 2] [i_1 - 1]))))))));
                        var_17 = ((var_0 ? ((((arr_8 [i_0 - 1] [i_0 - 1]) >= var_7))) : (min(((min((arr_2 [i_2]), (arr_0 [i_0] [10])))), (arr_11 [i_0] [i_1 - 1] [i_0] [i_2])))));
                        var_18 = (min(var_18, (((((min(var_2, var_3))) < var_3)))));
                        arr_13 [i_3] [i_2] [i_1 - 1] [i_3] = (arr_4 [i_0] [i_0] [i_2]);
                    }
                }
            }
            var_19 = (((((-2147483647 ? (arr_8 [i_0] [i_1]) : var_5)) >= (arr_1 [i_1]))));
        }
        arr_14 [i_0] [i_0] = (min(((~(min((arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]), var_8)))), (((-((var_4 << (var_4 - 40687))))))));
        var_20 = (((((arr_3 [i_0 + 1] [i_0 - 1]) - 23184)) >= (((max(var_3, var_11)) ? ((min(var_5, 8191))) : var_1))));
        var_21 = ((~(arr_9 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0])));
    }
    var_22 = min(((((var_5 & var_0) > (min(var_8, var_12))))), (((var_1 ? var_0 : var_5))));
    var_23 = ((var_1 < (((((var_6 ? var_7 : var_1))) ? var_5 : var_10))));
    #pragma endscop
}
