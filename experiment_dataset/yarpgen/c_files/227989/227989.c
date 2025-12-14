/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (!15202582696210926715);
    var_11 = (min(1557378307, 1));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (max(var_12, 6499195857220201119));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_6 [i_1] [i_1] [0] = (max(-102, (max(97, 0))));
            var_13 = 1;
            var_14 = ((~(((((82 ? 5211 : 12240404952079726120))) ? 1593620182 : 3))));
            var_15 = arr_5 [9];
        }
    }
    var_16 = min(var_0, (max(var_8, ((max(-1, -1))))));
    var_17 = var_6;
    #pragma endscop
}
