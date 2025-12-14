/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 = (max(var_13, var_0));
        var_14 = (~2145386496);

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_15 -= (((arr_3 [i_1] [i_1] [i_1]) | var_6));
            var_16 -= ((2145386496 ? (arr_0 [i_0]) : 48));
            var_17 = var_9;
        }
        var_18 &= ((41110 << (((var_9 + 114) - 16))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_19 = ((~(arr_6 [i_2])));
        var_20 = (((!var_5) ? (-1 <= 2161314865) : (arr_2 [i_2] [i_2])));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_21 = (~(arr_4 [i_3] [i_3] [i_3]));
        var_22 = (1042715070 >= var_5);
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_23 = var_12;
        var_24 = 0;
        var_25 = (((var_12 > -3723567211818808746) ? 10514209000960687775 : ((((var_5 != (var_10 != 2161314865)))))));
    }
    var_26 = var_5;
    var_27 = var_5;
    #pragma endscop
}
