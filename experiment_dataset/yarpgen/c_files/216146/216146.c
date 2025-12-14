/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 6399762714992058254;
    var_14 = var_3;
    var_15 -= (((((((var_10 ? 9142 : 2016018139572717163))) ? (((var_8 ? var_2 : var_11))) : ((127 ? var_10 : var_1)))) - var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (((arr_2 [i_0] [i_1 + 2] [i_1]) ? (((2016018139572717163 > (arr_2 [i_1] [i_0] [i_1])))) : ((16430725934136834457 ? 127 : 9128))));
                var_16 = (arr_3 [i_1 + 1] [i_1 + 1]);
                var_17 += (((arr_0 [i_0]) - ((-((9138 - (arr_0 [i_1 + 2])))))));
                arr_5 [i_1] [19] = ((-(-127 - 1)));
            }
        }
    }
    var_18 += var_3;
    #pragma endscop
}
