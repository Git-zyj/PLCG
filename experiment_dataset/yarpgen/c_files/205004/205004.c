/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = ((!((-var_11 || ((max(var_13, var_5)))))));
                arr_7 [14] = (((((-(arr_3 [8] [i_1] [i_1 + 1])))) ? (-32767 - 1) : (((!(arr_3 [i_0] [4] [i_1 + 1]))))));
                arr_8 [4] [4] [7] = var_13;
            }
        }
    }
    var_19 = var_16;
    #pragma endscop
}
