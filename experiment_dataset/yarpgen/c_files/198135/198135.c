/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_16 *= ((-var_14 ? (!-var_13) : (((var_10 & 8007355570243609076) & (arr_1 [i_0 + 1])))));
        arr_2 [i_0] [i_0] |= -3749000950981056698;
        arr_3 [i_0] [i_0] = ((+(min((arr_0 [i_0 + 1] [i_0 - 2]), (arr_0 [i_0 - 2] [i_0 - 1])))));
    }
    var_17 = (((max(var_14, 247)) / ((((((max(var_12, 6023466278710812747))) || (((var_12 ? var_14 : var_1)))))))));
    #pragma endscop
}
