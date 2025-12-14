/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -var_12;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0 + 1] = (min((~var_8), (min((4294967289 & 14), (max((arr_1 [12] [i_0]), -7825315013709287403))))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [3] = ((+(((arr_2 [i_0]) & 15867400940745270369))));
            arr_7 [i_0 + 1] [i_1] [i_1] = (max((((max(0, 1)))), var_8));
        }
    }
    var_14 = ((((((211 > 2852899808) || var_1))) << ((((var_5 ? 0 : var_10)) << (var_7 - 69)))));
    var_15 = var_11;
    #pragma endscop
}
