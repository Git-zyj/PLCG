/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_10 = (((arr_0 [17]) / 2487985828));
                var_11 = var_0;
                var_12 = 0;
                var_13 = (((min(1806981468, (min((arr_4 [8] [i_1] [8]), 5352626919498423400)))) % ((max(var_6, (((arr_5 [i_1] [i_0] [i_0]) ? (arr_3 [i_0]) : 1)))))));
            }
        }
    }
    var_14 = 2487985835;
    var_15 = ((min(2487985805, var_9)));
    #pragma endscop
}
