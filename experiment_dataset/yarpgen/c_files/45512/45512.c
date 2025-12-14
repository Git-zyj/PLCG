/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(0, (var_13 == 0)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (84 == 4200515283);
        var_17 = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 = (arr_0 [i_0]);
                    arr_8 [i_1] [5] [20] [1] = ((min(103, (((arr_7 [i_0] [i_0]) ^ var_12)))));
                }
            }
        }
    }
    var_19 = var_15;
    var_20 = (((!19599) ? var_3 : (min((23 ^ var_5), (max(var_11, var_2))))));
    var_21 = 107;
    #pragma endscop
}
