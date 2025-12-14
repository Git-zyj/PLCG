/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_8, ((((max(var_17, 29))) ? (!var_8) : (max(-6239656251358235489, var_11))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((var_9 != ((((arr_1 [i_0]) || (arr_1 [i_0]))))));
        arr_5 [i_0] = 5469853216377325441;
    }
    #pragma endscop
}
