/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = max(var_3, (((min(var_6, -32)))));
    var_19 &= var_0;

    for (int i_0 = 4; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_20 = var_17;

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_4 [i_0] = ((var_14 ? (((min((arr_3 [i_0] [i_1] [i_1]), var_12)))) : ((-(((arr_1 [i_0] [i_1]) ? var_13 : 10416712301197656907))))));
            var_21 = (max(((((arr_0 [i_1]) - (arr_3 [i_0] [11] [i_0 - 4])))), (max(1, (!1)))));
            arr_5 [5] [i_0] [i_0] = var_3;
            arr_6 [1] [3] [i_0] = ((min((((arr_1 [i_0] [i_1]) ^ 248)), 11)));
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_22 |= arr_2 [i_0 + 2] [i_2] [1];
            var_23 = 1152772126;
        }
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            var_24 = ((-(arr_7 [i_0])));
            var_25 = ((18446744073709551615 ? -1 : -3));
        }
    }
    for (int i_4 = 4; i_4 < 12;i_4 += 1) /* same iter space */
    {
        var_26 = (((((((arr_9 [i_4]) ? 74 : var_0)))) ? (((((var_13 ? (arr_13 [i_4]) : var_12))) ? var_0 : ((-8623209490748525018 ? 4007707347 : (arr_2 [i_4 - 3] [i_4] [i_4]))))) : 6443356766162751784));
        var_27 = (min(var_8, ((var_2 ? (arr_7 [i_4]) : (min((arr_10 [i_4] [i_4]), var_10))))));
    }
    for (int i_5 = 4; i_5 < 12;i_5 += 1) /* same iter space */
    {
        var_28 = (max(((1 ? ((min(15, 3423782877))) : 7317092041891207473)), 1));
        var_29 *= ((~(min(2281872304, 1))));
    }
    #pragma endscop
}
