/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, ((((374 ? (arr_4 [i_0] [i_0]) : ((min((arr_5 [i_1] [i_1] [i_0]), var_0)))))))));
                    var_22 = ((((((arr_4 [i_0] [i_0]) + 9223372036854775807)) << ((((-358332327 ? 577118420 : 374)) - 577118420)))));
                }
            }
        }
        var_23 &= (max((arr_4 [i_0] [i_0]), (arr_7 [i_0] [16] [2] [18])));
    }
    var_24 &= (((((((371 ? -96 : 353)) / (var_5 && var_8)))) != (max(var_14, var_13))));
    #pragma endscop
}
