/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, 41652));
    var_13 = (max(var_13, ((((((var_1 ? var_8 : var_6))) && ((((18301086582177125070 < 15291) ? (max(var_11, var_3)) : var_0))))))));
    var_14 += (((111 ? var_0 : (min(var_9, var_2)))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                arr_7 [i_0 - 1] [i_1] [i_1] [i_2] = (max((((-((9223372036854775801 ? 41671 : -9223372036854775801))))), ((8188 ? (min(var_2, 1099511627775)) : (((var_0 ? (arr_4 [i_0] [i_1]) : 65518)))))));
                arr_8 [i_0 - 1] [i_1] [i_1] [i_1] = ((-(((arr_6 [i_0 - 1] [i_0 - 1]) - (arr_6 [i_0 - 1] [i_0 + 1])))));
                var_15 = ((!((min((~var_1), 913073899)))));
            }
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                arr_11 [i_0] [i_0] [i_0] [i_0] = ((~((((!var_8) != 21511)))));
                arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((((max(var_1, var_7))) ? ((~(((arr_1 [i_0 - 1] [i_0 - 1]) + 1)))) : var_0));
                arr_13 [i_0] [i_0] [i_0] = max(56760, 57340);
            }
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_16 = ((!((((4 ? var_2 : (arr_0 [i_0])))))));
                var_17 = ((((((max(var_4, var_1))) ? (((arr_5 [i_0 - 1] [3] [i_4] [i_1]) ? 603240675815355338 : 34908)) : var_2))) ? ((((min(603240675815355338, 62359))) ? 2084228374 : ((((arr_3 [i_0 - 1] [i_1] [i_4]) ? var_6 : var_2))))) : 3);
            }
            arr_16 [i_0 + 1] [i_0 - 1] [i_1] = ((-(arr_1 [i_0 - 1] [i_0 - 1])));
            arr_17 [i_1] = (arr_1 [i_0 - 1] [i_0 - 1]);
        }
        arr_18 [i_0] = ((!(((var_7 ? var_4 : (arr_0 [i_0 + 1]))))));
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
    {
        arr_21 [i_5] [i_5] = (((((var_3 ? (arr_20 [i_5]) : var_1))) ? ((var_4 ? 23872 : (arr_20 [i_5]))) : (arr_20 [i_5])));
        var_18 = ((~((var_4 ? var_6 : ((66 ? 57366 : 634093737824244511))))));
        var_19 += ((((var_10 ? 8188 : var_8)) == (((var_2 ? var_1 : -31938)))));
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
    {
        arr_24 [i_6] = var_4;
        arr_25 [i_6] = (((arr_19 [i_6]) ? (arr_19 [i_6]) : (1656050185046939183 || -16162711)));
        arr_26 [i_6] [i_6] = ((!(((4547324923593010540 ? 4294967292 : 30963)))));
        arr_27 [i_6] = ((4547324923593010540 ? var_10 : ((~((var_8 ? var_1 : 1))))));
    }
    #pragma endscop
}
