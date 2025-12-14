/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (((-((((min(var_7, var_12))) ? 1970799535 : var_9)))))));
                    var_15 -= max(((((((arr_7 [i_2] [i_1] [i_1] [i_0]) == (arr_1 [i_2])))) & (arr_2 [i_1]))), var_4);
                }
            }
        }
    }
    var_16 = ((!((min(var_9, (max(var_12, var_9)))))));
    var_17 = ((var_6 % ((((~var_11) && var_2)))));
    #pragma endscop
}
