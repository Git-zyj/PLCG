/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((47 ? (((~var_15) ? (min(-18736, -154330678)) : var_11)) : ((var_3 ? (~var_9) : ((max(var_15, var_8))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = (max((arr_0 [i_0]), var_8));
                    var_20 = var_1;
                }
            }
        }
    }
    var_21 = (~-var_10);
    var_22 &= var_18;
    #pragma endscop
}
