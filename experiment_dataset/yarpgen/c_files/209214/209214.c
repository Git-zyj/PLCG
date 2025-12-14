/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((var_0 ? ((max(var_11, (var_3 + var_9)))) : var_16)))));
    var_18 += var_8;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = var_11;
                    arr_7 [i_0] = arr_3 [i_0 + 1];
                    var_20 -= (((arr_0 [i_0]) ? (arr_3 [i_0 - 1]) : ((var_9 ? 73 : (arr_1 [i_2])))));
                }
            }
        }
        var_21 = ((-50 / -625420153) >> (((arr_3 [i_0 - 1]) - 1563285983)));
        arr_8 [i_0] [i_0] = ((!(arr_6 [i_0] [i_0 - 1] [i_0] [i_0 - 1])));
        var_22 = var_3;
    }
    #pragma endscop
}
