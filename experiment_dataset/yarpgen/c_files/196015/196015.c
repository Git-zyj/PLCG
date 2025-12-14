/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 = 0;
        var_16 = -var_12;
        var_17 = -405694617;
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_18 = ((-(+-1)));
                    var_19 = 17748;
                    var_20 = var_4;
                    var_21 = (max(((((var_3 ? var_3 : var_3)))), 49132));
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 8;i_3 += 1)
    {
        var_22 = (((-(!945593118))));
        var_23 = ((((max((arr_1 [i_3]), (!var_12)))) || ((((!405694617) ? (!var_7) : (!var_4))))));
    }
    var_24 = (min((((((-1 + 2147483647) << (1 - 1))) << (((max(var_14, 945593118)) - 945593118)))), (var_2 || var_0)));
    var_25 = (((!((min(3349374177, var_3))))));
    #pragma endscop
}
