/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;
    var_21 = (min((((~var_11) ? ((27683 ? 5305626654535052955 : -1969261860)) : var_6)), ((((((var_4 ? var_17 : var_14))) && var_15)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (((((-107 ? (arr_2 [i_1]) : (arr_2 [i_0])))) * (max(((var_9 ? var_12 : (arr_2 [i_0]))), (arr_6 [i_1 - 2] [i_1 + 3])))));
                var_22 = min(1969261833, 4820892354847407515);
                var_23 = (max(var_23, var_16));
            }
        }
    }
    #pragma endscop
}
