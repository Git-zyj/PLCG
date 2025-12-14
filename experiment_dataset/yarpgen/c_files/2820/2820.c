/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_3 ? var_6 : (((((var_10 << (var_6 + 275132399)))) % ((12113 ? 3658012087813059851 : 38050))))));
    var_13 = (1057 < 38050);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((49448 | (230 / 1060102643129471794)));
                    arr_10 [i_2] [i_2] [i_1] [i_0] = (-((-(var_10 > -1057))));
                    var_14 = (!(231 * 16088));
                    arr_11 [i_0] [i_0] [i_0] = 16088;
                }
            }
        }
    }
    var_15 = var_0;
    #pragma endscop
}
