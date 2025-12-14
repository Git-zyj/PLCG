/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= var_7;
    var_11 = ((max(var_4, (var_4 % var_7))));
    var_12 = var_2;
    var_13 |= var_8;

    for (int i_0 = 2; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_14 = max(32752, 32758);
        arr_3 [i_0 - 1] |= var_1;
        var_15 += (((arr_2 [i_0 + 2] [i_0]) ? (var_3 && 1649557961) : var_5));
        arr_4 [i_0 + 2] [i_0 + 2] = ((((max((arr_1 [i_0 - 1]), (arr_1 [i_0 + 2])))) ? (((arr_1 [i_0 + 2]) ? (arr_1 [i_0 + 1]) : var_0)) : (max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1])))));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                {
                    arr_12 [i_2] [i_3 + 1] = ((min(((-15822 ? -32758 : 4294967295)), var_5)));
                    var_16 = (max(395, 4294967295));
                }
            }
        }
        arr_13 [i_1 - 1] = (arr_10 [i_1]);
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 12;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4 - 1] = (((((arr_2 [i_4] [i_4 - 2]) != var_9)) ? -3180403986622560078 : 2782857041));
        arr_17 [i_4] = (((arr_2 [i_4 + 2] [i_4 - 1]) ? (arr_5 [i_4 + 2]) : ((32752 ? 0 : 63))));
        arr_18 [i_4] [i_4] = ((var_6 ? (arr_2 [i_4 - 1] [i_4]) : var_3));
    }
    #pragma endscop
}
