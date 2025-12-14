/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    var_16 *= (!var_11);
    var_17 ^= var_7;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 = (((26530 ? 648002103 : 221)));

        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            var_19 = (max(var_19, ((!((((((106 ? 228 : 3862406551))) ? 207 : 13396)))))));
            arr_7 [i_0] [i_1] [i_0] = ((!(((-2147483643 ? 33 : 64)))));
        }
        var_20 = (((12291 ? 1 : 14352)));
        arr_8 [i_0] = (--512);
    }
    #pragma endscop
}
