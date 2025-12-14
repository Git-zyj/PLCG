/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = (((((~var_8) > var_8)) ? (!var_3) : ((175 ? 0 : 2097151))));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_4 [14] = (arr_1 [i_0 + 3]);
        var_13 = (max(var_13, ((min((arr_2 [22]), ((-(arr_1 [i_0 + 2]))))))));
    }
    var_14 = ((((((var_7 ? var_9 : var_6)))) ? var_7 : var_10));
    var_15 = var_0;
    #pragma endscop
}
