/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_5 [3] [i_0] = var_0;
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_19 *= (arr_9 [i_2 - 1] [i_2] [i_2] [i_3]);
                        var_20 = (((arr_7 [i_0] [i_1] [i_2 + 2] [i_1]) ? var_5 : (arr_9 [i_1] [i_2] [i_1] [i_1])));
                        var_21 = var_2;
                        var_22 *= (arr_0 [i_0] [i_1]);
                        var_23 = (i_0 % 2 == zero) ? ((((arr_6 [i_0] [i_1] [i_1] [i_3]) * (arr_6 [i_0] [i_1] [21] [i_3])))) : ((((arr_6 [i_0] [i_1] [i_1] [i_3]) / (arr_6 [i_0] [i_1] [21] [i_3]))));
                    }
                }
            }
            var_24 = (arr_9 [i_0] [i_0] [i_1] [i_1]);
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            arr_13 [i_0] = var_16;
            var_25 = ((var_2 ? var_3 : (arr_12 [i_0] [i_0])));
            arr_14 [i_0] [i_0] [i_0] = (((((arr_1 [i_0]) ? var_1 : var_2)) + (arr_8 [i_0] [i_0] [i_0] [i_4] [i_0])));
        }
        var_26 = (max(var_26, (arr_9 [i_0] [14] [i_0] [14])));
        var_27 *= 6;
    }
    var_28 = (((((max((var_9 || var_8), (!var_14))))) < ((var_2 ? var_3 : (((var_3 ? var_2 : var_15)))))));
    #pragma endscop
}
