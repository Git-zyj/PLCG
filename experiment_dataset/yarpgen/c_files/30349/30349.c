/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (((((10276072223068936049 ? var_6 : ((((arr_0 [i_0] [i_1]) && (arr_2 [i_0]))))))) > (((max((arr_3 [i_0] [i_1 + 1]), (arr_3 [i_1] [i_1]))) << (66 - 59)))));
                arr_4 [i_1] = var_0;
                arr_5 [i_1] [i_1 + 3] = ((56 ? -56 : -56));
            }
        }
    }
    var_13 = (min(var_13, var_10));
    var_14 = (min(var_14, ((((((var_8 && var_1) && 7)) ? 45 : 56)))));
    var_15 = (((((((0 ? 56 : 1753))) | ((0 ? 7 : 4069290289)))) <= -30809));
    var_16 = (min(var_16, (~var_10)));
    #pragma endscop
}
