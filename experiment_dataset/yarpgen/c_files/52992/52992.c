/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (1 * 0);
    var_20 = 54;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_21 ^= ((!(arr_1 [20] [20])));
        var_22 = (((arr_0 [i_0]) <= (arr_1 [i_0] [i_0 + 1])));
        var_23 = (arr_0 [i_0 - 1]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_24 = 0;
                    var_25 = ((!(((1023 ? (arr_0 [i_0 + 1]) : (arr_3 [2]))))));
                }
            }
        }
    }
    var_26 = 1023;
    #pragma endscop
}
