/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [10] [i_0] = ((((-((var_8 ? -7 : (arr_4 [3] [i_0]))))) > (arr_3 [i_0])));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = 7;
                }
            }
        }
    }
    var_13 = -26626;
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {
                arr_17 [i_4] = (((((arr_11 [i_3 - 1]) * var_0))) ? (26626 < 9179) : (arr_12 [8] [i_4]));
                var_14 += ((~(~96)));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            var_15 = ((-(min(699945529974806962, (min(0, 1550))))));
                            var_16 -= (arr_13 [i_3 - 1] [i_5]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
