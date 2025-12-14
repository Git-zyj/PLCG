/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 = (min(var_19, (((!var_5) ? -2626861522105821608 : ((((!(!var_15)))))))));
        arr_2 [i_0] = ((var_12 ? (arr_1 [i_0]) : 58557));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_20 = (((arr_0 [i_1]) ? (((~1) ? (arr_1 [i_1]) : var_15)) : (min(((868474699969616617 ? var_5 : 0)), var_12))));
        var_21 *= (!var_11);
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        var_22 -= 1;
                        var_23 = (var_12 ? 1 : (!var_4));
                        var_24 = ((-((0 ? (arr_5 [i_4 + 3]) : (arr_3 [i_4 - 1])))));
                    }
                }
            }
        }
        arr_14 [i_2] = 25531;
    }
    var_25 -= ((!(((min(1, 1))))));
    var_26 = 59441;
    #pragma endscop
}
