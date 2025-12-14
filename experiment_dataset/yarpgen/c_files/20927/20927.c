/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_0 ? var_8 : var_9)) % var_8)));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [5] = (((arr_1 [i_0 + 2] [i_0 - 2]) ? 10767051592612393210 : var_7));
        arr_3 [i_0] = (-9223372036854775807 - 1);
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((12988946028016431123 ? -9223372036854775796 : 0));
        arr_7 [i_1] = (((((((max(var_3, (-2147483647 - 1)))) ? (~0) : (arr_4 [i_1 - 1] [i_1 - 1])))) ? ((((max(23, 1414807924))) ? (arr_5 [i_1]) : var_2)) : ((max((arr_4 [i_1] [i_1]), ((-9223372036854775795 ? (arr_4 [i_1 + 1] [i_1]) : (arr_4 [i_1] [i_1 - 2]))))))));
        var_11 &= (max((-24949 % var_3), ((-9223372036854775807 ? var_2 : (((var_3 || (arr_4 [i_1 - 2] [i_1]))))))));
    }
    var_12 = (max(((255 ? var_0 : 234)), ((max((!9223372036854775794), var_7)))));
    #pragma endscop
}
