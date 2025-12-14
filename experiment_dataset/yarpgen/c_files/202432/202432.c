/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0 + 1]);
        var_13 = (((((arr_1 [i_0]) ? (((arr_0 [i_0]) << (((arr_1 [i_0]) - 41303)))) : (arr_0 [i_0]))) >= (123 - -30241)));
    }
    var_14 = (-((-1346511700 << (-30241 - 35287))));
    #pragma endscop
}
