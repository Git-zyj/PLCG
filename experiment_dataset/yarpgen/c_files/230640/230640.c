/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_10 = (arr_0 [i_0]);
        arr_4 [i_0] [i_0] = (arr_0 [i_0]);
        var_11 -= (((arr_2 [i_0] [i_0]) ? 1 : (arr_2 [i_0] [i_0])));
        arr_5 [0] [i_0] = 62;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_12 ^= 0;

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_13 = (max(var_13, (((arr_1 [i_1]) ? ((max(51501, 3807381574662251439))) : 18446744073709551597))));
            var_14 = (max(var_14, (0 && 5394)));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            arr_14 [i_1] [i_1] = (((!1) ? ((((arr_0 [i_3]) % (arr_8 [i_1] [i_1])))) : (arr_0 [i_1])));
            var_15 = (max(var_15, ((min((arr_9 [i_1] [i_1] [i_1]), (((-(arr_2 [i_1] [i_3])))))))));
            arr_15 [i_1] [i_1] = 1;
        }
        var_16 = (min(((var_9 ? 18446744073709551615 : (arr_13 [i_1] [7] [i_1]))), (min(var_5, (arr_13 [i_1] [i_1] [i_1])))));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        var_17 = (((arr_12 [22]) ? ((var_6 ? 0 : ((((arr_17 [i_4]) && 14))))) : (((arr_1 [i_4]) ? (arr_1 [i_4]) : (arr_1 [i_4])))));
        var_18 = (arr_10 [i_4] [i_4] [i_4]);
        var_19 *= ((+(((arr_16 [i_4]) + (arr_6 [i_4])))));
        var_20 = (max(var_20, (((18446744073709551613 - (((18446744073709551615 ? var_1 : (!1)))))))));
        var_21 = (max(var_21, ((((~(!115)))))));
    }
    var_22 = (((((~(~82)))) ? (((var_8 ? 14035 : 1))) : ((3731330963 ? (-265707853153131513 > var_8) : var_8))));
    #pragma endscop
}
