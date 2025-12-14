/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((!var_16) ? var_1 : (((-131033737 + 2147483647) << ((((var_16 ? var_18 : var_17)) - 144))))));
    var_20 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [1] [i_0] [i_3] [4] [2] [i_3] [i_4 + 2] = (((arr_8 [i_4 - 2] [i_4] [0] [i_4 - 2]) || var_6));
                                var_21 = ((!(((min(254, 0))))));
                                var_22 = (!4294967295);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_23 = ((((min(-29404, 6766177297075014134))) ? (!12) : ((((62 || 1) && var_2)))));
                                arr_18 [i_1] [i_6] [i_1] [i_0] [i_6] [i_2] = (arr_16 [9] [i_1] [i_2] [i_2] [i_5] [i_6] [i_2]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
