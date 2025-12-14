/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-((min(var_16, 1896363322)))));
    var_21 = var_7;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_22 = (!var_15);
        arr_3 [i_0] = (min(((!(~-1838057968))), ((!((min(2398603955, 1896363322)))))));
        arr_4 [i_0] [i_0 + 1] = ((((((1896363322 << (97 - 95)))) * 0)) * (!var_18));
    }
    #pragma endscop
}
