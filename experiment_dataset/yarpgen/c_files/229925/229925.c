/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_4 ? ((max(1, 40490))) : var_8));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_0] = ((((((var_11 ? 61 : var_0))) ? ((1 ? 5051 : 1)) : ((min(1, (arr_11 [i_3] [i_0] [i_0] [i_0])))))));
                        var_16 = (max(var_16, var_0));
                        var_17 = ((-32760 < ((((-52 + 2147483647) >> (var_8 - 4322))))));
                    }
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        var_18 *= ((((((arr_13 [i_0] [i_1 - 2] [i_2] [i_4] [i_0]) | (arr_13 [i_0] [i_1 + 1] [i_1 + 1] [i_4] [i_1 + 1])))) ? var_9 : ((((arr_13 [i_0] [i_1 - 2] [i_4] [i_0] [i_0]) & 0)))));
                        arr_17 [i_0] [i_1] [i_4] = var_9;
                        var_19 ^= 1840872667;
                        var_20 = ((min(var_10, var_13)));
                    }
                    arr_18 [i_0] [i_1] [i_2] = (1 + 9290513592160469690);
                }
            }
        }
    }
    var_21 = (((~-36) ^ (min(var_5, var_0))));
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    arr_28 [i_6] [i_6] [1] = (max(-1, 6286977363400496037));

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        var_22 = (25046 | (arr_23 [i_5 + 1] [i_5 + 1]));
                        var_23 = (min(var_23, (((var_0 > 1) ? var_9 : (arr_26 [i_8] [i_7] [i_6] [i_5])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
