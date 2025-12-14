/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] = ((var_2 << (((((arr_2 [i_0 - 2] [1] [i_1 - 2]) ? var_6 : -var_2)) - 83963865))));
                var_11 = ((((((18 - 0) * (min(var_6, 0))))) ? ((-(((arr_0 [i_0]) ? 56 : var_0)))) : ((min(68, (max(var_9, 255)))))));
                arr_5 [i_0] [i_0] [i_0] = (arr_2 [i_1 + 1] [i_1 - 2] [i_0 - 1]);
                var_12 = ((73 ? 1485182559 : 50443));
            }
        }
    }
    var_13 = ((~(((var_2 != (var_4 < var_5))))));
    #pragma endscop
}
