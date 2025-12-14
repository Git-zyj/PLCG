/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 1;
    var_11 = ((+((var_3 << (((~var_9) + 1329689572302952854))))));
    var_12 = (max(0, -733098902));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 += ((-(arr_1 [i_0])));
        arr_2 [i_0] [i_0] = ((var_1 || (arr_0 [i_0])));
    }
    for (int i_1 = 4; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_14 = (min(var_14, var_9));
        var_15 = ((-9223372036854775804 ? ((max(var_2, (arr_3 [i_1 + 3])))) : var_8));
        var_16 = ((min((max(798439430, (arr_3 [i_1]))), var_5)));
        var_17 = ((((~(~733098902))) << (min(-83, (var_8 >= 12223711536206246609)))));
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_18 = (min(var_18, (((~(arr_0 [i_2 - 2]))))));
        var_19 = (((arr_7 [i_2] [i_2 + 3]) / (arr_7 [i_2 - 3] [i_2 - 1])));
        arr_8 [i_2 - 1] = var_1;
        arr_9 [i_2] = 9223372036854775803;
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 10;i_3 += 1)
    {
        var_20 = ((arr_6 [i_3 + 1] [i_3 - 3]) <= (arr_6 [i_3 - 4] [i_3 - 4]));
        arr_12 [i_3] = (52289 || -7128112119552063135);
        var_21 = var_5;
        arr_13 [i_3] [i_3] = var_1;
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            {
                var_22 = (min(15753, (((arr_4 [i_4]) ? (min(1773795852, 1)) : ((-(arr_18 [i_4])))))));
                var_23 = -733098902;
            }
        }
    }
    #pragma endscop
}
