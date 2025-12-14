/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_11 = (max((((!(-32767 - 1)))), (arr_1 [i_0 - 1] [i_0])));
        arr_3 [1] [i_0 - 2] &= min(((max((~var_0), -65535))), (8 / var_3));
        var_12 = (min(var_8, (max((((var_7 > (arr_0 [i_0] [i_0])))), (arr_1 [i_0 - 1] [i_0])))));
        arr_4 [i_0] = (i_0 % 2 == 0) ? ((+((~((27 >> (((arr_0 [i_0] [i_0]) + 7719193115537079863)))))))) : ((+((~((27 >> (((((arr_0 [i_0] [i_0]) - 7719193115537079863)) - 1197146099860546836))))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                arr_12 [i_1] [i_1] = (arr_7 [i_1] [i_1] [i_1]);
                arr_13 [i_3] = ((((var_4 ? (arr_6 [i_2]) : var_6)) - (((-(arr_8 [i_1] [i_2]))))));
            }
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                arr_18 [i_1] [i_4] [i_4] = -1;
                var_13 = (min(var_13, ((((((((arr_17 [2] [i_2] [i_1] [i_2]) ^ (arr_11 [i_1] [i_2] [i_4])))) ? (arr_8 [i_4] [i_2]) : (!22)))))));
                var_14 = (min(var_14, ((((arr_14 [i_2] [i_2] [i_4]) ? (((arr_8 [i_1] [i_2]) ? (arr_8 [i_1] [i_2]) : (arr_9 [i_1] [i_1]))) : var_7)))));
            }
            var_15 = (((((-(arr_7 [i_1] [i_1] [i_2])))) ? (!var_9) : (var_5 == var_6)));
            var_16 = (((((min(((min((arr_16 [i_2] [i_1] [i_1] [i_1]), (arr_14 [i_1] [i_2] [i_2])))), (arr_5 [i_2]))))) >= 4294967275));
        }
        /* vectorizable */
        for (int i_5 = 3; i_5 < 17;i_5 += 1)
        {
            var_17 += (((arr_5 [i_5 - 1]) ? (arr_16 [i_1] [i_1] [i_1] [i_1]) : (((arr_16 [i_1] [i_1] [i_5] [i_5]) ? var_6 : var_4))));
            arr_22 [i_1] [i_5] [i_5 - 3] = ((-((255 ? var_0 : -1209806957))));
            arr_23 [i_1] [1] = arr_11 [i_5] [i_5 + 2] [i_1];
            arr_24 [i_1] = (arr_19 [8] [i_5 + 1] [i_5]);
            arr_25 [i_1] [i_5] = ((-(arr_8 [i_1] [i_5 + 3])));
        }
        arr_26 [i_1] = ((((min((arr_6 [i_1]), (arr_20 [i_1] [i_1])))) ? (((arr_20 [i_1] [i_1]) ? (arr_20 [i_1] [i_1]) : (arr_20 [i_1] [i_1]))) : (arr_20 [i_1] [i_1])));
        arr_27 [i_1] = ((var_1 ? ((((arr_7 [i_1] [i_1] [i_1]) == (arr_7 [2] [i_1] [i_1])))) : (((((arr_17 [i_1] [i_1] [i_1] [i_1]) <= (arr_20 [i_1] [i_1])))))));
        var_18 *= ((((((var_1 >> (var_7 - 281075916))))) ? ((+(((arr_21 [i_1] [i_1] [i_1]) & var_0)))) : ((~(arr_11 [i_1] [i_1] [i_1])))));
        arr_28 [i_1] [i_1] = (~0);
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
    {
        var_19 = (max(var_19, var_9));
        arr_32 [i_6] [12] = ((arr_19 [i_6] [12] [i_6]) ? ((((9565 > ((max(var_4, (arr_7 [i_6] [i_6] [i_6])))))))) : 4294967292);
    }
    var_20 = var_4;
    var_21 = (min(var_21, var_3));
    #pragma endscop
}
