/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    var_11 = 5438567270296128187;
    var_12 &= (max(((-(12530820698007500986 - var_6))), (((var_9 ? var_3 : var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = var_0;
                arr_4 [i_0] [i_0] [i_0] = 17724420832463960935;
                var_14 -= ((31146 ? 1 : 2225114211));
            }
        }
    }
    #pragma endscop
}
