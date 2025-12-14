/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (~9223372036854775807)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_13 = ((9223372036854775807 <= (!9223372036854775807)));
                arr_6 [i_0] [i_0] = (((((((arr_3 [i_0]) || -7629392414964121742)) ? 111 : (arr_4 [i_0] [i_0])))) ? ((20 | (arr_0 [i_1 - 2]))) : (((-1073741823 == (((~(arr_1 [i_0]))))))));
            }
        }
    }
    var_14 = (var_2 & -1);
    var_15 += (~var_0);
    var_16 -= (!var_1);
    #pragma endscop
}
