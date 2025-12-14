/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 57240;
    var_11 -= var_7;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((var_3 ? (arr_0 [i_0] [i_0]) : (max((arr_3 [i_0 - 2] [i_0 + 1]), (arr_3 [i_0 - 2] [i_0 + 1])))));
        var_12 = (((((((max(1, (arr_0 [i_0] [i_0]))))) * (((arr_3 [i_0] [i_0]) % var_1))))) ? (~var_7) : (arr_2 [i_0 + 1]));
        arr_5 [i_0 - 1] = (max(60, 4294967293));
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {
        arr_9 [i_1] = arr_6 [i_1];
        var_13 = (-(min(6, 247)));
        var_14 += (max((arr_7 [i_1]), ((13107396819686360634 ? (((arr_8 [i_1]) ^ 181)) : (((((arr_7 [i_1]) == (arr_6 [i_1])))))))));
        var_15 = ((1 * (((!(arr_7 [i_1 - 1]))))));
    }
    var_16 = (var_7 ? var_0 : ((min((!var_3), (!var_2)))));
    #pragma endscop
}
