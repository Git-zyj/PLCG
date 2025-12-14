/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, ((min(48278, (-32767 - 1))))));
                    var_13 += ((var_2 & (((-32767 - 1) ? (arr_9 [10]) : var_2))));
                    arr_10 [i_2] [i_2] = ((((max(64655, (((arr_1 [i_1] [i_1]) ? (arr_7 [i_1] [i_1] [i_0]) : var_7))))) && ((((arr_0 [i_0] [i_0]) ? var_2 : ((6222349051234594299 ? (arr_9 [i_2]) : 32765)))))));
                }
            }
        }
    }
    var_14 = 784380316;
    var_15 = ((((var_10 ? (((255 ? var_0 : -1266179387))) : ((3941456982 ? 32756 : 11777242259938166784)))) < ((min((max(var_10, var_6)), (!-32762))))));
    #pragma endscop
}
