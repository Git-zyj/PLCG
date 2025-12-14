/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -2749947800156583176;
    var_12 = 13523;
    var_13 = (var_2 / -var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [1] [i_0] = (arr_2 [i_0] [i_1]);
                arr_5 [i_1] = ((((6385 <= (min((arr_0 [i_0]), 1)))) ? (((52012 < 13517) ? (52012 % 52013) : ((13523 * (arr_1 [i_0]))))) : (((arr_1 [i_0]) << (((arr_1 [i_1]) - 86))))));
            }
        }
    }
    var_14 = 48;
    #pragma endscop
}
