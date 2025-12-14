/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((min((1561472618 > var_15), (56 == var_7)))) >> (((!(((15 ? var_10 : 148))))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = (min(var_17, (min((((!var_6) >> ((((var_12 ? var_12 : (arr_1 [3] [6]))) - 23)))), (arr_1 [i_0] [15])))));
        arr_2 [5] = (((32749 / -1506639394) + (((~1949797085) | (arr_0 [3])))));
    }
    #pragma endscop
}
