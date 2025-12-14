/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 187;
    var_21 = var_8;
    var_22 = ((var_11 / (min(var_7, var_14))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_23 = ((+((var_3 ? (arr_11 [i_0 - 2] [i_0] [i_0] [i_0 - 3] [i_0] [i_0 + 2]) : var_12))));
                            arr_13 [i_1] [i_0] [i_2] [i_3] = ((0 ? 55 : 67));
                            arr_14 [i_0] [i_2] [i_1] [i_1] [i_0] = ((-((240 * ((var_9 - (arr_1 [i_0])))))));
                        }
                    }
                }
                var_24 = ((var_16 ? var_14 : var_12));
                arr_15 [i_0] [i_0] = (arr_11 [i_0] [i_1] [i_1] [i_0] [i_0] [i_1]);
                var_25 = (min(((max(59, 140))), (max(var_17, (arr_7 [i_0] [i_0] [i_1])))));
                var_26 = (min(var_5, var_12));
            }
        }
    }
    var_27 = (var_7 & var_15);
    #pragma endscop
}
