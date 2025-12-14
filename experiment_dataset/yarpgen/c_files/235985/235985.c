/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(7207562141643342560, 9404060788119339739));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 *= ((~((((var_4 ? -18088 : var_13))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_11 [i_4] [i_4] = (((-(arr_9 [i_1] [i_1] [i_1 - 1] [i_1 + 3] [i_3] [i_3]))));
                                var_18 = (min(var_18, (((((((arr_8 [i_1 + 2] [i_1 - 1]) ? (arr_8 [i_1 - 1] [i_1 + 2]) : (arr_8 [i_1 + 3] [i_1 + 3])))) ? (((~(arr_1 [i_0])))) : (-32763 > 16384))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_5;
    #pragma endscop
}
