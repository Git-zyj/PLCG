/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [1] [i_1] = var_9;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_11 = (max(var_11, ((min(40919, 47530)))));
                            arr_13 [1] [i_1] [1] [15] |= (((((var_9 ? (arr_3 [i_1 - 1] [i_1 - 1]) : var_1))) ? ((((arr_3 [i_1 - 1] [i_1 - 1]) ? 78 : var_8))) : ((-104 ? (arr_3 [i_1 - 1] [i_1 - 1]) : 1663222790))));
                            arr_14 [i_0] [i_0] [i_0] [9] [i_0] [i_0] = (max(var_3, 173));
                            var_12 = ((-64 / (arr_4 [i_1 - 1])));
                        }
                    }
                }
                arr_15 [17] [i_1 - 1] = var_0;
                var_13 = var_2;
            }
        }
    }
    var_14 = -var_0;
    var_15 |= var_4;
    var_16 = (8605 ? var_1 : (((((1663222800 / 7790760263044782300) != 40919)))));
    #pragma endscop
}
