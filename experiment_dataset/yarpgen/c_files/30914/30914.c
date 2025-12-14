/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -var_10;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_19 = ((!(((((max((arr_4 [9] [i_1] [i_2] [6]), (arr_1 [i_1 + 1] [8])))) >> ((((var_13 ? (arr_3 [i_2 + 1]) : (arr_0 [i_2] [i_1 + 1]))) - 8029)))))));
                    var_20 = (min(66, ((var_14 + (arr_0 [i_1] [i_1])))));
                    var_21 = ((min((~var_0), (((arr_0 [i_2 - 2] [2]) ? 1 : var_13)))));
                }
            }
        }
    }
    var_22 = ((-(((((8 ? 1 : 0))) ? var_13 : ((0 ? var_14 : var_11))))));
    #pragma endscop
}
