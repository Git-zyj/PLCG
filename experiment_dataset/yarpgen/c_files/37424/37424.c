/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!var_4);
    var_16 *= ((max(var_0, var_11)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = (var_4 / (arr_1 [0] [9]));
                var_18 = ((((max(414006125, 7667002044063477101))) ? (((((-24983 ? -13 : var_9))) ^ (-1496156383 | var_12))) : ((((var_1 ? 10779742029646074491 : var_8)) << 1))));
                var_19 ^= var_10;
            }
        }
    }
    #pragma endscop
}
