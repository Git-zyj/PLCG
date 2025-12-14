/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] = max(1, (min(((min((arr_4 [15] [i_0]), (arr_0 [i_0] [i_0])))), 63050394783186944)));
                var_20 ^= (arr_0 [i_0] [i_1]);
            }
        }
    }
    var_21 = (~var_6);
    var_22 = ((4 ? var_1 : (((var_1 || 11) >> ((((2891895890390679816 ? var_5 : var_4)) + 100))))));
    var_23 = ((!((min(var_11, var_18)))));
    #pragma endscop
}
