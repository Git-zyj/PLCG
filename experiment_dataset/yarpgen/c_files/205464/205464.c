/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (((var_16 ? -var_14 : 0)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = (arr_3 [i_1] [8] [i_1]);
                var_19 = ((-(max(-1, ((max(1, (arr_3 [i_0] [i_0] [i_0]))))))));
            }
        }
    }
    var_20 = var_7;
    var_21 = (1572846724358113463 & -2688398137910142050);
    #pragma endscop
}
