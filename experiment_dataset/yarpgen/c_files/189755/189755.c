/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [0] [i_0] &= (~((47087 ? 649440317 : 1672796548)));
        arr_4 [i_0] = (((41474 + -649440324) * (255 && 43756)));
    }
    for (int i_1 = 4; i_1 < 19;i_1 += 1)
    {
        var_17 = (((((arr_7 [i_1 - 3]) ? ((1471056131 ? 8 : 649440319)) : (min((arr_0 [i_1] [i_1]), 13698009415951534723)))) == ((max(((min(22, 255))), -var_7)))));
        arr_8 [i_1] = var_4;
    }

    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        var_18 = (((((arr_5 [i_2 + 3]) ? (arr_5 [i_2 - 1]) : (arr_6 [i_2 - 1])))) ? 18205102 : (min((((var_9 | (arr_1 [i_2] [i_2 + 2])))), (((arr_1 [i_2] [i_2]) ? 18446744073709551615 : 1)))));
        var_19 -= ((max((min((arr_11 [i_2]), 252)), (649440336 || -1))));
        arr_12 [i_2] |= (arr_0 [i_2] [8]);
        var_20 -= (arr_1 [i_2 + 2] [i_2]);
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 14;i_3 += 1)
    {
        arr_16 [i_3] = (arr_10 [i_3]);
        var_21 -= (arr_15 [i_3 + 1]);
        var_22 = ((-(arr_10 [i_3 - 2])));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 12;i_4 += 1)
    {
        arr_20 [i_4] = (((arr_13 [i_4 - 1]) - (arr_13 [i_4 - 1])));
        arr_21 [i_4] [i_4] = (-(((arr_19 [i_4 + 1] [i_4 + 1]) ? var_2 : 830060446)));
        var_23 = (arr_2 [i_4 + 2]);
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        arr_26 [13] = (arr_25 [i_5] [i_5]);
        var_24 = ((((~(~var_15))) > 7502666465828969753));
    }
    #pragma endscop
}
