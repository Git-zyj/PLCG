/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [1] = (var_11 | -6602618646133431019);
                arr_8 [i_0] = (min(var_6, ((((var_5 - -19274) ? ((var_12 ? var_12 : 65504)) : (19281 ^ 102))))));
                var_15 = ((~(max(((min(-19281, 19268))), (min(var_9, var_13))))));
                var_16 = (max((((var_4 > (min(0, 252201579132747776))))), (1 - 8686097975170483103)));
            }
        }
    }
    var_17 = (min(((((-141646289279711909 == 8) << ((var_10 ? 2 : -141646289279711909))))), var_11));
    #pragma endscop
}
