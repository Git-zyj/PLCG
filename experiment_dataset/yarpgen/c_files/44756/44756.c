/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 ^= 22619;
        var_21 = (max(2375364701, (-9223372036854775807 - 1)));
        arr_3 [i_0] |= 1919602626;
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_22 -= 63;

        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {
            arr_8 [i_1 + 1] [1] [i_2] = (arr_7 [10] [i_1]);
            arr_9 [i_1] [i_2] [i_2] = (((((1919602606 + ((min(var_18, var_2)))))) ? (arr_1 [6] [i_2]) : (arr_2 [i_1])));
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                var_23 = 4294967271;
                arr_15 [i_3] [i_4] [i_3] [i_1 + 1] = var_1;
                var_24 = (((((((-504890154 + (arr_1 [0] [i_3])))) ? 1 : (max(1, 4294967284))))) ? 4294967284 : 17487246049445160540);
            }
            var_25 = (min((arr_12 [i_1] [i_1] [i_3] [i_3]), (((-4086107418043399995 * 1) ? (min(var_15, 18446744073709551615)) : (arr_1 [i_1] [i_1])))));
            arr_16 [i_1] [i_1] [i_1] = (min(((9007199254740991 ? (min(4294967287, (arr_2 [i_1]))) : (((3 ? -23642 : 1))))), -23));
            var_26 = (((max(23642, (arr_10 [i_1] [i_1 + 1] [i_1 + 1])))));
            arr_17 [12] [12] [i_3] = ((+(max((arr_2 [i_1]), var_7))));
        }
        var_27 &= ((((max(var_14, var_13))) ? ((((arr_13 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1]) ? (arr_13 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1]) : (arr_13 [i_1 + 1] [i_1 + 1] [2] [i_1 + 1])))) : (arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])));
    }
    var_28 = (max(var_8, (max(1, ((-1 ? var_13 : var_4))))));
    #pragma endscop
}
