/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 0;
    var_11 &= (((((-(min(181, var_2))))) ? var_7 : var_9));
    var_12 = var_5;
    var_13 = (((((127 ? (min(var_1, var_3)) : (19 * var_7)))) ? (((!(((var_8 ? var_8 : var_2)))))) : var_5));

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        var_14 = (min(var_14, ((max((((var_2 || 32767) ? (arr_1 [i_0 - 3]) : (!var_7))), ((var_1 % (((var_5 <= (arr_0 [i_0 + 4] [i_0 + 4])))))))))));
        var_15 += var_1;
    }
    #pragma endscop
}
