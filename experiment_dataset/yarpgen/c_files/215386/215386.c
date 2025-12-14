/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = (((((arr_0 [i_0]) << (-17281 + 17287))) < ((-40 ? var_6 : 65518))));
        var_16 += ((28672 ? var_3 : (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_1] = ((60 << (!var_1)));
            arr_6 [i_0] [i_1] = (((arr_2 [i_0] [i_0] [i_1]) / 2));
            arr_7 [i_0] = (((arr_3 [i_0] [i_1]) ? (arr_3 [i_0] [i_1]) : (arr_3 [i_0] [i_0])));
        }
        for (int i_2 = 3; i_2 < 21;i_2 += 1)
        {
            var_17 = (arr_4 [i_0] [i_0]);
            arr_11 [i_0] [i_2] = (var_13 ? (arr_3 [i_2 - 2] [i_2]) : (arr_3 [i_2 - 2] [i_2]));
        }
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            var_18 = (max(var_18, ((((43 != 536870400) ? (!var_14) : (31 || var_5))))));
            arr_14 [i_3] [i_3] = (((arr_9 [i_0] [i_0] [i_3]) ? (((arr_1 [i_3] [i_3]) ? 26 : 1)) : var_8));
            var_19 = (((arr_12 [i_3] [i_3] [i_3]) ? var_6 : ((var_2 / (arr_3 [i_0] [i_3])))));
            arr_15 [i_3] [i_3] = ((~(arr_10 [i_0] [i_3] [i_0])));
            arr_16 [i_0] [i_3] = 36;
        }
        arr_17 [i_0] = (((arr_12 [i_0] [i_0] [i_0]) ? (arr_0 [i_0]) : -28673));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_20 = (arr_12 [i_4] [i_4] [i_4]);
        var_21 += (arr_18 [i_4]);
        arr_20 [i_4] = (((var_4 + 2147483647) << (((((-32767 - 1) + 32770)) - 1))));
    }
    var_22 = (((~var_14) <= (((((var_2 ? 32 : var_11))) ^ ((var_0 ? var_5 : 9223372036854775807))))));
    #pragma endscop
}
