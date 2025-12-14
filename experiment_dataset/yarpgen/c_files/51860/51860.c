/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((!(!-5698)))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        var_20 &= (~-65535);
        arr_2 [i_0 - 2] &= (arr_0 [i_0 - 3]);
        var_21 = ((-(5697 >= 25062)));
        arr_3 [i_0 + 1] = ((~(~32320)));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_22 -= ((-2046521597 ? 18446744073709551615 : var_4));
        arr_8 [i_1] [11] = ((var_3 && ((max((max(var_12, var_17)), 6827)))));
    }
    #pragma endscop
}
