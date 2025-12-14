/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((var_0 != var_5) || var_1)) ? (72057593769492480 && -1428304523) : ((var_11 << (var_6 + 41)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = var_1;
                    var_15 = (((((arr_5 [i_0 + 4] [i_0 + 4]) ? var_2 : ((var_8 ? (arr_2 [i_0]) : (arr_0 [i_0] [5])))))) ? ((min(var_2, (arr_8 [0] [i_0 + 3] [i_0] [i_0 + 3])))) : (((arr_5 [i_0 + 1] [i_0 - 1]) ? (arr_5 [i_0 - 1] [i_0 + 1]) : var_5)));

                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        arr_11 [i_3] [i_2] [i_1] [i_3] |= ((var_1 >> (var_6 + 62)));
                        var_16 = ((var_8 ? (arr_7 [i_1] [i_3] [i_3 - 1]) : ((((31 ? -21 : 860104285)) >> var_1))));
                        var_17 = ((var_0 == (arr_4 [i_1])));
                        var_18 = var_1;

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_19 &= (max((min((var_1 >= var_11), (max(var_6, (arr_3 [i_0] [i_1]))))), (((((min(var_0, var_1))) * (var_7 > var_5))))));
                            var_20 = (min((((arr_12 [i_3] [i_3] [i_3] [i_3 + 1] [9]) & var_11)), ((((arr_12 [i_1] [i_2] [i_3] [i_3 + 1] [i_3]) ? (arr_12 [i_3] [i_3 - 4] [i_3] [i_3 + 1] [i_3]) : (arr_12 [4] [4] [i_1] [i_3 + 1] [i_3]))))));
                            var_21 += (((((arr_0 [i_0 + 4] [i_3 + 1]) ? (arr_0 [13] [i_3 - 3]) : var_11)) * (arr_10 [i_4] [i_3] [i_2] [i_3] [20])));
                            var_22 -= (((var_7 ? var_12 : ((var_9 ? var_6 : var_10)))));
                            var_23 = var_9;
                        }
                        for (int i_5 = 3; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            var_24 = (min(var_24, (arr_2 [i_2])));
                            var_25 = (max(var_7, var_5));
                            var_26 = (((var_12 >= var_4) ? ((min(var_6, (arr_2 [i_0])))) : (((var_8 ? var_10 : var_0)))));
                        }
                        for (int i_6 = 3; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            var_27 = (min(var_27, (((((min((arr_5 [i_0] [i_0]), (arr_10 [i_0] [i_3] [i_0 + 4] [i_0 + 3] [i_0])))) ? ((var_8 ? var_12 : (arr_14 [i_1] [i_1] [i_2] [10] [i_6 - 1]))) : ((((arr_0 [i_1] [i_3]) ? var_1 : (arr_1 [i_3 - 2])))))))));
                            var_28 *= ((((((((arr_6 [i_0] [i_0] [i_6]) | (arr_12 [i_0] [i_1] [i_2] [i_3] [i_6]))) | (var_2 <= var_5)))) ? (((((min((arr_6 [i_0 + 4] [i_1] [i_0 + 4]), (arr_6 [i_0 + 4] [i_0] [i_0])))) ? (arr_8 [i_3 - 3] [i_3 - 3] [i_3] [i_3]) : (arr_17 [1] [i_6] [19] [i_6] [i_6 - 2])))) : (((arr_20 [11] [i_1] [i_2] [i_3 - 1] [i_6]) ? -72057593769492486 : (((11 ? 1 : -96474401)))))));
                            arr_22 [13] [13] [i_0] = (~var_4);
                            var_29 = ((min(((var_7 << (((arr_4 [i_0]) - 1536)))), var_1)));
                        }
                    }
                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {
                        var_30 |= var_7;
                        var_31 = ((!((((((arr_8 [i_0] [i_1] [i_0] [11]) >= var_9)) ? ((var_12 ? (arr_4 [i_0]) : var_7)) : (arr_10 [i_1] [i_0] [i_1] [i_1] [19]))))));
                    }
                    var_32 += var_10;
                }
            }
        }
    }
    #pragma endscop
}
