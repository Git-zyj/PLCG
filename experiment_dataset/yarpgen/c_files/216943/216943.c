/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0 - 2] = (min(-var_0, ((max((arr_0 [i_0 - 1] [i_0]), (arr_0 [i_0 + 3] [i_0]))))));
        arr_3 [i_0] = (!var_3);
        var_17 = (((max(1, 0)) ? 1 : 1));
        arr_4 [i_0] [i_0] = (arr_1 [i_0 + 2] [i_0 + 1]);
    }
    var_18 = (((((30608 ? 23 : var_16))) || var_13));
    #pragma endscop
}
