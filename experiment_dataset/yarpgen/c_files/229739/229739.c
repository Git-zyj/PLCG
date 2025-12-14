/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_11 = ((((((var_7 ? var_10 : var_9)) < var_0)) ? ((((!var_0) < ((var_5 ? var_9 : var_4))))) : (((var_7 == ((var_10 << (var_5 - 5898974801616683902))))))));
        arr_2 [i_0] = (((((((((var_1 >> (var_5 - 5898974801616683884)))) && (((var_1 ? var_5 : var_4))))))) < (((var_4 / var_5) ? var_6 : (((var_4 ? var_8 : var_0)))))));
        var_12 += ((((!(var_4 || var_1))) || var_9));
        arr_3 [i_0] [i_0] = ((var_6 - (12108717857693649522 && 3417331376820419985)));
    }
    var_13 = (!2147483637);
    #pragma endscop
}
