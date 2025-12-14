/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [5] = (353000828 != 4149585185942599359);
        var_12 += (min(((((arr_0 [13]) ? (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (arr_2 [i_0] [i_0])))), (max(var_5, var_5))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] = (((min(((var_7 | (arr_4 [i_1]))), (~var_10))) % ((((((arr_5 [i_1]) == var_3)) ? var_0 : (((arr_5 [i_1]) ? (arr_2 [i_1] [i_1]) : var_7)))))));
        var_13 = var_9;
        arr_7 [i_1] = (-((max(61, (arr_1 [6])))));
    }
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        var_14 = (max((((!(((-(arr_0 [i_2]))))))), (max((max(var_0, var_0)), var_10))));
        var_15 = (~((((arr_1 [i_2 + 1]) > (arr_1 [i_2 + 2])))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_16 = (min((arr_13 [i_2] [i_5]), ((((max(var_6, (arr_9 [i_2])))) ? (arr_2 [9] [i_2 - 1]) : (arr_2 [1] [i_3])))));

                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            arr_20 [i_2] [0] [i_3] [i_2] = (((((arr_16 [i_2] [i_2]) && var_6)) && ((min((var_5 == var_11), ((var_1 ? var_3 : var_3)))))));
                            var_17 -= (~((+(min((arr_15 [i_2] [i_3] [i_4] [i_4] [i_2] [i_6]), var_6)))));
                            var_18 -= (var_3 || -var_11);
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_19 = var_3;
                            var_20 *= (max(((+(min((arr_1 [i_2 + 2]), (arr_14 [i_2 + 2] [i_2 + 2] [i_5] [i_5]))))), (((var_3 && (arr_18 [i_2] [i_2] [i_2 + 1] [i_5] [i_2] [i_2 + 1] [i_2]))))));
                            arr_23 [i_5] [i_2] [i_2] [i_2] = ((max(var_5, var_4)));
                            var_21 |= var_8;
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            var_22 = (arr_16 [i_2] [i_2]);
                            var_23 = (max(var_23, (((!(((arr_17 [i_4] [i_3] [i_5] [i_8]) <= (arr_2 [i_3] [i_3]))))))));
                            arr_26 [i_2] [i_3] [i_4] [i_5] [i_8] = (((((arr_13 [i_2] [i_8]) ? var_7 : (arr_10 [i_2 + 2] [i_3] [i_5]))) + (arr_17 [i_2] [i_3] [i_5] [9])));
                            arr_27 [i_4] [i_2] [i_4] [i_4] [i_2] [i_2] = ((~((var_11 ? (arr_18 [i_2] [i_4] [i_4] [i_2] [i_4] [i_3] [7]) : (arr_8 [1] [i_2])))));
                            arr_28 [12] [i_4] [12] [1] [i_4] [0] &= (((((var_0 * (arr_17 [i_4] [8] [i_5] [i_8])))) ? (arr_18 [i_2] [i_2] [i_5] [i_5] [i_4] [i_5] [i_5]) : (arr_2 [i_3] [i_8])));
                        }
                    }
                    var_24 = ((((max((min((arr_5 [i_2]), var_9)), var_9))) & (max((max((arr_9 [i_2]), var_5)), (((-(arr_25 [i_4] [i_2] [i_3] [i_2] [i_2]))))))));
                    var_25 = (!((((max(var_2, var_9)) - ((max((arr_19 [i_4] [i_3] [i_2] [i_3] [i_2]), var_11)))))));
                    var_26 = 40473;
                }
            }
        }
    }
    var_27 = ((((min(var_11, var_1))) ? var_10 : (max((max(var_1, var_2)), (max(25063, 144984787494738993))))));
    var_28 += ((-(30 / 1626545354)));
    var_29 = var_8;
    #pragma endscop
}
