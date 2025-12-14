/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = (min((arr_0 [i_0]), ((min(var_11, ((var_6 ? (arr_0 [i_0]) : var_5)))))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 = (-101 ? 0 : 1048575);
                    var_16 = (((max(1613407388474641380, 1)) - (((min(1, 1))))));
                    var_17 = (((!1) ? (((arr_4 [i_0] [i_1 - 3]) ? (arr_4 [i_0] [i_1 - 3]) : 88)) : ((37114 ? (arr_1 [i_1] [i_1 - 3]) : (arr_1 [i_0] [i_1 - 3])))));
                }
            }
        }
    }
    var_18 = (((4829928127449215575 ? 1501926983232965019 : 96)));
    var_19 = var_3;
    #pragma endscop
}
