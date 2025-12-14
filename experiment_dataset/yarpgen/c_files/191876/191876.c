/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] |= 3544538981761757114;
                    var_17 *= (!-3544538981761757130);
                    var_18 *= (((((arr_2 [i_0] [i_1]) && -3347927438766843266)) ? (arr_6 [i_0] [i_2]) : 3544538981761757114));
                }
            }
        }
    }
    var_19 = (((((~1539989880) ? ((3347927438766843284 ? 241 : var_9)) : (var_15 != var_1)))) ? 28 : var_16);
    #pragma endscop
}
