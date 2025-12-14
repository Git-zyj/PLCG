/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = ((205 ? 4242769429939830830 : -17986));
        var_13 = ((-7948811340918215938 ? -1 : 4242769429939830830));
    }
    var_14 = var_2;
    var_15 = ((7 ? -19 : 15));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            {
                arr_7 [i_1] [i_2 + 4] = -92;
                var_16 -= ((((((arr_3 [0] [i_2 + 1]) ? -1 : (arr_4 [i_1] [i_2 + 4])))) ? (((!(arr_3 [8] [i_2 - 1])))) : ((min((arr_4 [i_2] [i_2 + 1]), 15051)))));
            }
        }
    }
    var_17 = var_1;
    #pragma endscop
}
