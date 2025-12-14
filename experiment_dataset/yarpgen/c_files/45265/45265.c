/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = max(var_2, var_1);
    var_11 = 1;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = ((-76381090 ? -1279607760 : 1));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_11 [0] [i_2] [8] [0] &= 1;
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((((1 == (arr_2 [i_1 + 1] [i_1 + 1]))) ? ((1 + (arr_2 [i_1 + 1] [i_1]))) : ((1 ? 1 : 1))));
                    }
                }
            }

            for (int i_4 = 2; i_4 < 13;i_4 += 1)
            {

                /* vectorizable */
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    var_12 = ((arr_4 [i_0] [i_1 + 1] [3]) ? 1 : 1);
                    var_13 = ((1 ? 1 : 0));
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            arr_22 [i_0] [i_1] [i_4] [i_6] [i_7] = (max(var_3, (arr_21 [i_7] [i_0] [i_1 + 1] [i_1 + 1] [i_4 - 2])));
                            arr_23 [i_0] [i_7] [i_4 - 1] [i_6] [i_7] = 2464065613;
                        }
                    }
                }
                var_14 = (var_1 ? (((var_5 ^ 0) ? ((max(1, 1))) : (1367591933 / var_2))) : ((311139551 ? ((1 ? 0 : var_1)) : var_1)));
                var_15 += 1;
            }
            var_16 &= 1;
        }
        arr_24 [i_0] = ((((arr_14 [i_0] [i_0] [i_0] [i_0]) || (arr_14 [i_0] [15] [i_0] [i_0]))) ? (((arr_14 [i_0] [i_0] [i_0] [i_0]) - 1)) : (((arr_14 [i_0] [i_0] [2] [i_0]) ? 1 : 1)));
    }
    #pragma endscop
}
