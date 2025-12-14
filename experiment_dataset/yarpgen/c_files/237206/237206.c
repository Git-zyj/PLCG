/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= ((((-(~var_3)))) ? var_9 : (((max(var_5, var_0)) / var_12)));
    var_20 = ((var_5 & (((((17 - var_18) + 2147483647)) << (((((min(var_12, 6465)) + 94932539)) - 5))))));
    var_21 = ((-1483797553 < (((!((min(var_11, var_15))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                var_22 = (!3051850602167916484);
                var_23 = ((((min((arr_3 [i_0] [i_1 - 1] [i_1 + 1]), (3051850602167916484 - var_2)))) ? (+-3051850602167916485) : var_10));
                arr_5 [i_0] [3] [i_0] = 3051850602167916484;
            }
        }
    }
    #pragma endscop
}
