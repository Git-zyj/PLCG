/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((max(((-1209242584303348691 ? 1 : 1209242584303348691)), (!var_1))), ((min((!1), ((-1209242584303348691 ? 7 : 11)))))));
    var_12 = (min(var_12, 5694443894368076717));
    var_13 = (var_9 % -1209242584303348691);

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_14 = (min((((-1209242584303348694 < (arr_2 [i_0 + 1])))), ((1209242584303348685 ? 1209242584303348694 : (-127 - 1)))));
        arr_3 [i_0] = ((((((min(198, 1574703655980236563))) ? 17654800140322235812 : -1209242584303348691)) ^ ((((arr_2 [i_0]) - 6386796067055067766)))));
    }
    var_15 = ((min((min(-439583179921275227, 42248)), (min(1209242584303348694, 58653)))));
    #pragma endscop
}
