/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (max(((-(max(var_1, 1395463503853230838)))), ((max((arr_0 [i_0] [5]), var_0)))));
        arr_4 [i_0] [i_0] = 11675814044445980022;
        arr_5 [i_0] = ((17051280569856320777 ? (!var_2) : ((max(4095, (((!(arr_1 [i_0])))))))));
    }
    var_11 = (287678721 / var_9);
    var_12 = (((((66 || (((1395463503853230838 << (var_6 + 2379886929981974089))))))) < var_5));
    #pragma endscop
}
