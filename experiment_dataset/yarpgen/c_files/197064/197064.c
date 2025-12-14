/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_14 += (min(2097152, 9223372036854775807));
        var_15 = (((max(((-4086 | (arr_2 [i_0 - 1]))), (max(1572864, var_12)))) << (((max(var_0, (arr_2 [i_0 - 1]))) - 1769188187))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_16 = ((((((-4 || (arr_5 [i_1] [17]))) && (arr_5 [8] [i_1]))) ? (min((((!(arr_4 [i_1])))), (((arr_5 [i_1] [i_1]) ? 0 : (arr_5 [i_1] [i_1]))))) : (((4294967295 ? var_12 : (arr_5 [i_1] [i_1]))))));
        var_17 |= ((var_4 ? ((max((arr_5 [i_1] [i_1]), var_8))) : ((0 ? ((min(var_2, (arr_5 [i_1] [i_1])))) : (!var_7)))));
        arr_6 [i_1] = ((((max(((var_13 ? 1487931473757091958 : var_2)), ((max(var_4, -32752)))))) ? 32755 : ((var_8 ? (arr_4 [i_1]) : (arr_4 [i_1])))));
    }
    var_18 = -32752;
    var_19 = (-1487931473757091937 ? 9223372036854775807 : 4294967290);
    #pragma endscop
}
