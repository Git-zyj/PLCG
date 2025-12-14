/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    var_15 = var_7;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [7] = ((-9 ? 1 : 25244));
        var_16 = (((((~(((!(arr_1 [i_0]))))))) ? ((-(~-1162276730))) : ((-((var_10 ? -925370199 : var_2))))));
        arr_4 [i_0] [12] = ((~(!var_8)));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_17 = ((-(((arr_8 [i_1] [i_1]) ? (arr_6 [i_1] [i_1]) : (arr_8 [i_1] [i_1])))));
        arr_9 [i_1] = ((+(((arr_8 [i_1] [i_1]) ? -4358629703802762463 : -3571417682705348823))));
        arr_10 [i_1] = ((!(((-1960389865 ? 14194397376307839259 : (arr_6 [i_1] [i_1]))))));

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_18 = ((-(((arr_6 [i_2] [i_1]) ? ((var_5 ? var_12 : 65535)) : (arr_5 [i_1] [i_1])))));
            arr_14 [i_2] [i_2] [23] = (((!1) ? ((((~480669920) ? ((0 ? 1 : (arr_13 [i_1] [20]))) : ((1 ? var_5 : var_8))))) : (~var_4)));
        }
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        arr_19 [i_3] [i_3] = ((+(((((-3531037828460393530 ? (arr_18 [i_3]) : var_8))) ? (((!(arr_15 [i_3] [i_3])))) : ((11762 ? (arr_7 [i_3]) : 289903765))))));
        arr_20 [i_3] = ((~(!var_1)));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
    {
        arr_24 [i_4] = (((~11) ? (((1840036690 ? ((var_11 ? -25232 : var_11)) : (((!(arr_11 [8] [8] [i_4]))))))) : ((625440304348124040 ? (((1 ? 33553920 : (arr_6 [i_4] [i_4])))) : (arr_21 [3])))));
        var_19 = (min(var_19, (((((!(arr_23 [i_4]))) ? (~917504) : (((~((var_2 ? 1901827814 : var_0))))))))));
        arr_25 [i_4] = ((((((6167745476267828094 ? var_4 : (arr_17 [2]))) ? var_3 : ((-1309119706 ? (arr_6 [i_4] [i_4]) : (arr_12 [i_4])))))));
    }
    #pragma endscop
}
