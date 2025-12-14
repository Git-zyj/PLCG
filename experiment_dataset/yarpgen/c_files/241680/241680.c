/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = ((var_4 ? ((var_5 ? -4881057349436023089 : (min(3940132814, 0)))) : (((((max(210, 2445789878460009143))) ? (arr_5 [i_0] [i_1]) : (arr_4 [i_0]))))));
                var_17 += (min((arr_0 [i_0]), (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
                var_18 |= (arr_1 [i_1]);
                var_19 = (((arr_5 [i_0] [i_1]) ? (((-((min(var_1, (arr_2 [i_1]))))))) : (~var_7)));
                arr_6 [i_0] [i_0] = ((var_14 << ((((min((arr_0 [i_0]), (arr_4 [i_1])))) - 200))));
            }
        }
    }
    #pragma endscop
}
