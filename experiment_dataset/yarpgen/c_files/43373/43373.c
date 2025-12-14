/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-(max(((var_0 ? var_16 : 7)), (var_17 / 7637878451678869700)))));
    var_19 = (((((var_14 ? var_9 : 59914))) ? 3920 : (min((var_10 / 5606), ((11577468873453921446 ? 59914 : var_4))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (arr_1 [i_0]);
        arr_4 [i_0] = ((((max(var_14, var_10))) ? 1587 : ((((max((arr_0 [i_0]), (arr_1 [10])))) ? (max((arr_2 [i_0] [i_0]), (arr_0 [i_0]))) : (((min((arr_2 [i_0] [i_0]), -1588))))))));
        arr_5 [i_0] = (max(var_6, ((30559 ? ((min(var_17, var_9))) : (var_4 < -1588)))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_10 [i_1] = ((((-(min((arr_0 [i_1]), 1606)))) == ((max(var_1, (((~(arr_1 [i_1])))))))));
        arr_11 [i_1] [i_1] = (max(((((var_13 / var_13) >> ((((-8349250542255242208 ? (arr_2 [i_1] [20]) : 53086)) - 109))))), ((-(min((arr_0 [3]), -1588))))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_15 [12] = ((min((arr_8 [i_2]), (arr_8 [i_2]))) / (((max(1597, var_7)))));
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_27 [i_6 + 1] [i_3 - 2] [i_4] [i_2] [i_6] [i_5] = 9531612138907862213;
                                arr_28 [i_2] [1] [20] [i_4] [i_2] [i_6 - 1] [i_6] = ((max(var_7, 59914)));
                            }
                        }
                    }
                    arr_29 [i_4] [i_3] [i_2] = ((arr_20 [i_2] [i_3] [i_3] [19]) ? (((arr_18 [i_4] [i_3]) ? ((34976 ? var_2 : var_2)) : (((max(59910, var_13)))))) : (((-(((arr_2 [i_4] [i_2]) - (arr_1 [i_2])))))));
                    arr_30 [i_3] [i_3] [0] = ((((max(var_12, 35252))) ? ((var_9 ? (arr_20 [i_3] [i_3] [i_3 - 1] [i_3 + 1]) : (arr_21 [i_3 - 2] [i_2] [0] [i_3 + 1]))) : (~14269066548047796245)));
                    arr_31 [i_2] [i_3] = (((((max(15, var_7))) / (139 > var_2))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                arr_37 [8] [i_7] [11] [i_3] [11] [i_2] = (((min((var_9 || -610340763626323052), (((arr_14 [i_3]) ? -610340763626323052 : var_11)))) < ((((!(var_5 > 9531612138907862232)))))));
                                arr_38 [i_8] [i_7] [i_4] [i_3] [i_3 - 2] [i_2] [i_2] = (((~1587) < ((30554 ? 8761925287276940280 : -2748868028556507898))));
                                arr_39 [i_8] [13] [i_4] [i_3] [i_3 + 1] [i_2] [i_2] = ((!(((((min((arr_18 [6] [0]), 73))) ? 22 : ((~(arr_13 [i_2] [i_8]))))))));
                            }
                        }
                    }
                }
            }
        }
        arr_40 [i_2] = ((+((~(((arr_18 [i_2] [i_2]) ? var_14 : var_5))))));
    }
    var_20 = (((min(var_4, var_14)) >> (5541308521691691747 + 901301537)));
    #pragma endscop
}
