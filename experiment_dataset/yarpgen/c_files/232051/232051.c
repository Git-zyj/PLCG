/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            arr_12 [i_0] [i_1 - 1] [i_1] [i_1] [i_1 - 1] = (arr_4 [1]);
                            var_18 = (~190);
                            var_19 = ((-(arr_0 [i_2 - 1] [i_1 + 1])));
                        }

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_17 [i_0] [11] [i_2 + 1] [i_3] [i_5] [1] = (1756146867175396906 >= 124);
                            arr_18 [i_0] [i_0] [1] [i_0] [i_0] = (!1);
                            arr_19 [i_0] [i_0] [i_1] [i_0] [12] [i_3] [i_5] = var_0;
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_20 = (!16690597206534154686);
                            arr_24 [i_0] [i_1] [i_2 + 1] [1] [i_0] = 1756146867175396927;
                        }
                        arr_25 [i_0] [i_0] [i_0] [i_0] = (arr_23 [i_2 + 1] [i_1]);
                    }
                    var_21 = (min((((arr_8 [i_0] [i_1 + 2] [i_2 - 2] [4]) - (arr_8 [4] [i_1 + 2] [i_2 + 1] [i_2]))), (arr_8 [i_0] [i_1 + 2] [i_2 + 1] [i_2])));
                    arr_26 [i_2] [i_0] [i_0] [i_0] = min(1, (max(47, 16690597206534154675)));
                }
            }
        }
    }
    var_22 = var_9;
    #pragma endscop
}
