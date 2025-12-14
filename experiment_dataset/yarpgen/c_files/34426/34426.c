/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= var_1;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = 18009;
        arr_3 [i_0] [14] &= (max((max((arr_1 [16]), (arr_1 [20]))), (arr_1 [0])));
        arr_4 [i_0] = ((((((arr_0 [i_0 - 1] [i_0 - 1]) / -18009))) ? (((arr_0 [i_0 - 1] [i_0 - 1]) ? var_3 : (arr_0 [i_0 - 1] [i_0 - 1]))) : (arr_0 [i_0 - 1] [i_0 - 1])));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_19 = ((-((((!(arr_8 [i_0 - 1] [i_1] [i_2] [i_1])))))));
                    var_20 = (max(var_20, (((!((-2669 > (18009 == 103))))))));
                }
            }
        }
    }
    for (int i_3 = 3; i_3 < 18;i_3 += 1)
    {
        arr_14 [1] = (((((9221544764958100546 ? var_9 : ((var_14 | (arr_10 [i_3] [22] [i_3 + 1] [i_3 - 3])))))) ? (max((max(-8183674971114322287, -7014)), 9223372036854775807)) : 18009));
        arr_15 [i_3] &= (arr_10 [18] [14] [i_3] [i_3]);
        var_21 = (min(var_21, ((((min(var_7, (max(var_9, -14531)))) == ((((var_2 >> var_3) ? ((18015 >> (var_4 - 28902))) : ((max((arr_0 [i_3] [18]), 45)))))))))));
    }
    var_22 &= ((209 ? 1859809787804739234 : ((var_4 ? -var_11 : var_17))));
    #pragma endscop
}
