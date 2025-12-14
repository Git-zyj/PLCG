/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_18;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((((((!var_1) * var_10))) ? (((((((var_11 ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_1])))) || (((var_1 ^ (arr_1 [i_0])))))))) : ((var_6 ? var_2 : ((((!(arr_3 [i_0] [i_0])))))))));
                arr_7 [i_0] = ((-5421767545841074838 - (~1)));
                arr_8 [i_0] [i_1] = ((!(((var_1 ? ((var_4 ? var_10 : var_14)) : (((!(arr_3 [i_0] [i_0])))))))));
                arr_9 [i_0] [i_1] = ((((-(arr_3 [i_0 - 1] [i_0]))) + ((((arr_4 [i_0 + 1] [i_0 + 1]) - var_6)))));
            }
        }
    }
    #pragma endscop
}
