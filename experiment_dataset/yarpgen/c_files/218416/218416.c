/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~(min(254, (min(0, 0))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 = (min(var_12, ((((255 && var_10) ? var_1 : ((((((arr_1 [i_0] [i_0]) ? 252 : 78))))))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_10 [i_1 - 1] [i_1 - 1] [i_0] = ((((arr_4 [i_1 - 2] [i_1 - 1] [i_1 - 2]) ? 255 : var_4)));
                    var_13 = (!var_10);
                }
            }
        }
        var_14 = ((81 << (25 - 13)));
        arr_11 [i_0] = (min((((var_3 && (((var_6 ? 175 : var_4)))))), -var_2));
    }
    #pragma endscop
}
