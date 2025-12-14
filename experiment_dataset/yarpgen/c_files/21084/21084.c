/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 1240571560;
    var_18 = (min(var_18, (((1023 ? var_9 : (((((1644187959 ? 3114467790 : var_5))) ? (((-501451542731368010 ? -1180287820 : var_5))) : 1644187979)))))));
    var_19 = (max(var_19, (((((-1830360851 ? var_3 : var_10)) << ((((var_8 ? 1644187943 : 1262566101)) - 1644187943)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        var_20 = 0;
        var_21 = ((arr_1 [i_0]) ? (arr_1 [i_0]) : (((arr_1 [i_0]) ? 1 : 3673352446)));
        var_22 = (arr_0 [i_0] [4]);
    }
    var_23 = (((min(5880444, 1644187962)) != (((((var_11 << (5880444 - 5880444)))) ? ((501451542731368003 ? 8388607 : 1644187983)) : (1856449098 ^ 3454414589)))));
    #pragma endscop
}
