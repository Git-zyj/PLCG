/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_10 = (max((arr_3 [i_1 + 2] [i_0] [i_0 - 2]), (((4294967295 ? 1858334117671149190 : 1858334117671149190)))));
                arr_5 [i_0] [i_1 - 1] [i_1] = 2409461316;
            }
        }
    }
    var_11 -= ((((((1310720101516664140 ? var_8 : var_2) != (((20783 ? 3005011668147814312 : -33))))))));
    var_12 -= var_5;
    #pragma endscop
}
