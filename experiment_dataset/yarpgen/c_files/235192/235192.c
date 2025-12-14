/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -31;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0 - 2] [i_0 - 2] [i_0] [i_0] = (((((var_11 ? var_3 : (arr_0 [i_0])))) ? 120 : (17361128765842022701 || 1085615307867528914)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [12] [i_0] [i_2] [i_3] [i_4] = var_6;
                                var_17 = ((-(((arr_3 [i_0] [i_1 + 1] [i_0]) ? 47647 : var_4))));
                            }
                        }
                    }
                    var_18 = (min(var_18, 215));
                    arr_14 [i_0] = (arr_3 [i_0] [i_1 + 2] [i_0 - 1]);
                }
            }
        }
    }
    #pragma endscop
}
