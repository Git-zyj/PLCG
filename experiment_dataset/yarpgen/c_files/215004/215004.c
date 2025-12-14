/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_7 [i_0] [0] = ((var_9 < (arr_1 [i_0])));
                    var_19 = (((((var_13 ? var_10 : 0))) ? var_7 : (!279100827)));
                }
                var_20 = ((+(((!-7377100547936148923) ^ var_10))));
            }
        }
    }
    var_21 = ((((max(var_13, var_8)))));
    var_22 = (min(20, 0));
    #pragma endscop
}
