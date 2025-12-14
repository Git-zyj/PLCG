/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 58;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_21 = (((arr_4 [i_1 - 2] [i_1 - 2] [i_1 + 2]) & (((max((arr_2 [8] [i_0]), var_11))))));
                var_22 = ((!(((max(3084538091817897486, -3084538091817897486))))));
                arr_7 [i_0] [i_0] = (min((arr_4 [i_1 - 3] [2] [i_1]), (((arr_6 [i_1 - 1] [4]) & (arr_2 [i_1 - 3] [i_0])))));
            }
        }
    }
    #pragma endscop
}
