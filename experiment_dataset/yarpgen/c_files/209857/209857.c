/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (--var_2);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (~-var_11);
        arr_3 [i_0] = (min((!-1356983268379986141), 26317));
    }
    var_14 = ((!(!var_0)));
    #pragma endscop
}
