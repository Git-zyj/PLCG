/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [1] [4] [4] = (((arr_0 [i_0]) ? ((max(var_6, (arr_0 [i_1])))) : ((max(-118, (arr_0 [i_0]))))));
                var_13 = (min(var_13, ((max(2889365689, var_5)))));
                arr_6 [i_0] [i_1] = -54;
                arr_7 [i_1] [i_0] = (-(((((var_3 ? -71 : var_0))) ? (arr_3 [i_1] [i_0]) : -75)));
                var_14 = ((max(var_12, -63)));
            }
        }
    }
    var_15 = (((!(54370 % 59957))));
    var_16 = var_5;
    #pragma endscop
}
