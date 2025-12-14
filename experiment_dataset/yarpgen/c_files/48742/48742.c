/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_21 = (min(var_21, (arr_3 [i_0])));
                arr_7 [i_1] [i_0] = max((((((-7836655141741769685 ? var_16 : (arr_5 [i_0] [i_0] [12])))) ? (max(1, (arr_4 [i_1]))) : 11084090900690337420)), ((((50107 ? 241 : 4)))));
                var_22 = (arr_2 [i_0] [i_0]);
            }
        }
    }
    var_23 = ((((((max(-7621, 2824981843))) ? var_15 : var_8)) / -89));
    var_24 = 4294967273;
    #pragma endscop
}
