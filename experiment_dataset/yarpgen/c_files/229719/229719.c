/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(((min(((min(var_10, var_7))), (min(var_5, -349479608))))), (max((min(349479608, var_3)), ((min(var_6, var_10)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_7 [i_0] = (min(1594825888, 349479617));
                var_13 = (max((max((arr_2 [i_0] [i_0]), 3151812111)), (~-118)));
                var_14 = (max(var_14, ((min((min(((max(1, -1313091501))), (min(107, var_5)))), (max(-7637257150813134483, ((max(var_8, var_2))))))))));
                arr_8 [i_0] = (max((max((arr_2 [i_0] [i_0]), var_6)), (min((arr_2 [i_0] [i_0]), -349479618))));
                var_15 = (max(var_15, ((max((((~(min(43, 985620267))))), (min(var_4, (arr_4 [i_0]))))))));
            }
        }
    }
    var_16 = (max(((min(0, var_3))), ((max(-var_0, (max(-1, -8864239925182342752)))))));
    var_17 = max((min((min(349479607, var_2)), (min(var_7, var_10)))), ((-(max(var_6, -985620267)))));
    #pragma endscop
}
