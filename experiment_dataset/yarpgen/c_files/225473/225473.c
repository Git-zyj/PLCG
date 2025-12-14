/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [i_0] = (max(var_0, -984802089));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] = 6533462793528390337;
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] = 126;
                            }
                        }
                    }
                    arr_20 [i_0] |= ((~(~var_11)));
                    arr_21 [i_1] = (((426870370 || (arr_4 [i_0]))));
                }
            }
        }
    }
    #pragma endscop
}
