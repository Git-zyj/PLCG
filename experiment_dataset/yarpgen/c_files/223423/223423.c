/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 3;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 13;i_1 += 1) /* same iter space */
        {
            var_20 = (min((-5 ^ 233782847), (65535 * -32750)));
            arr_6 [i_1] = ((((min(255, 908))) ? 28160 : var_5));
        }
        for (int i_2 = 2; i_2 < 13;i_2 += 1) /* same iter space */
        {
            var_21 = (~(min(-1, ((6 ? -6491556851503475877 : var_12)))));
            arr_9 [i_0] [i_2 - 2] [i_0] = (max(-82, 81));
            arr_10 [i_0] [i_2 - 1] |= ((var_10 ? (arr_1 [i_2]) : ((max(((((arr_1 [i_2]) < 2036720000))), 5)))));
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_22 = ((((((-(arr_7 [i_0] [i_3] [i_4])))) ? var_5 : var_15)) & -82);
                            arr_19 [i_0] [i_0] [i_3] [i_5 + 3] [i_5 + 1] [i_2] = ((15 < (min(var_14, 1953721769))));
                        }
                    }
                }
            }
        }
        arr_20 [i_0] = var_4;
        arr_21 [i_0] = 702670244;
    }
    var_23 = (min(var_23, (((!(!var_16))))));
    #pragma endscop
}
