/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 2757340210211734241;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_16 += (arr_8 [i_0] [i_1] [i_2] [i_3]);
                        var_17 = (max(var_17, (~-17887)));
                        var_18 = (-2757340210211734241 && 1);
                    }
                }
            }
            var_19 = (~1270252885);
            var_20 = (142 ? 63 : (arr_1 [i_0]));
        }

        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_21 = (1 | 7168);
            var_22 = 79;
        }
    }
    #pragma endscop
}
