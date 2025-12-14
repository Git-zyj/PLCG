/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] = (max(var_12, -var_3));
                arr_7 [i_0] [i_1 + 1] [i_1 + 1] = (((!(((27013 ? var_15 : var_1))))));
                arr_8 [i_0] &= var_5;
                var_16 = (max(var_16, (((((((var_13 ? 8520698173743201810 : -8520698173743201810))) ? var_6 : (var_10 > var_4)))))));
            }
        }
    }
    var_17 += var_4;
    var_18 = (((((var_1 == (~var_9)))) << ((((~((max(var_15, var_4))))) + 155))));
    var_19 |= var_7;
    #pragma endscop
}
