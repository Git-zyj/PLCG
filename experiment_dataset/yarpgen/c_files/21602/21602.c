/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, -var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_5 [14] [i_1] [13] |= (((((((arr_0 [i_1]) ? 1620976883322897238 : (arr_2 [i_0] [i_1]))) > (arr_2 [8] [i_1 + 1]))) ? (2813223046 != 1) : (((((0 ? 18285530728871553310 : 13711))) ? (arr_1 [i_1 + 1]) : (((arr_2 [i_0] [i_1]) ? -12135 : var_1))))));
                var_14 = (((((1 ? (max(9223372036854775807, 9223372036854775804)) : (190 + var_9)))) ? (arr_2 [i_1 + 1] [i_1 + 1]) : (((arr_2 [i_0] [i_1 + 1]) + (arr_2 [i_0] [i_1 + 1])))));
                arr_6 [i_0] [i_1] [i_0] = (max(7935388128682078732, -3));
            }
        }
    }
    var_15 = var_2;
    #pragma endscop
}
