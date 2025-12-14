/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (var_0 ^ var_2)));
    var_17 += var_7;
    var_18 = var_11;
    var_19 = (max(var_19, ((min(var_8, (((var_4 ? var_0 : ((8284917124579731952 ? var_9 : 8830))))))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((min(var_10, var_14)))) ? ((max((arr_2 [i_0]), (arr_2 [i_0])))) : var_7));
        arr_4 [i_0] [i_0] = (min((((4664094556040734881 ? ((var_4 ? (arr_0 [i_0] [i_0]) : 126)) : ((max(var_2, 1)))))), (((!-8651739179078779359) - 451108058))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_20 = (arr_6 [i_1]);
        var_21 += ((((51 != ((1347267558 ? (arr_1 [i_1] [i_1]) : var_8)))) ? (((((var_10 ? 1347267570 : (arr_6 [i_1])))) ? (!var_11) : ((-67 ? var_4 : (arr_0 [i_1] [i_1]))))) : (((((var_5 ? 0 : var_0))) ^ -8284917124579731970))));
        var_22 = (-1333116458 / 1039151439);
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_23 = (max(8830, 18235));
        var_24 = (min(var_24, (arr_5 [i_2])));
        var_25 = (min(var_25, ((((((22042 & (((arr_5 [4]) / -2526))))) ? 18291029552549056112 : ((min(8284917124579731952, 0))))))));
        arr_9 [i_2] [i_2] = (((var_15 + -8651739179078779359) ^ (((((min(var_6, (arr_5 [i_2])))) ? (arr_8 [i_2]) : var_9)))));
    }
    #pragma endscop
}
