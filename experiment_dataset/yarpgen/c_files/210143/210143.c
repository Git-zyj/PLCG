/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= ((~((-((var_7 ? var_9 : var_4))))));
    var_14 = ((!((((~var_10) ? ((var_1 ? 6985863567687459589 : var_12)) : ((min(2743456510, 45))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (arr_3 [i_0] [i_1]);
                arr_6 [i_1] = (((arr_1 [i_1]) ? 1551510756 : ((139 ? var_3 : 1))));
                var_15 = (((-var_9 + 2147483647) << ((((((min(var_6, var_3))) ? var_4 : ((136 ? 133 : 243)))) - 23634))));
            }
        }
    }
    #pragma endscop
}
