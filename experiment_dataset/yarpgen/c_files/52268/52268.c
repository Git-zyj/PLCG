/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
                    {
                        var_16 = (((((arr_1 [i_3 + 1]) + 2147483647)) << ((var_9 ? (arr_7 [i_0] [i_1] [i_0] [i_0]) : (arr_8 [i_0] [i_1] [i_1] [i_3] [i_0])))));
                        var_17 = (min(var_17, (arr_7 [14] [i_1] [14] [i_3])));
                        var_18 = (min((((!var_11) ? (arr_9 [i_3 - 1] [i_3 - 1] [3] [i_2]) : var_3)), -var_5));
                    }
                    for (int i_4 = 1; i_4 < 22;i_4 += 1) /* same iter space */
                    {
                        var_19 = max((((arr_8 [i_2] [i_4 + 1] [14] [i_4 + 1] [i_4 + 1]) ? 1785904791871139468 : (arr_7 [3] [1] [i_2] [16]))), 1);
                        arr_12 [i_1] [i_1] [i_1] [i_1] = ((((!var_4) ? var_5 : (-2147483647 - 1))));
                    }
                    arr_13 [i_2] [i_2] &= var_11;
                    var_20 -= (min(((((arr_6 [i_1] [i_1] [i_2]) ? (arr_6 [i_0] [i_0] [i_2]) : (~1)))), ((var_13 ? (arr_3 [i_2] [i_2] [i_2]) : ((((arr_11 [6] [i_0] [i_1] [i_2]) & (arr_10 [i_0]))))))));
                    var_21 = (arr_2 [i_0]);
                }
            }
        }
    }
    var_22 &= var_13;
    var_23 = ((((var_3 ? ((394691049572415001 ? 1 : 10333095464188857896)) : var_11)) << (((min(((539143771 ? var_9 : var_1)), ((var_1 ? var_11 : var_10)))) - 10804156324659663601))));
    #pragma endscop
}
