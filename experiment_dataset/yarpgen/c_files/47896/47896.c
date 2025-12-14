/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((-(~var_4)))) ? (((-((-8 ? var_1 : -99))))) : ((((max(var_2, var_4))) ? var_3 : (-9223372036854775807 - 1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_12 -= (arr_5 [i_0] [i_1]);
                arr_6 [i_0] [i_1] [i_0] = var_3;
                var_13 -= (arr_2 [i_1]);
            }
        }
    }
    #pragma endscop
}
