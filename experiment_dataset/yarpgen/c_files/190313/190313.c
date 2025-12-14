/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_12 = arr_5 [i_0 - 1];
                            var_13 = (max(var_13, (min(30361, -674))));
                            var_14 -= 32767;
                            var_15 = max((-32767 - 1), (arr_2 [i_0 - 1] [i_3 - 2]));
                        }
                    }
                }
                var_16 = ((-10050 > (((!(-32767 - 1))))));
            }
        }
    }
    var_17 = var_6;
    var_18 = (max(var_18, (~var_8)));
    #pragma endscop
}
