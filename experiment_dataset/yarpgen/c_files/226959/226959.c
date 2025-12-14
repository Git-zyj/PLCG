/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((~var_5) ? var_2 : (--61208)));
    var_11 = ((-((-(var_0 == 1459814550)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 = (!4328);
        arr_3 [i_0] = ((!(arr_2 [i_0])));
        arr_4 [i_0] = var_7;
        arr_5 [i_0] = ((((arr_2 [i_0]) == 4294967270)) ? ((4223804164 % (arr_2 [i_0]))) : ((2644235133 ? (arr_2 [i_0]) : 8)));
        arr_6 [i_0] = ((var_9 | (~var_6)));
    }
    var_13 = -var_9;
    #pragma endscop
}
