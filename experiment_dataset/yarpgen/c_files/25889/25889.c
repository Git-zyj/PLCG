/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_12 > var_5);
    var_14 = (max(var_14, 0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = -1733793818;
                var_15 = (arr_3 [i_1] [i_1]);
                var_16 = (max(var_16, 18446744073709551607));
            }
        }
    }
    #pragma endscop
}
