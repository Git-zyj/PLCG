/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            {
                var_19 -= (!-1);
                var_20 -= (((((max(var_1, 131008))) ? (((var_14 ? (arr_0 [i_0] [i_0]) : -17))) : -1192924288353815404)));
                var_21 = (max(var_21, ((((~(arr_0 [i_1 - 1] [i_1 + 1])))))));
            }
        }
    }
    #pragma endscop
}
