/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((-(((((var_7 ? -401319380 : 0))) ? -var_1 : ((var_2 ? 189 : var_6)))))))));
    var_13 = ((var_2 ? var_5 : 0));
    var_14 = (((var_10 / var_9) + ((var_9 ? var_1 : ((var_5 ? var_6 : 8))))));
    var_15 = (min(-3, 0));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = -3592047888960285779;
        var_17 += (((min(331174719, (var_2 - 1))) >= (min((var_7 + 16957033057680078530), ((min(var_10, 1198691788)))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_18 = (((-(arr_0 [i_1]))));
        arr_6 [i_1] = ((((((arr_4 [i_1]) ? (arr_5 [17]) : (arr_4 [i_1])))) * var_6));
        arr_7 [i_1] = var_0;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_19 = (((arr_0 [i_2]) % (arr_0 [i_2])));
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_15 [7] [i_3] [7] = (((((10 ? var_0 : 184))) % (((arr_4 [i_3]) ? var_0 : var_6))));

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        arr_19 [i_2] [i_3] [i_4] [i_5] = (arr_3 [i_3 + 1]);
                        var_20 ^= (arr_5 [i_3 + 1]);
                    }
                    var_21 = var_1;
                    arr_20 [i_4] [i_3] [i_4] [i_3] = ((-(arr_18 [i_3 - 2] [i_3 - 3] [i_3] [i_3])));
                    arr_21 [i_2] [i_2] [i_3] [i_2] = var_10;
                }
            }
        }
    }
    #pragma endscop
}
