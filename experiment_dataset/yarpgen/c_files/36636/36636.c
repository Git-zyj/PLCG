/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_8;
    var_20 = (max((var_12 * -114), ((var_18 ? ((var_7 ? var_4 : var_11)) : (((var_13 ? var_2 : var_12)))))));
    var_21 = (max(((1992649629 ? -var_1 : ((max(1381613580, 1681779902))))), (var_8 ^ var_15)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [5] [i_0] = (max((((((var_8 * (arr_2 [i_2])))) ? -var_15 : ((3101874433 ? (arr_5 [i_0] [16] [i_0]) : var_16)))), ((((var_5 ? (arr_4 [i_0] [17]) : -1681779902))))));
                    var_22 = (((var_16 ^ var_2) == ((min((~var_2), ((127 ? 91 : 115)))))));
                    var_23 += var_13;
                }
            }
        }
    }
    #pragma endscop
}
