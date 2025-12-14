/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = (18446744073709551615 && 2147483647);
        var_19 = (((((var_10 ? -671309629 : (arr_0 [i_0])))) && (30 + 671309624)));
        var_20 = (max(var_20, (671309626 % 671309633)));
        var_21 = (-85 <= var_15);
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        arr_5 [i_1] = (((((var_9 + 2147483647) >> (arr_3 [i_1] [i_1 + 2])))) ? (var_9 == 773647675) : ((11200859553188300023 >> (1277684930004716080 - 1277684930004716024))));
        arr_6 [i_1] [i_1 + 3] = var_16;
        arr_7 [i_1] [i_1] = ((((((671309626 != 11200859553188300014) > var_15))) == (((91 > ((~(arr_3 [i_1] [i_1]))))))));
    }
    #pragma endscop
}
