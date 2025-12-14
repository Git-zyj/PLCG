/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    var_17 |= var_5;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = ((-1651818348 + 2147483647) << (((min(1974306884, 127)) - 127)));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_19 = 1737257908;
                        var_20 = (min(76553597, 93));
                        var_21 = (max(var_21, ((min(((((28 == 1) < 2147483647))), ((3 ? 20 : 390857735)))))));
                        arr_11 [i_1] [3] [i_2] [i_2] [i_2] = min(1575176118, (min(-1023, (arr_9 [i_1] [i_1] [i_0] [i_3] [i_3]))));
                    }
                }
            }
        }
        var_22 *= min((arr_6 [i_0] [15] [i_0]), var_7);
        arr_12 [i_0] [i_0] = (min((((arr_1 [i_0]) | (arr_1 [i_0]))), (((arr_1 [i_0]) >> (((arr_1 [i_0]) - 45))))));
        arr_13 [i_0] = ((1 ? (arr_3 [i_0] [i_0] [i_0]) : 607016527));
    }
    #pragma endscop
}
