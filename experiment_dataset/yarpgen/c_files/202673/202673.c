/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = (((((-(arr_1 [i_0] [i_1])))) - (((-(arr_4 [i_1]))))));
                var_16 = (max(var_16, (((127 ? ((var_10 ? var_11 : 142)) : var_5)))));
                arr_5 [i_1] [i_0] [i_0] = ((var_5 == ((var_11 ? (var_11 / 533188267) : ((~(-9223372036854775807 - 1)))))));
            }
        }
    }
    var_17 = (((((((max(var_3, var_4))) ? var_9 : (~var_8)))) ? var_2 : var_4));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {

                    for (int i_5 = 3; i_5 < 19;i_5 += 1)
                    {
                        var_18 = (min(var_18, var_4));

                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            var_19 = ((((((arr_11 [i_5 - 1]) ? 3761779029 : -8126508162544284019))) ? ((((arr_11 [i_5 - 1]) ? 1536038048 : (arr_11 [i_5 - 2])))) : (arr_10 [8] [i_6 - 1] [i_5 + 2])));
                            arr_19 [0] [i_4] = (((((var_12 && var_7) >= (arr_9 [i_5 + 1] [i_5 + 2] [i_5 - 2]))) ? (~12893249942948873732) : (arr_6 [i_5])));
                        }
                        var_20 = (max(var_20, ((max((min((~533188267), ((3761779033 ? -1 : (arr_13 [i_2] [i_3] [18] [i_3]))))), (!-var_6))))));
                        arr_20 [i_2] [4] [i_2] [i_2] = (((((270638223189469790 ? (arr_13 [6] [6] [i_4] [i_5 - 1]) : (arr_13 [i_2] [0] [3] [i_5 - 1])))) ? (((arr_17 [i_2] [i_2] [i_2] [i_3] [15] [15] [i_2]) ? (max(533188242, 398406437)) : (!var_1))) : 533188267));
                    }
                    arr_21 [i_2] [i_2] [i_2] = ((((max(533188278, 0))) ? (((arr_9 [i_2] [i_3] [i_4]) ? (arr_9 [i_2] [i_3] [7]) : (arr_9 [i_3] [i_3] [i_2]))) : (min((arr_9 [i_2] [i_3] [i_4]), (arr_9 [i_2] [i_2] [i_2])))));
                    var_21 = ((var_11 ? (arr_15 [i_3] [i_3] [i_3] [i_2]) : (((arr_15 [i_2] [i_2] [i_2] [i_2]) ? 533188278 : (arr_15 [i_2] [i_4] [i_4] [i_4])))));
                }
            }
        }
    }
    #pragma endscop
}
