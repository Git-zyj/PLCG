/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [11] [1] [17] = (~16383);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_20 = (!-var_2);
                                arr_14 [20] [20] [20] [21] [20] [2] = ((~(min(893693445, 197))));
                            }
                        }
                    }
                    var_21 = (~2147483647);
                    arr_15 [i_0] [15] = (arr_6 [21] [21] [21]);
                }
            }
        }
    }
    var_22 = 24844;
    var_23 = 1325454416;
    #pragma endscop
}
