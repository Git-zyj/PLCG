/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_17 < 80);
    var_21 |= var_9;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    arr_8 [1] [i_1] [i_0 - 2] &= ((((80 & (176 & 28832))) > ((((((3800352563 ? (arr_2 [i_2] [i_0]) : 215125205))) && ((((arr_5 [i_0] [i_0]) << (-2166450570464089397 + 2166450570464089416)))))))));
                    arr_9 [i_2] [i_1 - 1] [i_1 - 1] [i_0] = (arr_0 [i_0 + 2] [i_1 - 1]);

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_14 [i_3] [i_0 - 3] [i_1] [i_0 - 3] [i_1] [i_0 - 3] = arr_3 [i_3];
                        var_22 = (arr_0 [i_3] [i_0]);
                    }
                }
            }
        }
    }
    var_23 = ((((((14046 > 215125190) - (0 >= 21043)))) && ((1 < (((-215125226 + 2147483647) << (2 - 2)))))));
    var_24 = var_4;
    #pragma endscop
}
