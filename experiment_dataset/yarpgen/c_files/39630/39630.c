/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_11 = (max(62847, 62825));
                var_12 = (min(var_12, (arr_3 [10] [i_1 - 2] [i_1 - 2])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_1] [i_1] [i_1 - 2] = ((!(((~(arr_4 [i_1] [i_1 - 1] [i_2]))))));
                                var_13 = (max((((((min(106, 44306))) != (var_1 / 62829)))), (arr_11 [i_0] [i_1] [i_1] [i_2] [i_2] [i_0] [i_4])));
                                var_14 = (max((max(var_9, (arr_10 [i_1] [11] [i_1 + 2]))), ((((~var_10) ? (min(0, 1048568)) : (~var_5))))));
                                arr_15 [i_1] [i_1 - 3] [i_2] [i_1 - 3] [i_1] [i_1] = (((-(max(71672796, (arr_4 [i_1] [i_1] [i_2]))))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_15 *= (max((-624669063 && -7242076194241315207), (arr_7 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])));
        var_16 = (max(var_16, 88));
        arr_19 [i_5] = ((((max(0, (min(0, -105))))) >= -var_2));
    }
    #pragma endscop
}
