/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = ((~(var_16 + var_4)));
        arr_2 [i_0] = 95;
        var_20 = (((arr_0 [i_0]) + var_9));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_21 = (max(var_21, ((((var_3 > (arr_5 [i_1 + 1])))))));
        var_22 = (((max((arr_3 [i_1]), var_2)) * ((~(~3921206459)))));
        var_23 = ((max((max(248, var_6), 2670390644690493796))));
        var_24 = ((~(max(var_14, (min(6064240650434311142, 373760837))))));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = ((((((arr_9 [i_2] [i_2]) ? (arr_9 [i_2] [i_2]) : (arr_9 [i_2] [i_2])))) ? -57 : ((-2644659865784236574 ? var_6 : (arr_1 [i_2] [i_2])))));
        var_25 *= ((1971605981 >> (3921206459 - 3921206428)));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            {
                arr_17 [i_3] = ((var_8 | (~18446744073709551615)));
                var_26 = (min(var_26, ((((arr_9 [i_3] [14]) ? -var_16 : (3921206458 | 18446744073709551615))))));
                arr_18 [7] [i_3] [i_3] = ((-(var_0 >= var_7)));
            }
        }
    }
    var_27 = (min(var_27, 7));
    #pragma endscop
}
