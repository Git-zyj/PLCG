/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [0] = (18367010095829424035 ? 12448034193889070147 : 12448034193889070148);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_10 = (max(var_10, (((!((min((arr_11 [i_0] [i_1]), (arr_11 [i_0] [11])))))))));
                        var_11 = (min(var_11, ((((0 % -6) ? ((-7668 ? -49 : 18446744073709551602)) : (((-30 ? (arr_0 [i_0]) : (arr_1 [i_2])))))))));
                        var_12 = var_6;
                        arr_13 [6] [i_2] [i_2] [i_1] [i_0] = (max(((((arr_1 [i_0]) != 4794979057062106707))), 78));
                    }
                }
            }
        }
    }
    var_13 = var_3;
    #pragma endscop
}
