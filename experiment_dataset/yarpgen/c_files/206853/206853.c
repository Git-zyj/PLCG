/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((max(1, var_4)));
    var_20 = ((var_9 & ((min(var_4, ((1 ? var_4 : var_8)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((((-(-77892657 > var_14))) * (((arr_5 [i_0] [i_0] [i_0]) / 1))));
                arr_7 [i_0] = (max((arr_5 [8] [i_1] [i_1]), 18446744073709551615));
                arr_8 [i_0] [i_0] = (max(1, (((18446744073709551615 == 1885488634) * (arr_2 [i_0])))));
            }
        }
    }
    #pragma endscop
}
