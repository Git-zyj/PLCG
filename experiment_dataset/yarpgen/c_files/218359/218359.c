/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -6471;
    var_12 = (max(((((3 / var_5) + var_10))), (((var_10 ? 0 : var_3)))));
    var_13 &= (~-77);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((var_4 ? ((((max(-121, -2147483623))) ? 259080354 : 1969709135)) : ((((((291592559 ? -1363753634 : 268419072))) ? 1969709152 : var_5)))));
                arr_7 [14] [i_1] [i_0] = var_2;
            }
        }
    }
    #pragma endscop
}
