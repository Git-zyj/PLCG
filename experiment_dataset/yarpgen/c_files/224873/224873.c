/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((((max((min(var_13, var_12)), ((max(var_1, var_10)))))) ? (((!(((var_4 ? var_3 : var_6)))))) : (min((min(var_8, var_5)), ((var_7 ? var_3 : var_12)))))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (min(((min((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))), (((!(arr_1 [i_0]))))))), (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        var_15 -= (max((max(((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))), (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))))), (max(((((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))), (min((arr_1 [i_0]), (arr_1 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_16 ^= (max((((arr_4 [i_1]) ? ((min((arr_5 [i_1]), (arr_3 [i_1])))) : (arr_4 [i_1]))), ((max((min((arr_4 [i_1]), (arr_5 [i_1]))), ((min(-256, -45))))))));
        arr_6 [i_1] = ((((min((arr_3 [i_1]), (((arr_5 [i_1]) ? (arr_4 [i_1]) : (arr_3 [i_1])))))) ? ((min((arr_5 [i_1]), (arr_4 [i_1])))) : (min((arr_4 [i_1]), ((81 ? 1 : 491520))))));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        var_17 = (max(var_17, ((min(((-(arr_7 [i_2]))), (min((min((arr_7 [i_2]), (arr_8 [i_2]))), (arr_7 [i_2]))))))));
        var_18 = (min(((min((min(20, 72)), (max(20, 20))))), ((((min((arr_8 [i_2]), (arr_3 [i_2])))) ? (arr_8 [i_2]) : (min(35184372072448, 56047150))))));
    }
    var_19 -= ((((((((var_11 ? var_7 : var_5))) ? ((var_2 ? var_1 : var_6)) : var_7))) ? (~2147483628) : (min(((128 ? 20 : 4294967295)), (max(var_1, var_3))))));
    #pragma endscop
}
