/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_12 += ((((-(arr_1 [i_1]))) % (247 / 1)));
                arr_7 [i_0] [i_0] [i_0] = ((64159 ? (((((min((arr_1 [i_0]), var_3))) && (var_3 && var_4)))) : (((0 & -30) ? ((min((arr_3 [i_1]), var_11))) : ((min(246, 1)))))));
            }
        }
    }
    var_13 = (var_9 <= var_1);
    var_14 = var_0;
    #pragma endscop
}
