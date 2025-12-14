/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 = (((((((max(1, var_1))) | var_11))) ? (((arr_2 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [19]))) : var_11));

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            var_15 = ((2131 ? 112 : 1));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {
                        {
                            arr_13 [12] [12] [12] = ((-21 ? ((2131 ? 1 : 63386)) : ((-113 ? 1 : 112))));
                            var_16 = (min((min(61832, 61823)), ((((var_9 != 1) && (arr_6 [i_0] [i_1] [i_2] [i_3]))))));
                            var_17 |= ((~(((!((max(var_11, 59463))))))));
                        }
                    }
                }
            }
        }
    }
    var_18 = min((min(61825, var_10)), var_13);
    #pragma endscop
}
