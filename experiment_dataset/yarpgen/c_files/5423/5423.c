/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 17013774208624112870;
    var_13 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {
                var_14 -= (arr_2 [i_0]);
                arr_5 [i_1] = ((+((((!1309617628512903980) == var_10)))));
                var_15 ^= (((((((min(2334842647684051782, (arr_0 [i_0] [i_0])))) ? -1436356717 : ((((arr_3 [0] [i_1] [i_1]) > (arr_0 [i_1 - 4] [i_0]))))))) | var_6));
            }
        }
    }
    #pragma endscop
}
