/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 = (min((min(1, (min(37295, 11421735197707763493)))), (((0 & 11421735197707763493) & (~244)))));
                    arr_7 [7] [i_1] [i_1] [i_1] = 11421735197707763486;
                }
            }
        }
    }
    var_19 = min(var_7, (max((max(18446744073709551615, 63050394783186944)), -1845814838)));
    var_20 = ((((!(((11421735197707763493 ? 63 : 11421735197707763496))))) ? var_16 : (max((min(0, 7025008876001788146)), var_4))));
    #pragma endscop
}
