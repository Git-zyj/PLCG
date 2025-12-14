/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((((((!(arr_1 [i_0]))) ? (-19 || -27110) : (!53249))) ^ ((max((arr_0 [i_0]), 25)))));
        var_14 = (min(var_14, (arr_0 [i_0])));
        var_15 = ((!((((arr_2 [i_0]) - (arr_2 [i_0]))))));
    }
    var_16 = ((((((229 > 53274) ? ((min(53236, 12310))) : (12286 ^ 53244)))) || ((((!53242) ? ((12298 << (53258 - 53257))) : (var_4 && 59913))))));
    var_17 = (min(var_9, (((12294 / 3557339242) ? ((var_0 ? var_13 : 36028762659225600)) : (-4612562331421285682 || 53235)))));
    #pragma endscop
}
