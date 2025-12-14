/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_13 = (arr_1 [i_0] [i_0]);
            var_14 = (arr_2 [i_1]);
        }
        var_15 = (arr_1 [i_0] [i_0]);
        var_16 |= ((+((max((((arr_3 [i_0]) || 5828269450153170683)), (((arr_2 [6]) && 4236862309605079825)))))));
        var_17 += (min((1006632960 == 4294351753786284741), 13407673418305550331));
    }
    var_18 -= var_5;
    #pragma endscop
}
