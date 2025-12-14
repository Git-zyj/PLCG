/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (((((min((max(var_12, 65507)), (var_8 >= var_12))))) | ((var_16 ? ((2103192336 ? 4880496562351432415 : var_11)) : 14468))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_18 = (min((((arr_0 [i_0]) ? (arr_5 [4] [i_1] [4]) : (((arr_6 [i_0] [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : -14455)))), (!var_6)));
                    var_19 = (min(-4, ((-(arr_5 [i_1 - 2] [i_1 - 2] [i_1 - 3])))));
                }
            }
        }
    }
    #pragma endscop
}
