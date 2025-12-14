/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_14 = (arr_6 [i_1]);
                                var_15 -= ((38153 / (arr_4 [i_2] [i_2] [8])));
                            }
                        }
                    }
                }
                arr_12 [i_0] [4] [i_0] |= var_3;
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 8;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_16 = var_3;
                            arr_20 [i_0] [9] [9] [0] [i_1] [0] = ((((max(-27321, 16324))) - var_3));
                            var_17 = ((1048575 || (((-10697 * (arr_17 [i_0 - 1] [i_0 - 1] [i_5 + 1]))))));
                            arr_21 [2] [6] &= (((arr_15 [i_1] [i_1] [8] [2]) == (arr_19 [i_0] [i_1] [6] [i_6] [i_0 - 1])));
                        }
                    }
                }
            }
        }
    }
    var_18 = (min(var_18, -var_1));
    #pragma endscop
}
