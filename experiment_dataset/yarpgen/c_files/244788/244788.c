/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((~var_0) ? var_12 : (((var_1 ? ((min(var_3, var_4))) : var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (128 < 20);
                var_19 = (min(var_19, ((((arr_3 [i_0] [i_1] [4]) ? ((((arr_3 [8] [i_1] [i_0]) ^ (((var_2 == (arr_4 [i_0] [i_1] [i_1]))))))) : (max(var_6, var_11)))))));
            }
        }
    }
    #pragma endscop
}
