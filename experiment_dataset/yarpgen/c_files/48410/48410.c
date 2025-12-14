/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -1;
    var_13 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_14 = (arr_1 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_15 = (arr_0 [i_0] [i_0]);
                            arr_8 [i_0] = ((((min(111, 1048320)))) <= 6994847253203594177);
                            var_16 = (max((min((1669851164 + 105), (arr_6 [i_0] [i_2] [i_2] [i_0] [i_0]))), (!-91)));
                            var_17 = -92;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
