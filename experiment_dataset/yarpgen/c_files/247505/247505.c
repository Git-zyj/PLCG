/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    var_12 = var_5;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (((!var_10) > (990 | 64546)));
        var_14 = (arr_0 [i_0]);
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            {
                arr_10 [i_1] [i_1] [i_2 + 2] = ((3670016 ? ((max((max((-127 - 1), 992)), 19622))) : (((arr_0 [i_2 + 2]) & 64545))));
                arr_11 [7] [5] [i_2] = ((((((~var_4) + 9223372036854775807)) >> (var_1 - 85))));
            }
        }
    }
    #pragma endscop
}
