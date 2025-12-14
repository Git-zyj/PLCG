/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = var_6;
                    arr_8 [10] [i_1] [2] |= ((((((var_11 ? var_19 : var_14))) ? ((3467365219 ? (arr_2 [i_0] [i_1] [i_2]) : var_6)) : (((((arr_5 [i_0] [i_1]) || var_8)))))));
                }
            }
        }
    }
    var_21 = (min(var_21, (((((min((~var_8), (var_19 ^ var_6)))) ? var_2 : ((var_10 ? var_15 : var_9)))))));
    var_22 = (min((((!(var_13 % var_2)))), var_17));
    #pragma endscop
}
