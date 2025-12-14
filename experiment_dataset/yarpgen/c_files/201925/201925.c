/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = (((arr_2 [i_0]) ? (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) : ((((arr_3 [i_0] [i_0]) ? ((-7739587202772044790 ? (arr_3 [i_0] [7]) : 56)) : (arr_3 [i_0] [22]))))));
        var_15 = (min((arr_0 [i_0] [i_0]), (arr_3 [19] [i_0])));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    var_16 = (max(var_16, (((-(arr_9 [4] [4]))))));
                    var_17 = (max(((min((arr_7 [i_1] [i_1 + 1]), (arr_10 [i_1 + 1] [i_1 + 1] [i_1] [1])))), (max(32915932, 0))));
                }
            }
        }
        var_18 = (((!(arr_12 [i_1]))));
        arr_13 [i_1] = (arr_5 [i_1]);
        var_19 |= (-56 ? -96 : -1631298385);
    }
    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 14;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_20 = (max(var_20, ((((((0 ? 28875 : 60066135967295212))) ? (((~((3139533462 ? 36664 : -45))))) : (((arr_20 [i_6 + 1] [i_4 + 2]) ? 152 : (max(0, 1)))))))));
                                var_21 = ((((max(0, 96))) || ((max(0, 29665)))));
                            }
                        }
                    }
                    var_22 += (max(((min((((!(arr_16 [i_6] [i_5])))), -57))), ((((-3 ? (arr_16 [i_5] [i_4]) : 36660)) + (((!(arr_16 [i_4] [i_4]))))))));
                }
            }
        }
        arr_28 [i_4 + 3] = ((((((((9223372036854775807 ? -2330357171483939636 : (arr_26 [i_4] [i_4] [i_4])))) ? (max(var_10, (arr_19 [i_4]))) : (((18446744073709551613 ? (arr_27 [9] [i_4] [i_4] [i_4] [i_4] [9]) : 119)))))) ? ((12249415335007032011 ? -1668763366758168672 : -83)) : -72));
        arr_29 [14] [i_4 + 2] = (arr_18 [2] [2]);
    }
    var_23 = 127;
    #pragma endscop
}
