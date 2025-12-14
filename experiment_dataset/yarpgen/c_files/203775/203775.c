/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0 + 2] = (~(((min(359047818, 65535)))));
        var_16 = 359047818;
        var_17 *= -13;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_5 [i_1] = ((!(!-0)));
        var_18 *= (!131056);
        var_19 = (((--32760) | (arr_3 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_10 [i_2] = ((+(((arr_1 [i_2]) ? (arr_9 [i_2] [i_2]) : 1))));
        arr_11 [i_2] = ((255 ? 4294836250 : 11));
        arr_12 [i_2] &= (!8190);
        arr_13 [i_2] = ((-(arr_9 [i_2] [i_2])));
    }
    var_20 = 0;
    #pragma endscop
}
