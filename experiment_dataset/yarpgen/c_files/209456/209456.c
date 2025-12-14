/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] = (arr_1 [i_0 - 1] [i_1 - 3]);
                arr_6 [i_0] = (!138);
                var_14 = ((-((18216 ? 138 : 0))));
            }
        }
    }
    var_15 -= var_0;
    var_16 = (((((((118 ? 0 : var_12))) ? (var_0 || var_0) : ((((-9223372036854775807 - 1) && 118))))) / var_3));
    var_17 = (38 || 0);
    #pragma endscop
}
