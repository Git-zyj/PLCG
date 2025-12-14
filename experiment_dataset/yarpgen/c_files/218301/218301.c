/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= (((~var_11) ? var_9 : -0));
    var_14 = (min(((((1 % var_2) ? (1145997962 >= var_4) : var_0))), (((((var_7 ? var_0 : var_3))) / var_12))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((((arr_2 [i_0] [i_0] [i_0]) * 3)) > ((((((arr_3 [7] [i_0]) / var_8)) * 1)))));
                var_15 = (min(var_15, ((min(((((((-1 ? (arr_3 [i_0] [i_0]) : (arr_2 [i_0] [6] [0])))) >= (arr_1 [i_1])))), var_10)))));
            }
        }
    }
    var_16 = var_12;
    var_17 = 9223372036854775807;
    #pragma endscop
}
