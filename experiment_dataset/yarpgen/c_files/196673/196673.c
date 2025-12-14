/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= ((255 ? var_4 : ((65535 ? 1 : 65516))));
    var_20 = ((0 ? 17 : 29));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                {
                    var_21 = max((arr_2 [0] [i_1]), var_10);
                    arr_8 [i_2] = (((-106543088 & (arr_5 [i_0] [i_1] [i_2 - 2]))));
                    arr_9 [i_2] = var_5;
                    arr_10 [i_0] [i_2] [i_2 - 3] = var_13;
                }
            }
        }
    }
    #pragma endscop
}
