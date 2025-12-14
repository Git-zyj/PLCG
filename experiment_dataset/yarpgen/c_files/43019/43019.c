/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((var_8 % var_5), ((var_11 ? -var_1 : (var_5 / var_7)))));
    var_18 = ((min(((var_13 ? var_14 : 1), var_11))));
    var_19 = (min(var_19, (((var_11 * (min(((1 ? var_4 : var_16)), ((4294967286 >> (var_8 - 4153585684))))))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_0] [13] [i_1] = var_4;
                var_20 = (((1 < (arr_4 [1] [i_0 + 4] [i_1]))) || ((min((min((arr_4 [i_0] [14] [i_1]), var_13)), (((1 || (arr_3 [i_1]))))))));
                arr_8 [i_1] |= ((0 ? ((((1 < var_0) % ((max((arr_5 [i_0] [i_1]), var_13)))))) : ((((min(1, 6781601737808162907))) ? (var_12 - var_11) : ((((arr_0 [i_0]) ? -160723894 : var_5)))))));
                var_21 += ((((((3 + var_3) & (arr_3 [i_1])))) ? (min((-160723894 + 6781601737808162901), (~63))) : ((max(((-4 & (arr_2 [i_1] [i_0 + 2]))), (arr_2 [10] [i_0]))))));

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_22 = 160723912;
                        var_23 = 1750;
                    }
                    arr_15 [i_2] = (((((arr_0 [i_2 + 2]) + 2147483647)) >> (((!(arr_4 [i_0 - 2] [i_0 - 2] [i_2]))))));
                    var_24 |= ((((arr_5 [i_0] [i_1]) ? (var_12 * 2992676282) : var_3)));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_25 = (min(var_25, (~109)));
                    arr_18 [i_0] [i_1] [i_0] = (1 ? (!-6781601737808162901) : var_3);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 6;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 9;i_7 += 1)
            {
                {
                    var_26 = var_0;
                    var_27 = (~3539823316308688220);
                    arr_26 [i_6] [i_6] [6] = (arr_24 [i_5]);
                }
            }
        }
    }
    #pragma endscop
}
