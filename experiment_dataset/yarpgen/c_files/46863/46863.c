/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_7 [i_2] = 1057975005;
                    var_16 -= (((arr_5 [i_0 + 3] [i_0 + 3] [1]) >= (arr_5 [i_0 + 1] [i_0 + 1] [i_2])));
                    arr_8 [3] [i_1] [i_1] [i_0 - 1] = ((1585133847294703556 ? ((var_6 ? -16384 : var_2)) : 17590038560768));
                }
                var_17 = (((((3786005982 << (3702301985570154853 - 3702301985570154841))) ^ (arr_5 [i_0 - 1] [i_0 + 1] [i_0 + 2]))) | (((((var_6 ? 16374 : 40565)) ^ 24971))));
            }
        }
    }
    #pragma endscop
}
