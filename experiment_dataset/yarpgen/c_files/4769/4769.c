/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = (((((18338 ? 100415363 : -1833002557))) ? (!75) : 255));
        var_12 = (((((45 >> (-1833002557 + 1833002580)))) ? ((4198061117 ? 9505 : -13664)) : ((2932456770221029331 ? 1 : 32767))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_13 = (36 >= 74);
            var_14 = 0;
        }
        arr_7 [i_0] = (7359978479692760056 + 541341454093384244);
    }
    var_15 = (((((~98) ? 43985 : var_4)) != 98));
    var_16 = var_6;
    #pragma endscop
}
