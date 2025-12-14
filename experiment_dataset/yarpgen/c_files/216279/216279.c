/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = (arr_1 [i_0] [i_1]);
                var_16 = (((arr_0 [i_0]) ? ((((arr_5 [i_0 + 2] [i_0]) ? (((min(var_11, 194)))) : (arr_2 [i_0] [i_0])))) : (((arr_3 [i_0 + 2] [4] [i_0 + 2]) % ((var_14 ? var_8 : var_6))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_17 -= var_13;
                            arr_11 [i_0] [i_1] [i_2] [i_3] = (max(67, 62));
                            var_18 = (arr_9 [i_0] [i_2] [i_2]);
                            var_19 = ((200 ? 1850207212 : 193));
                        }
                    }
                }
                var_20 = (arr_10 [i_0 - 1] [i_0 - 1] [9]);
            }
        }
    }

    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_21 = ((((((var_1 * (arr_14 [i_4]))))) ? (~207) : ((+((max((arr_13 [i_5]), 72)))))));
            var_22 -= var_12;
        }
        arr_16 [i_4] = (((((((~(arr_13 [i_4])))) ? 185 : 1196230596))) ? (min(var_10, ((var_11 / (arr_12 [5]))))) : (1 > 1));
        var_23 = (((((arr_12 [i_4]) > ((-(arr_15 [i_4] [i_4] [i_4]))))) ? ((var_5 ? (((arr_12 [1]) | var_6)) : (((((arr_13 [i_4]) && var_0)))))) : (~var_5)));
    }
    var_24 = (max((min(var_7, ((var_14 ? var_10 : var_13)))), ((((min(var_14, var_11)))))));
    var_25 = var_4;
    #pragma endscop
}
