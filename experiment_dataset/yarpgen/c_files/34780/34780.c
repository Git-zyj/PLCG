/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((min(((var_16 ^ (var_0 / var_6))), (((var_12 ? var_12 : var_16))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = (min(var_21, ((((((!var_8) ? 1180185862 : var_5)) >= ((-var_18 ? 14718 : 5246320833483655815)))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    {
                        var_22 = ((~((((min(var_16, -1))) ? (~1242360066) : 1000564026))));
                        var_23 = (((arr_7 [i_1 + 2] [i_2 - 1] [i_0]) ? (arr_7 [i_1 + 4] [i_2 + 1] [i_0]) : ((0 ? var_19 : var_13))));
                        var_24 = (max(var_24, 1242360066));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_25 = (max(var_25, (((+((((var_8 ? (arr_13 [i_4]) : -6671416851529104087)) & (max(var_14, var_14)))))))));

        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            var_26 = (min(var_26, var_2));
            var_27 = var_14;
        }
        var_28 = ((((((arr_12 [i_4]) ? (arr_16 [14] [i_4]) : 1))) ? (min(-7, var_18)) : (arr_12 [i_4])));
    }
    #pragma endscop
}
