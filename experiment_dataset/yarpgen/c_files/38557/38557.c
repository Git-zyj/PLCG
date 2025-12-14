/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                var_11 = (min((max(var_1, var_7)), (max((((2047 << (var_1 + 518072165034440422)))), (min(-8986367017262647748, 44))))));
                arr_4 [i_0] = (min((min((arr_3 [i_1 - 4]), (arr_2 [i_1 + 1] [i_1] [i_1]))), ((min((arr_2 [i_1 - 3] [i_0] [5]), var_7)))));
            }
        }
    }
    var_12 = (~var_0);
    var_13 *= ((0 << (54141 - 54135)));
    var_14 = (max(var_14, var_1));
    #pragma endscop
}
