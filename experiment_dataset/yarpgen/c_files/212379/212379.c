/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 303780363311681440;
    var_18 ^= ((var_14 * (((!((min(8, 21079))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_19 += (var_4 / var_5);
                arr_4 [1] [i_0] = (min((max((min(var_2, (arr_2 [i_0] [14] [i_0]))), 65)), (!var_3)));
                var_20 ^= ((((!((min(17947075497782821434, var_11)))))));
                arr_5 [14] [i_1] |= -21094;
            }
        }
    }
    var_21 = ((!((((!-2720281882684602338) ? var_16 : var_9)))));
    #pragma endscop
}
