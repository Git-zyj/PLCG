/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = ((-(arr_0 [i_0])));
        arr_5 [i_0] = (((+(((arr_0 [8]) ? (arr_2 [i_0] [i_0]) : var_9)))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_9 [i_1] = ((-((7906762308488746746 << (7906762308488746724 - 7906762308488746724)))));
        var_11 = (arr_7 [i_1]);
    }
    var_12 = ((1358803264 ? -7906762308488746749 : -7906762308488746732));
    #pragma endscop
}
