/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_11 = (max(var_11, (~648306859)));
        arr_2 [i_0] [9] |= (((arr_0 [i_0] [i_0]) ? var_1 : 2530498450));
        arr_3 [i_0] = (((arr_0 [i_0] [i_0]) ? (-32767 - 1) : (~var_8)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            var_12 *= ((~(1 != -9223372036854775792)));
            arr_8 [i_1] [i_2] = ((var_4 + ((var_1 ? (-2147483647 - 1) : 17427047514208236922))));
            var_13 ^= -91;
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            arr_12 [i_3] [i_3] [i_1] &= 1241420349057541046;
            arr_13 [i_1] [i_3] [i_1] = (((arr_7 [i_1] [i_1] [i_3]) ? (arr_7 [i_1] [i_3] [i_3]) : (arr_7 [i_1] [i_1] [i_1])));
            var_14 = (((arr_5 [i_1] [i_3]) ? 123 : (arr_5 [i_1] [i_1])));
        }
        arr_14 [i_1] = var_5;
    }
    var_15 = (((var_9 > 99) == (max(var_3, ((3 ? var_10 : 90))))));
    #pragma endscop
}
