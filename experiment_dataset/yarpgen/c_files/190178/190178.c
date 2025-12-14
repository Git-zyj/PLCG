/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((max(6454018584079245690, 24936))), (min(var_1, var_16))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_0] = (arr_3 [i_0]);
                arr_6 [i_0] = (((((-11035 - (((arr_0 [i_0] [i_1]) - var_1))))) ? (((arr_0 [i_1 + 1] [i_0]) + -6454018584079245706)) : (((min((arr_0 [i_1 + 2] [i_1]), 12821))))));
                arr_7 [i_0] [i_0] = ((((min(37, 2738166047))) && (arr_4 [i_0] [i_1 + 2])));
            }
        }
    }
    #pragma endscop
}
