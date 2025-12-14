/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 = (min(var_12, ((((((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [11]))))) != (18446744073709551615 | 13822389523993263986))))));
        arr_2 [i_0] [i_0] = (max(((!(arr_0 [i_0]))), ((((min(var_2, (arr_0 [16])))) && ((max(14601408987604401301, (arr_0 [i_0]))))))));
    }
    var_13 += 1265911383;
    #pragma endscop
}
