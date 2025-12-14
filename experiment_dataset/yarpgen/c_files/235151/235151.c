/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_9, var_5));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((((~(max(-6802867814377932448, (arr_2 [i_0] [6]))))) > ((((arr_2 [i_0] [i_0 - 2]) * var_12))))))));
                var_15 = ((((-(arr_4 [i_1 + 2] [i_0 - 2])))) ? ((((arr_4 [i_1 - 2] [i_0 + 3]) ? (arr_4 [i_1 + 2] [i_0 - 1]) : (arr_4 [i_1 - 2] [i_0 + 2])))) : (((arr_4 [i_1 + 1] [i_0 + 2]) ? var_10 : (arr_4 [i_1 + 2] [i_0 + 1]))));
                var_16 = ((~(~4146082825)));
                arr_6 [1] [i_1 - 1] = var_5;
            }
        }
    }
    #pragma endscop
}
