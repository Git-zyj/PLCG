/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = ((-((-15543986305776374061 << (((arr_1 [i_0] [i_0]) - 11477644993825529706))))));
                var_15 &= (min(-1, (((!(((arr_3 [8] [i_1]) || var_0)))))));
                var_16 = (arr_3 [i_1] [i_0]);
            }
        }
    }
    var_17 = ((((!((min(11, 4000707890))))) ? ((var_10 ? var_10 : ((4000707908 ? var_0 : var_1)))) : (~var_4)));
    #pragma endscop
}
