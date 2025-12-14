/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((max((max(0, 3)), var_13))), ((-65535 ? 2 : var_8))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, (((((((var_17 >= (arr_0 [i_0]))))) > (max((arr_4 [i_0] [i_0]), 65521)))))));
                    var_21 = (max(var_14, ((var_15 ? (var_7 || var_1) : (max(var_4, var_0))))));
                    arr_8 [i_0] [i_0] [i_0] = (65533 / -118);
                }
            }
        }
    }
    #pragma endscop
}
