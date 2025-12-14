/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (((((10 ? -30120 : ((-28320 ? 1 : var_1))))) ? (max((0 / var_0), ((1 ? 60 : 1)))) : ((1 ? 30090 : (arr_0 [i_0])))));
        var_17 = var_4;
        arr_3 [3] [i_0] = 26243;
    }
    var_18 *= 1;

    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        var_19 = var_13;
                        var_20 *= var_15;
                    }
                }
            }
        }
        var_21 = (((max((1 + 4), (arr_0 [i_1]))) == (!18446)));
        var_22 = (min(var_22, (((!(((var_5 ? (((!(arr_15 [i_1] [12] [i_1] [i_1])))) : 1))))))));
    }
    var_23 &= ((((1 ? var_5 : var_7))));
    #pragma endscop
}
