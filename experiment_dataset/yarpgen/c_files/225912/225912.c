/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_1 + 2] [3] [i_0] = var_13;
                var_19 = (min(var_19, ((min((((arr_3 [i_0]) ? -var_2 : (((16767 ? -1887199736 : (arr_0 [17])))))), (((-1682037312 ? 1 : (arr_0 [i_1 + 3])))))))));
            }
        }
    }
    var_20 += ((((((-8839800168163516988 + 9223372036854775807) >> (var_12 && var_14)))) ? 1990451381 : ((((!((max(3867933189, -8839800168163516988)))))))));
    var_21 = (max((((var_3 > (29841 == 1)))), ((2873 ? var_14 : var_10))));
    #pragma endscop
}
