/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    var_18 = ((-var_6 * ((-1 ? -var_6 : 1))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_19 = var_0;
                                var_20 = (max(var_20, ((((((((22297 ? var_3 : -23315)) <= ((~(arr_9 [i_0] [i_1] [i_3] [i_0])))))) > (((-12196814420907650419 >= (arr_0 [i_3])))))))));
                            }
                        }
                    }
                    var_21 = (max(var_21, ((-(arr_3 [12])))));
                    var_22 -= ((((((arr_13 [i_2] [i_2] [i_1] [i_0] [i_0] [i_0]) ? var_7 : (arr_13 [i_0] [i_0] [i_1] [i_1] [i_2] [i_1])))) ? ((-(arr_6 [i_0]))) : (var_4 && var_8)));
                    var_23 = (min(var_23, (((-((var_14 ? (arr_13 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2]) : (arr_13 [i_2] [i_2] [i_2] [i_2] [i_0] [i_0]))))))));
                }
            }
        }
    }
    var_24 = var_7;
    #pragma endscop
}
