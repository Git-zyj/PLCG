/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = (max((arr_6 [i_0] [i_0 - 2]), (arr_7 [i_0] [i_0] [i_2] [i_0])));
                    arr_10 [i_2] = ((-8122072571565248439 < (arr_2 [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_21 = (arr_2 [i_2]);
                                var_22 = (((-8202007882281653516 <= var_16) ? (~var_13) : (arr_8 [i_0] [i_0] [i_0 - 2] [i_0 + 1])));
                                arr_16 [i_2] [i_1] = var_8;
                                arr_17 [i_0] [i_0] [i_2] [i_3] [i_2] [i_1] = (max((arr_4 [i_0]), ((-(arr_15 [i_2] [i_2] [i_2] [i_4 - 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_4;
    var_24 = 61961;
    #pragma endscop
}
