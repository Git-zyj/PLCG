/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= ((1473012645 ? ((-1473012646 ? var_9 : ((var_2 ? 1428015296 : 3265)))) : (((((var_13 >> (-1473012645 + 1473012654))) < (~57458))))));
    var_15 = ((var_11 ? var_3 : (max(((1 ? 8938 : 94)), -var_12))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 += (min(8930, ((118 ? var_8 : var_3))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [9] = ((13174658104782217827 << (((-1473012645 | var_5) + 1472995851))));
                        var_17 = (min((!16727730592365432234), (((((var_6 ? -26103 : 65521))) ? ((145405582 << (var_2 - 865018054565256551))) : ((min(var_8, var_6)))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
