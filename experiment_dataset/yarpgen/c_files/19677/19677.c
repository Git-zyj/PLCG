/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_8));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min((min((var_0 < 5834302433268016948), (~-16841))), (145932564 ^ 1)));
        arr_4 [i_0] = (((((-(24076 >> 1)))) ? (max((((1 ? 2889530196 : -145932565))), (1754452227 % -3843878840742531573))) : ((((((var_9 ? 1 : 30621))) ? ((var_1 ? 1 : var_10)) : (-25969 * var_2))))));
        arr_5 [i_0] [i_0] = (3843878840742531572 % -323681504);
    }
    #pragma endscop
}
