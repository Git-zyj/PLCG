/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;
    var_20 = (max(var_20, ((min(1, 1)))));
    var_21 = -1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_22 = (min(1, (!var_9)));
                arr_5 [i_1 - 1] [i_1] [i_1] = (((~var_14) ? ((((!(arr_0 [7] [i_1 - 1]))))) : (arr_0 [i_1] [i_1 - 1])));
                var_23 = (max(var_23, (((+(((arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? var_7 : (arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))))));
                var_24 = (max((-9223372036854775807 - 1), 1));
            }
        }
    }
    #pragma endscop
}
