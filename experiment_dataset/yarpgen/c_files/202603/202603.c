/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [12] = ((((255 / (arr_4 [i_0] [i_1] [i_1 - 1]))) != ((1 ? 13 : ((537905550 ? 153 : 255))))));
                arr_7 [1] [i_1] = (!243);
                arr_8 [i_0] |= (max(255, 243));
            }
        }
    }
    var_14 |= 17526;
    var_15 = ((243 ? 1 : 1));
    var_16 &= ((((!(((3489399118 ? 805568177 : 13))))) || var_0));
    #pragma endscop
}
