/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_10 -= ((-34 ? var_5 : 59497));
                    arr_9 [i_2] [i_1] [i_2] = (((arr_4 [i_1] [i_1] [i_1]) ? 59497 : -var_8));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_11 = (max(var_11, (((!((((max(var_6, var_8))) > (((arr_12 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4]) + var_8)))))))));
                                var_12 += (!13220531793538147436);
                                var_13 = (min(var_13, (arr_11 [i_0] [i_1] [i_2] [i_0] [i_4])));
                                var_14 = (max(var_14, (arr_6 [18] [i_3] [i_2] [18])));
                                arr_15 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] = (arr_10 [i_1] [i_1] [i_1] [i_1] [i_1]);
                            }
                        }
                    }
                    var_15 |= (min((~-4341399482341736680), (((var_6 ? (arr_5 [i_0] [i_1] [i_2]) : (min(var_7, var_6)))))));
                    var_16 += (~59497);
                }
            }
        }
    }
    var_17 ^= (max((!-var_8), var_0));
    #pragma endscop
}
