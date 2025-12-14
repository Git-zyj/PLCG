/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (((max(6216041588293589401, (!0)))) && (-6000208106082856974 | 61627));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] = ((-(max(61626, 65526))));
                            arr_13 [i_0] [i_2] [i_2] [7] = (((42477 & var_3) > ((max(-18473, (~122))))));
                            arr_14 [i_0 + 3] [i_2] [i_2] [i_3] [0] = (10 / 20462);
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        arr_17 [i_4] = 18472;
        arr_18 [i_4] [i_4] = min(-var_5, ((((var_2 ? var_2 : var_6)))));
        arr_19 [i_4] [1] = (((--10) && (((!503206273) < -var_10))));
    }
    #pragma endscop
}
