/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_11 |= arr_2 [i_0];
        arr_3 [i_0] = (min((((!(arr_1 [i_0 + 1])))), 524287));
        arr_4 [i_0] [i_0] = (((((arr_2 [i_0 - 1]) || 3201366310)) ? (arr_1 [i_0]) : ((((((arr_1 [i_0]) || (arr_0 [i_0]))) ? (!18446744073709551615) : (((140600049401856 && (arr_2 [i_0])))))))));
        var_12 = (max(var_12, (arr_2 [i_0])));
        var_13 = ((((!(arr_2 [i_0 - 1])))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        var_14 = ((-(arr_6 [i_1 + 3] [i_1 - 1])));
        var_15 += (((arr_6 [i_1 - 2] [i_1 - 2]) >= (((((arr_6 [i_1] [i_1]) > (arr_6 [i_1] [i_1])))))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_16 = (((13843733542481697724 ^ 15972848079028336641) - (((((4948672612033196773 / (arr_8 [i_2])))) ? -536862720 : (!779910920)))));
        var_17 += ((((0 ? 18446744073709551615 : 65535)) | (arr_5 [i_2])));
    }
    var_18 = var_2;
    #pragma endscop
}
