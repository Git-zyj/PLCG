/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = (max(var_17, (((9122 * (max(1905476289, 16320)))))));
        arr_2 [i_0] = ((max(-402368779, (arr_0 [i_0] [i_0]))));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_18 = (min(var_18, (!0)));
        var_19 &= (((((min((arr_6 [i_1 - 1] [i_1]), (arr_4 [i_1 + 1] [i_1]))))) ? ((-((var_10 ? (arr_6 [i_1] [i_1]) : var_11)))) : (2131706431 || 215588682)));
    }
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        var_20 = (min(9099, (((((16947 ? -90 : (arr_5 [i_2])))) ? 3974 : 18))));
        var_21 = (var_10 ? var_13 : (arr_3 [i_2]));
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    arr_16 [i_3] [i_3] [i_3] [i_3] = ((arr_9 [i_4] [i_5]) / (min(9100, (((arr_14 [i_3] [i_5]) ? (arr_13 [i_3] [i_4] [i_5]) : (arr_14 [i_5] [i_4]))))));
                    var_22 |= var_16;
                    var_23 = (min(var_23, ((((!40604) ? (min((((9122 ? -90 : 32767))), var_10)) : (((~((~(arr_14 [i_4] [i_3])))))))))));
                    arr_17 [i_3] [i_3] [i_5] = ((max((arr_15 [i_3]), (arr_15 [i_3]))));
                }
            }
        }
    }
    var_24 = var_2;
    #pragma endscop
}
