/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((min((2147483647 + 1), var_5)));

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_21 = ((((((~((3903205513947335827 ? 77 : 1192188772383224620)))) + 9223372036854775807)) >> (((arr_2 [i_0]) - 11032))));
        arr_3 [i_0] = (185 + 0);
        var_22 = (max(((!(arr_0 [i_0 - 3] [i_0 + 2]))), ((((max((arr_2 [i_0]), var_6))) && 179))));
    }
    var_23 = ((-1192188772383224594 || ((((min(-1192188772383224582, 57))) && var_9))));
    #pragma endscop
}
