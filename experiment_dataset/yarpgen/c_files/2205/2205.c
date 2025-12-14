/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!(((~(min(-63, 14482682439086249131)))))));
    var_16 = (max((((!((max((-9223372036854775807 - 1), (-9223372036854775807 - 1))))))), 3220539893521474201));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = ((48 + (min((min(-1344766558, 1)), (((arr_0 [i_0]) ? -1344766546 : (arr_2 [i_0] [i_0])))))));
                var_18 *= (arr_1 [i_1 + 2]);
            }
        }
    }
    #pragma endscop
}
