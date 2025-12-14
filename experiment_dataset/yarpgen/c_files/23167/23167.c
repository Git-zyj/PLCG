/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (min((arr_0 [i_0] [i_0]), (((arr_0 [i_0] [i_0]) ? var_5 : (arr_0 [i_0] [i_0])))));
        var_19 = (min(((-184637763381369271 | (arr_0 [i_0] [i_0]))), 67484671));
        arr_4 [i_0] = (arr_2 [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_20 = ((var_3 ? (((!(arr_5 [i_1])))) : ((((arr_7 [i_1] [i_1]) && var_14)))));
        var_21 = (min(var_21, (((((arr_1 [i_1] [i_1]) > ((1 ? (arr_1 [17] [i_1]) : var_3)))) ? ((((!(arr_1 [6] [i_1]))) ? (min(1, var_7)) : (arr_6 [i_1] [i_1]))) : ((((var_8 & 184637763381369254) ? ((0 | (arr_7 [i_1] [i_1]))) : ((~(arr_2 [i_1]))))))))));
        var_22 = (((((arr_0 [9] [9]) ? (arr_0 [i_1] [i_1]) : ((var_7 ? (arr_7 [i_1] [2]) : var_7)))) * ((((arr_2 [i_1]) ? (arr_2 [i_1]) : (arr_2 [i_1]))))));
        var_23 = (min(var_23, ((((arr_7 [i_1] [12]) * (((arr_0 [i_1] [i_1]) * (arr_7 [i_1] [i_1]))))))));
    }
    var_24 = (min(var_24, (((var_3 + 2147483647) >> (((((min(var_7, 0))) || ((max(1, var_18))))))))));
    var_25 = (((((((min(var_5, -97179482))) ? (var_13 - var_13) : var_5))) ? ((((var_2 ? var_0 : var_12)))) : (((((var_16 ? 184637763381369270 : 4184232375346976040))) ? var_11 : ((var_3 ? 1 : var_8))))));
    var_26 = ((-(((-106 + 4037) | ((5202 ? var_1 : var_0))))));
    #pragma endscop
}
