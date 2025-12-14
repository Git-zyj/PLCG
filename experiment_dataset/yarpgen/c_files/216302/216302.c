/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, 70368744176640));
    var_14 = 124;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_15 += ((var_9 ? 67 : var_8));
                var_16 = (max(var_16, (1659598681599720753 / 9457)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [0] [i_1] [0] = -6118259939341094189;
                            arr_13 [i_0] [i_0] [i_1] [i_2 + 1] [i_2 + 1] [i_3 + 2] = 11869;
                            arr_14 [i_3] = ((!(((~(arr_10 [i_0] [i_2 - 1] [i_3 - 1] [i_3]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_17 = (~((93 ? 4768089598210024843 : var_12)));
                            arr_19 [5] [i_1] [10] [i_5] [i_1] &= var_10;
                            arr_20 [i_0] [i_1 - 2] [i_5] = -1659598681599720734;
                            arr_21 [i_0] [i_1 + 1] [i_4] [i_1 + 1] = (((((~(arr_18 [i_0 + 4] [i_0 - 2] [12] [i_0 - 2])))) ? (var_4 != -9457) : (arr_5 [i_1 - 1] [i_1 + 1] [i_1])));
                            arr_22 [i_5] [14] [i_0 + 3] = ((52392 || (arr_9 [i_1 - 1])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
