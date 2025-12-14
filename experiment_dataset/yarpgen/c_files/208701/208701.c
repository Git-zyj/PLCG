/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (min(var_8, (~var_12)));
    var_14 = var_2;
    var_15 = (max(((max((max(var_3, 0)), var_5))), var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((~((~((max(var_8, var_9)))))));
                arr_6 [i_0] = var_10;
                arr_7 [i_0] = (((((~var_6) ^ (~0)))) ? (((arr_0 [i_0]) ? ((max(-2222, (arr_2 [i_0] [i_0])))) : var_6)) : (arr_2 [i_0] [i_0]));
            }
        }
    }
    var_16 = var_12;
    #pragma endscop
}
