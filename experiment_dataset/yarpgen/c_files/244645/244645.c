/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((min(1, (max(var_2, var_0)))), var_6));
    var_13 &= (var_4 - ((max(var_3, -596305306060110411))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 -= (-(((min((arr_4 [10] [i_1] [6]), 161873119)) ^ (arr_3 [2] [2] [i_1]))));
                var_15 = ((((min(3817264836, 70334384439296))) ? ((max((arr_1 [i_0 - 1]), (arr_1 [i_0 + 1])))) : (((!(arr_1 [i_0 + 1]))))));
                var_16 = (min(var_16, ((((((51 ? (((var_9 > (arr_3 [i_0] [2] [0])))) : ((min((arr_3 [i_0] [i_0] [i_0 - 1]), var_7)))))) * ((~(arr_4 [1] [i_1] [i_1]))))))));
            }
        }
    }
    var_17 = var_0;
    #pragma endscop
}
