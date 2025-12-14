/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (--677729596);

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [0] [i_0] = ((~(((!(!53475))))));
        arr_3 [i_0] [i_0] = 0;
        arr_4 [i_0] = (~1);
        arr_5 [i_0] = (~(-9223372036854775807 - 1));
        arr_6 [9] = (!16368);
    }
    var_20 = (((-(!var_5))));
    var_21 = (~-0);
    #pragma endscop
}
