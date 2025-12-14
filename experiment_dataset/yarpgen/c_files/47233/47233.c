/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_20 = (max(var_20, ((((arr_1 [i_0 + 2]) ? (arr_1 [i_0 + 1]) : (arr_1 [1]))))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_21 = (((((arr_0 [i_1]) >= -5622275837373606460)) ? (arr_3 [i_0 + 2]) : (arr_0 [i_1])));
            var_22 = (((arr_3 [i_0 + 1]) ? (arr_0 [i_0 + 1]) : (arr_3 [i_0 + 1])));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_23 = (max(var_23, (((0 > (arr_1 [i_0 - 1]))))));
            var_24 = ((arr_4 [i_0 - 1] [i_0 - 1]) ? (arr_4 [i_0 - 1] [i_0 - 1]) : var_4);
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_25 = ((var_13 && (arr_6 [i_0 - 1])));
            var_26 = ((((60360291392086114 ? 2017612633061982208 : (arr_3 [i_3])))) ? ((-5622275837373606460 ? 1970324836974592 : (arr_7 [7]))) : (arr_6 [i_0 + 1]));
            var_27 = 1;
            var_28 = (max(var_28, ((((arr_6 [1]) ? (arr_6 [i_0 - 1]) : (arr_6 [i_0 - 1]))))));
        }
        var_29 = ((65535 || (arr_6 [i_0])));
    }
    var_30 = 9238;
    #pragma endscop
}
