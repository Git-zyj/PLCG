/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min(var_13, -82))) / -73));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = (max(var_21, (((var_18 - (((min((min(var_2, var_19)), ((((arr_1 [i_0] [i_0]) < var_5))))))))))));
        var_22 = (arr_1 [12] [i_0]);
        var_23 = var_9;
    }
    var_24 -= (((((var_10 - var_18) ? ((((-2147483647 - 1) ? var_2 : var_16))) : ((var_10 ? var_12 : var_9)))) == -14));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            {
                var_25 = (((var_16 - 111) ? 107 : var_17));
                var_26 = var_13;
                var_27 = ((-117 != (min(var_13, (min(81, var_17))))));
            }
        }
    }
    var_28 = var_0;
    #pragma endscop
}
