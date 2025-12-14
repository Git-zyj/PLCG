/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((-(~var_1)))) ? ((max(var_3, var_15))) : var_16);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 -= (((((127 ? var_13 : (arr_6 [i_0] [i_0])))) ? (((arr_6 [i_0] [i_0]) + (arr_6 [i_0] [i_0]))) : var_10));
                    arr_8 [i_1] = (((~(arr_5 [i_1 - 1] [i_2 - 1]))));
                    var_19 = ((var_6 >> (((-39 >= (arr_6 [i_1] [i_2 - 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
