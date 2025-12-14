/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = (max(var_13, var_11));
                var_14 &= (arr_3 [4] [i_0] [i_1]);
                var_15 = var_1;
            }
        }
    }
    var_16 = (min(var_16, ((((((226 << (7640797789539256983 <= 58)))) ? ((((((-736884635815126519 ? var_9 : var_8))) ? ((var_4 ? var_6 : var_3)) : 26))) : var_9)))));
    #pragma endscop
}
