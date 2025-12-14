/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_19 = 110;
        arr_3 [i_0] [i_0] = (((!var_3) < 2472851164));
        arr_4 [i_0] = (!var_17);
        arr_5 [12] [12] &= (min((!var_2), -1352150477));
        arr_6 [i_0] = ((-(!var_15)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_9 [i_1] = (!var_6);
        arr_10 [i_1] = (~1);
    }
    #pragma endscop
}
