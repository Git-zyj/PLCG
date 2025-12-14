/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((((max(511, 2470775489)) >> (var_5 - 3427512852)))) || ((((((arr_2 [i_0] [i_0]) != 7588203883586242664)) ? (arr_0 [i_0] [i_0 + 3]) : (arr_1 [i_0 - 2] [i_1]))))));
                var_11 ^= (((((((((arr_2 [20] [2]) ^ 861921715))) / 4313212364679756818))) && var_2));
            }
        }
    }
    var_12 |= (max(((-26719 ? ((min(234, 290833985))) : ((0 ? var_6 : var_1)))), (var_9 & var_4)));
    #pragma endscop
}
