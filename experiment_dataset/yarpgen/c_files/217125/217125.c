/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((((((var_2 ? 2140245271 : var_8)) - var_7)) * (((((min(var_2, var_7))) ? 0 : ((var_7 ? var_4 : 250))))))))));
    var_15 = ((((~(~var_13))) ^ (min(-1, ((var_6 ? var_13 : var_2))))));
    var_16 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_1] = var_1;
                var_17 = (((arr_5 [i_0] [i_0]) ? ((var_2 ? (min(var_13, var_7)) : ((((!(arr_0 [i_0]))))))) : ((((min((arr_5 [i_0] [i_1 - 2]), var_0))) ? 16543 : (((var_9 + 9223372036854775807) >> (1756368008 - 1756367966)))))));
                arr_8 [11] [11] [5] = ((-((min((arr_5 [i_0 + 1] [i_1 - 1]), var_10)))));
            }
        }
    }
    #pragma endscop
}
