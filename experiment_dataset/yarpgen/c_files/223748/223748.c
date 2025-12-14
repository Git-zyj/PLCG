/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((4 ? 1 : 1));
    var_21 = ((-960774574 ? var_1 : (~var_1)));

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        var_22 = ((~(min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 4])))));
        arr_2 [i_0] [i_0] = 72057593501057024;
    }
    var_23 = (~1815868798);
    #pragma endscop
}
