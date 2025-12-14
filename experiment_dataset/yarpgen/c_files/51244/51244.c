/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (((8818144269292476180 ? 35 : var_4)));
    var_12 = (-((((var_6 ? var_0 : var_9)) - var_5)));
    var_13 = (max(var_13, var_1));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 = (arr_1 [i_0 + 2]);
                    var_15 -= (((((+(((arr_7 [i_0 + 1] [i_0 - 1] [i_0 + 3] [i_0]) * 0))))) ? ((((arr_6 [i_0 - 1] [14] [8] [i_0 + 3]) ? (arr_3 [i_0 - 1]) : ((1765062564 ? 131068 : 2529904731))))) : ((2529904732 ? 1765062564 : 18446744073709551615))));
                }
            }
        }
    }
    var_16 = (((((((var_7 ? 9399039301688007120 : var_0))) ? ((var_4 ? 64125 : 97)) : (~100755549))) / (max((max(-363118399, 100755549)), 1411))));
    #pragma endscop
}
