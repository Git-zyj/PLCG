/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_10 = (max(var_10, ((((((var_8 ? var_8 : var_2))) ? ((((max(-11500, 11490))) | -11500)) : ((var_0 ? var_7 : var_0)))))));
                var_11 = ((-11500 ? 30038 : (min(1, (~9139)))));
                var_12 = var_8;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_13 &= (13 && var_9);
                            arr_10 [i_0 - 3] [i_0 - 2] [i_0 + 1] [i_0 - 3] [i_0 + 1] = (((~((9819865485260354678 ? -20 : 6323591414774062852)))));
                        }
                    }
                }
                var_14 = (~var_6);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 20;i_6 += 1)
            {
                {
                    var_15 = (((((var_5 ? -14 : var_1))) ? (((!((min(18, 6323591414774062827)))))) : ((-((4523917119182435497 ? var_6 : -24))))));
                    arr_18 [i_4] [i_5 - 1] [i_6 - 1] = var_5;
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_16 = (max(var_16, ((min(var_6, ((var_7 ? 15423 : var_2)))))));
                                arr_25 [i_4] [i_4] [i_4] [i_5 + 2] [i_6 + 1] [i_7 - 2] [i_8 + 2] = (min(((min(var_9, var_8))), 65528));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
