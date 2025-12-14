/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    var_13 = ((max((max(2281555756, var_6)), (var_6 > var_11))) >> (var_1 - 3798669683));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [4] = max(3978742745, (max(-2710565573, (arr_0 [i_0] [i_0]))));
        arr_3 [i_0] = ((arr_0 [i_0] [i_0]) / (((((-(arr_1 [i_0] [i_0])))) ? 1662800823 : ((2013411539 ? (arr_1 [i_0] [i_0]) : 0)))));
    }
    var_14 = (((max(((1454277853 ? var_5 : var_8)), ((var_6 ? var_10 : var_10))))) ? var_1 : (max(((var_7 ? 385241234 : 2710565571)), var_3)));
    #pragma endscop
}
