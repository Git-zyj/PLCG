/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= var_3;
    var_20 = 1;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, (var_6 * 0)));
                    arr_7 [17] [i_1] [i_0] &= (min((((((max(-28790, -30)))) | (max((arr_5 [i_2] [11] [i_1] [i_0]), 18446744073709551614)))), (((((15777487011609641313 ? 18446744073709551596 : 0))) ? var_12 : (((4515289617703353058 ? (arr_1 [i_2] [i_2]) : (arr_2 [i_0]))))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = var_6;
                }
            }
        }
    }
    #pragma endscop
}
