/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!(((((3781769683 << (88 - 72))) << ((((max(var_7, var_7))) + 121))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] &= ((!(((!1) && 17821959017903450929))));
                arr_6 [i_0 - 3] [i_0] = ((!((max(var_6, var_4)))));
                arr_7 [i_1] = (min((((var_8 ^ var_0) ? (arr_1 [i_0]) : var_6)), ((((max(var_13, 9103400466805421151))) ? (624785055806100687 - var_0) : ((((var_2 && (-9223372036854775807 - 1)))))))));
                arr_8 [i_0] [i_0] [i_1] = var_2;
            }
        }
    }
    var_15 = (!(!1));
    #pragma endscop
}
