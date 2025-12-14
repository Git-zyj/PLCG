/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_9 [i_0] [18] [i_0] [i_3] = (-9223372036854775807 - 1);
                        arr_10 [i_3] [i_2] [i_2] = ((64 ? 14203375746477772270 : 65));

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            arr_15 [i_0] [i_1] [i_0] [i_2] = (arr_0 [i_1 - 1] [i_1 - 1]);
                            arr_16 [i_0] [i_0] [i_0] = 10;
                            arr_17 [i_0] [i_0] [i_0] [i_3] [i_0] = var_4;
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_0] [i_0] [i_2] [0] [0] [i_0] = ((!((min((arr_2 [i_1 + 1] [i_1 - 1]), (1 - 0))))));
                                arr_23 [i_0] [i_0] [i_1] [i_2] [i_0] [i_6] = (~1);
                            }
                        }
                    }
                    arr_24 [i_2] = ((!((min((arr_0 [i_1 + 1] [i_1 - 1]), (max(-109, (arr_11 [i_0] [i_0] [10] [i_0] [i_0]))))))));
                    arr_25 [i_0] [i_2] [i_2] [i_2] = (!-1146412778);
                }
            }
        }
    }
    #pragma endscop
}
