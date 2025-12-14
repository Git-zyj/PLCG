/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_0;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            var_18 = (((arr_0 [i_1 + 1]) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 + 1])));
            arr_4 [i_1 + 1] [i_1] [i_0] = (((34 | (arr_0 [i_1]))));
        }
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            arr_7 [i_0] |= (((!33488896) ? ((3 ? 4620461201197710164 : var_2)) : (arr_1 [i_2 - 1] [i_0])));
            arr_8 [i_2] = 26;
            var_19 = (min(var_19, ((((arr_0 [i_0 + 3]) ? ((-33488911 ? (arr_5 [i_0] [i_0] [i_0]) : 33488910)) : 33488918)))));
            arr_9 [i_2] [i_2] = ((((var_11 >> (677102991 - 677102972))) & (65535 != 63603)));
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            arr_12 [13] = ((var_1 ? (-8483823485393406050 / var_14) : (819624355 / var_3)));
            var_20 = ((~((-(arr_2 [i_0] [i_0] [i_3])))));
            arr_13 [11] = (215 / 9816208304612756686);
            arr_14 [i_0] = (((var_11 == 33488910) >> (32767 - 32746)));
            var_21 = ((var_12 ? var_8 : var_7));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_18 [i_4] [i_4] [1] = (41 > -9816208304612756698);
            arr_19 [i_4] = ((2147483638 ? (!-2147483644) : (arr_0 [i_0])));
            arr_20 [i_4] = 4854395134791941485;
        }
        arr_21 [i_0] = (arr_5 [i_0 + 2] [6] [i_0]);
        arr_22 [i_0] = ((var_5 * (!var_7)));
        arr_23 [i_0] = arr_3 [i_0];
    }
    var_22 = -33488936;
    #pragma endscop
}
