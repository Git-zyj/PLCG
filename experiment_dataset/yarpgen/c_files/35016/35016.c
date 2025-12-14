/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= -var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (+((var_9 ? ((((arr_0 [i_0]) / 18))) : (((((arr_2 [i_0] [i_0]) + 9223372036854775807)) << (26 - 26))))));
                arr_5 [i_1] = (((arr_3 [i_0] [i_1]) ? var_4 : ((32746 ? 1933862318 : (((arr_0 [i_0]) ? 15948 : (arr_2 [i_0] [i_0])))))));
                var_21 = (max(var_21, ((-18 && ((((18 ? 26 : var_8))))))));
            }
        }
    }
    #pragma endscop
}
