/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((1099511627775 / var_9) * (((((1099511627775 << (203 - 203)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 = (max((arr_1 [i_0 + 1]), (((~19) & (((2 ? 255 : (arr_0 [i_0 - 3]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [21] [21] [i_2] [i_3] = var_0;
                                var_13 = (min(var_13, 1));
                            }
                        }
                    }
                    arr_14 [4] [i_0] [i_0 + 1] = (max(0, (127 > 65532)));
                }
            }
        }
    }
    #pragma endscop
}
