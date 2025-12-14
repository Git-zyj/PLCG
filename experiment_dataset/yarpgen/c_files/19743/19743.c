/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((max((min(3478061106, 816906217)), var_4)) != var_11));
    var_13 = ((~((min(var_11, (17679236015946429619 < -394236751))))));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0 - 3] [i_0] = max(3478061092, ((max((arr_0 [i_0 - 3]), (arr_0 [i_0 - 3])))));
        arr_4 [9] [3] = (~((((arr_2 [i_0 - 2]) == -1820898966))));
    }
    var_14 += (var_0 + -2577073977);
    var_15 = var_0;
    #pragma endscop
}
