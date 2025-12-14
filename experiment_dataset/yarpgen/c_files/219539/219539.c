/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min((30784 && 30784), (((-1 + 9223372036854775807) >> (var_6 - 47775)))))) ? ((var_14 ? (((34752 ? var_17 : 34752))) : (204 - -3))) : -var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_0] = 29921;
                var_21 = (max(var_21, (((+(((arr_2 [i_1] [i_0] [i_0]) - ((min(1, 15769))))))))));
                var_22 = ((((1 + (min(var_13, -64))))) ? (((((max((arr_1 [i_0]), -29577))) ? (arr_2 [i_0] [i_1] [i_0]) : var_2))) : (((((arr_0 [i_0]) - -5473672448697913168)) << (var_11 - var_11))));
            }
        }
    }
    #pragma endscop
}
