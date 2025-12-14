/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~var_8);
    var_20 = (max(var_20, 11008));
    var_21 = (max(var_21, 0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_22 += var_14;
                arr_4 [i_0] [i_1] [3] = min((arr_2 [1] [1]), 24770);
                arr_5 [i_0] [i_1] = arr_0 [i_0];
                var_23 = (max((arr_3 [i_1]), ((((((-32767 - 1) ? -17875 : 16633))) ? (arr_3 [i_0]) : (arr_0 [i_0])))));
                var_24 = max(-5636, (min(-4054, (arr_1 [i_0]))));
            }
        }
    }
    #pragma endscop
}
