/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((var_9 ? var_0 : 0)) ? (~var_6) : var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_11 = (((((!(arr_4 [i_1 - 1]))))) + (((18446744073709551615 ? 10 : 15643505853097767656))));
                var_12 = (~var_8);
                var_13 &= (-(arr_1 [i_0] [i_1]));
                arr_6 [i_1] [i_1] = (arr_4 [i_0]);
            }
        }
    }
    var_14 = (4 ? var_6 : (((var_2 == var_3) ? var_9 : ((10 ? var_5 : var_9)))));
    var_15 = var_4;
    #pragma endscop
}
