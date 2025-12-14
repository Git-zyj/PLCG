/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-(max(47518, (min(1, 1373264608))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_4] [i_3] [i_2] [i_1] [i_1] |= (arr_5 [i_0] [i_0] [i_3]);
                                var_15 = 4834;
                                arr_17 [i_2] = (~var_10);
                                var_16 = (max(var_16, -125));
                            }
                        }
                    }
                    var_17 = 7482797514842976052;
                    var_18 = (min(var_18, var_10));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [i_0] [i_2] [i_0] [i_2] = (max((min(var_8, -6649417501425869074)), ((max(((16452336729565516042 && (arr_22 [i_0] [i_1] [i_1] [i_2] [i_1] [i_2]))), ((var_10 >= (arr_8 [i_5] [i_0]))))))));
                                arr_24 [i_6] [i_2] [i_2] [i_1] = (((arr_10 [i_6] [i_1] [i_2] [i_1] [i_0]) ? (max(var_7, 577805596)) : (max(var_9, var_12))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
