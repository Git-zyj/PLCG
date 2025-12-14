/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((21979 >> (21979 - 21975)));
        var_15 = (min((((((min(90, var_1))) < var_1))), (((arr_1 [i_0 - 1] [i_0 - 2]) ? (arr_1 [i_0 - 1] [i_0 - 2]) : (arr_1 [i_0 - 2] [i_0 + 1])))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_16 = (-(arr_4 [i_1 - 1] [i_1 - 2]));
        var_17 = var_9;
    }
    var_18 = 21981;
    var_19 += (max(((((0 ? 21979 : 21979)))), ((-21980 ? -16291 : 460046916))));
    var_20 = var_13;
    #pragma endscop
}
