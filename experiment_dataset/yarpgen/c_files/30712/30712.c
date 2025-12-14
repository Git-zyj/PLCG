/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [14] |= ((!(arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_21 = ((min(((min((arr_1 [i_1]), (arr_5 [4] [i_1] [4])))), (min(var_3, (arr_0 [i_0]))))));
            arr_6 [15] = var_4;
            arr_7 [i_0] [3] [i_1] = var_8;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_14 [i_0] [7] [7] [i_3] |= 238759790;
                        var_22 = var_7;
                    }
                }
            }
        }
        for (int i_4 = 2; i_4 < 15;i_4 += 1) /* same iter space */
        {
            var_23 = ((((min(-17404223, 6736880734444113208))) ? ((((arr_3 [i_4 - 1] [i_4 - 2]) != (arr_3 [i_4 - 1] [i_4 - 2])))) : (((1349213049 < (arr_3 [i_4 - 2] [i_4 - 2]))))));
            var_24 -= var_0;
            var_25 = (((arr_3 [i_4 - 2] [i_4 + 1]) >> (1349213043 - 1349213022)));
            arr_17 [i_4] = ((((((((arr_16 [i_0]) << (((arr_3 [12] [12]) - 7714609016399422305)))) < (min((arr_15 [15]), 21051))))) >> (((((arr_11 [1] [i_4 + 1] [i_4] [i_4 - 1]) ? (arr_9 [i_0] [i_4 + 1]) : var_0)) - 28059))));
        }
        for (int i_5 = 2; i_5 < 15;i_5 += 1) /* same iter space */
        {
            var_26 = (((arr_13 [i_0] [i_0] [i_0] [i_0] [1] [i_5]) ? ((max((arr_1 [i_5 + 1]), (arr_18 [6] [6] [i_5])))) : 1013299383407825676));
            var_27 = (+((var_11 ? (arr_19 [i_0] [i_5 - 2]) : (arr_15 [i_0]))));
        }
        var_28 = (max(var_28, (~19)));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
    {
        var_29 = (((arr_19 [i_6] [i_6]) < (arr_5 [i_6] [8] [i_6])));
        var_30 = ((var_5 ? (arr_9 [i_6] [i_6]) : (arr_9 [i_6] [i_6])));
        arr_23 [0] = arr_19 [i_6] [12];
        var_31 = (min(var_31, (((!((!(arr_21 [i_6]))))))));
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
    {
        var_32 = (arr_25 [i_7] [i_7]);
        arr_28 [5] = (((((max((arr_8 [i_7] [i_7] [i_7] [i_7]), (arr_16 [11]))) != (arr_15 [i_7]))) ? (min((max(var_12, 1753558995)), (-23927 != var_12))) : (var_16 && var_8)));
        var_33 = (min(var_33, ((max((arr_3 [11] [6]), ((((arr_1 [i_7]) ? -4531 : (arr_15 [i_7])))))))));
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
    {
        var_34 = ((((!(var_6 == -11)))));
        arr_32 [i_8] = ((((min(var_5, (arr_11 [i_8] [15] [9] [i_8]))))) ? ((((arr_22 [i_8] [i_8]) ? (arr_22 [i_8] [i_8]) : 21072))) : ((((arr_13 [i_8] [i_8] [i_8] [8] [i_8] [i_8]) ? var_7 : (-9223372036854775807 - 1)))));
    }
    var_35 = (min((min(var_10, -1013299383407825676)), var_0));
    #pragma endscop
}
