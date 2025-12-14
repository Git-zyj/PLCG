/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_10 = ((-(1 / 18446744073709551615)));
                var_11 = ((((arr_1 [7] [i_1 - 1]) ? (~9480370155729374007) : 8966373917980177608)) >> (((arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1]) - 838428090)));
                var_12 = (min((1 && 1299768959000350454), (max(27016, 17013))));
            }
        }
    }
    var_13 = (~var_5);
    #pragma endscop
}
