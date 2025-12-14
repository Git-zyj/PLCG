/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_20 = (max(var_20, ((min((arr_1 [i_0 + 2]), (((max(84, var_18)))))))));
        arr_2 [i_0 - 2] [i_0] = min((max(0, 12991844076935200045)), ((min((arr_0 [i_0 - 1]), (arr_0 [i_0 + 1])))));
        arr_3 [i_0] = -490219031;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_2 + 2] = (((arr_1 [i_2]) ? var_6 : (max(var_3, (arr_4 [i_0 + 3] [11])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [11] = ((5836286281605705524 != (!-23948)));
                                arr_16 [i_0] [i_0] [i_1] [i_2] [i_3] [i_0] [8] = 3810811784;
                            }
                        }
                    }
                    var_21 = var_18;
                    arr_17 [i_0 + 2] = 986482042;
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_22 *= ((var_9 != (((!((min(var_6, (arr_18 [i_5])))))))));
        arr_22 [i_5] = (arr_21 [15]);
    }
    #pragma endscop
}
