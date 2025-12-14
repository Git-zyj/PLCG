/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((var_8 ? (~var_0) : 2147483617))) ? var_8 : (min(((var_5 ? -1897180883 : 9223372036854775807)), (~1023)))));
    var_14 = var_11;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((var_2 ? (min(-var_3, (arr_0 [i_0]))) : 1));
        arr_3 [i_0] = (min((((~var_1) ? var_2 : (arr_1 [i_0] [i_0]))), (arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_0] [6] = var_12;
                    var_15 -= ((-((~((646992593 ^ (arr_4 [6] [8])))))));
                    arr_9 [i_0] [i_1] [i_0] = ((23382 ? (max((!var_1), (-9223372036854775807 - 1))) : -2816748225051276709));
                }
            }
        }
        var_16 = -2147483625;
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 14;i_3 += 1)
    {
        arr_12 [i_3 - 2] = (arr_11 [i_3 - 2] [i_3 + 2]);
        var_17 = (min(var_17, (arr_10 [i_3] [i_3 - 3])));
        var_18 -= ((var_9 ? 63 : (arr_10 [i_3] [i_3 + 2])));
        arr_13 [i_3] = (!(4933012588136466305 || -11));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    var_19 = ((-23383 ? 4294967295 : 973805136));
                    var_20 = (arr_20 [i_4]);
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        var_21 = (max(var_21, (var_1 >= 9223372036854775782)));
        var_22 *= ((((max((1 >= var_7), 65534))) & ((-(arr_22 [i_6])))));
        var_23 = (max(var_23, ((((((!(((0 ? 1023 : var_5)))))) * (((-68 <= (arr_23 [i_6])))))))));
        arr_24 [i_6] = (max(-1, 60));
    }
    #pragma endscop
}
