/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 ^= 6690067368924653386;
                var_19 = (min((((3402593182 ? (arr_5 [i_1] [i_0]) : (arr_2 [i_1])))), (min(892374114, 5))));
                arr_6 [i_0] [i_1] = (arr_3 [i_0] [i_1] [i_1]);
            }
        }
    }
    var_20 = ((((min(79740716, (-2147483647 - 1)))) ? var_14 : var_7));
    var_21 = (min(1, var_8));
    var_22 = var_16;
    #pragma endscop
}
