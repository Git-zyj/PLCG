/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (((((var_5 % (((var_8 ? var_9 : 19853)))))) ? ((((var_8 ? 0 : var_3)))) : var_6));

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_0 + 1] [i_0] [i_1] [i_2] = ((max((var_3 | -17), (~1150669704793161728))));
                    arr_10 [i_0] [i_1] [i_2] = (((((1 ? (!-26) : (!19840)))) ? (~var_4) : (~-45682)));
                    var_15 = (~-10);
                    arr_11 [i_1] = ((((max((2147483647 % var_9), -2147483635))) ? ((((min(var_13, var_5))) ? (-9223372036854775807 - 1) : var_0)) : 16021));
                }
            }
        }
        var_16 = -var_3;
    }
    var_17 = var_7;
    var_18 = var_0;
    var_19 += ((~(((~28) ^ ((1552453294 ? var_5 : var_13))))));
    #pragma endscop
}
