/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_0));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 = 48;
                arr_5 [i_1] [i_0] = (min((((((13879689093967793093 ? 8712510513027536144 : 74))) ? ((1 ^ (arr_2 [18]))) : (arr_2 [i_1]))), (arr_2 [i_0])));
                var_20 -= 78;
            }
        }
    }
    var_21 = -32625;
    var_22 += (min((((~187) / var_10)), var_6));
    #pragma endscop
}
