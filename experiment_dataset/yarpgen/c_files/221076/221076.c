/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_11 = 1264499235;
                var_12 = arr_1 [i_1];
                var_13 &= ((!(((var_5 - ((1264499235 ? var_6 : var_0)))))));
                var_14 = (max(var_14, ((var_5 ? (arr_3 [6] [6]) : ((var_7 / (arr_5 [i_0] [i_0])))))));
            }
        }
    }
    var_15 &= (((((((var_2 ? var_4 : var_0))) ? ((var_1 ? -1264499237 : var_6)) : (min(-794508213, -1264499235))))) ? var_10 : (((var_2 + 2147483647) << ((((var_8 ? var_4 : var_8)) - 933437643)))));
    #pragma endscop
}
