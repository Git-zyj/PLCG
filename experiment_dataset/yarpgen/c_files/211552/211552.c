/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_17 = (max(var_17, (((!(((+((1690532983 ? (arr_2 [i_0] [i_0 - 1]) : 32798))))))))));
        arr_3 [i_0] = ((((!(((0 ? 32726 : 32730))))) ? (max(((32737 ? (arr_2 [i_0 - 2] [i_0 - 2]) : (arr_2 [i_0] [i_0]))), (arr_1 [i_0 + 1]))) : (((arr_2 [i_0 + 1] [i_0 - 2]) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 1])))));
        arr_4 [i_0 - 2] [i_0 - 1] = (min(((((((arr_0 [i_0 - 1]) ? 402653184 : -59))) ? (((arr_0 [i_0]) ? 251 : (arr_0 [i_0]))) : (max(-6981, (arr_2 [i_0] [i_0]))))), -90));
        var_18 = (((arr_2 [i_0 - 2] [i_0 - 1]) ? (((arr_2 [i_0 - 2] [i_0 - 2]) ? -1394241043 : (arr_2 [i_0 - 1] [i_0 - 1]))) : (max((arr_2 [i_0 + 1] [i_0 - 1]), (arr_2 [i_0 - 1] [i_0 - 2])))));
    }
    var_19 = var_0;
    var_20 = ((var_11 ? (((var_6 && 32766) ? var_1 : var_9)) : (((var_1 ? var_4 : ((min(32737, var_1))))))));
    var_21 = (max((~-var_8), 3998853626052100374));
    #pragma endscop
}
