/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (!var_3);
            arr_6 [i_1] [i_0] [i_0] = (arr_0 [i_0]);
            arr_7 [i_1] [i_0] = (arr_1 [i_0] [i_1]);
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [1] = var_0;
                        var_10 = (min(var_10, -5467));
                    }
                }
            }
        }
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            arr_15 [i_4 + 1] [i_4] [i_0] = (((((-(arr_2 [i_4 + 3] [i_0])))) ? (((((arr_10 [i_4 + 2] [6] [i_4 - 1] [i_4] [i_0] [i_0]) >= var_0)) ? var_7 : (-59 - -63))) : (((min(var_8, var_6))))));
            var_11 = ((+(max((990807279 < -990807280), (~var_0)))));
            var_12 = (arr_0 [i_0]);
            var_13 = (max(var_4, (3204588336206645664 % 59)));
        }
        arr_16 [i_0] [i_0] = (arr_0 [i_0]);
    }
    var_14 = (!3204588336206645646);
    #pragma endscop
}
