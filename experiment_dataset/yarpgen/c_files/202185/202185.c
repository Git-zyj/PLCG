/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = (max(var_16, var_1));
        var_17 = (max(var_17, (((61687 ? ((var_8 + (arr_0 [i_0]))) : var_8)))));
        var_18 = (!61684);
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        var_19 = (((((1661535090 & (-127 - 1)))) ? 575469834 : ((~(((arr_6 [i_1]) * 61677))))));
        var_20 -= ((((arr_6 [i_1 - 1]) - 0)) > 255);
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    var_21 = ((((0 ? 91 : (arr_5 [i_2 - 1]))) & ((~(arr_5 [i_2 - 2])))));
                    var_22 = (max(var_22, ((max(((min(244, (arr_8 [i_1 - 1])))), (((arr_8 [i_1 + 2]) ? var_7 : (arr_8 [i_1 - 2]))))))));
                }
            }
        }
    }
    var_23 = var_11;
    var_24 = var_12;
    var_25 = var_13;
    #pragma endscop
}
