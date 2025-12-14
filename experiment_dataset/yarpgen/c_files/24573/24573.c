/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_1] = 234;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_1] [i_1] [i_1] [i_3] = 221;

                            for (int i_4 = 4; i_4 < 20;i_4 += 1) /* same iter space */
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_0] [i_4] = 127;
                                var_11 = (max(9014771371923522290, 375923300));
                                arr_14 [i_1] [20] = var_8;
                            }
                            for (int i_5 = 4; i_5 < 20;i_5 += 1) /* same iter space */
                            {
                                var_12 = 34;
                                var_13 = var_6;
                            }
                            arr_18 [i_3] [i_1] [i_1] [1] = 700062365;
                        }
                    }
                }
            }
        }
    }
    var_14 = (min(((max(81, -var_8))), (min(9223372036854775807, (min(1, (-9223372036854775807 - 1)))))));
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 16;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            {
                var_15 = (max(174289893, 240));
                arr_26 [i_6 + 1] [i_6] [i_7] = -175342702;
                var_16 = (max(35412, 167));
            }
        }
    }
    #pragma endscop
}
