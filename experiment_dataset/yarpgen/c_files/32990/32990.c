/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, ((max(233, ((-(arr_3 [i_0] [i_1] [i_2]))))))));
                    arr_10 [i_2] = (min((arr_8 [8] [1] [i_2]), (min((arr_8 [i_0] [i_1] [i_2]), 264241152))));
                    var_14 = (max(var_14, (((((((-264241152 ? -264241152 : -264241152)) <= 58)) ? var_1 : ((15567 * (!58))))))));
                    arr_11 [i_2] [i_1] = (max(((0 ? (0 << 0) : (1 - var_6))), (min((arr_7 [i_0] [i_1]), (((arr_8 [i_0] [i_1] [i_2]) | var_8))))));
                }
            }
        }
    }
    var_15 = (((~var_11) ? ((max(0, var_9))) : var_2));
    #pragma endscop
}
