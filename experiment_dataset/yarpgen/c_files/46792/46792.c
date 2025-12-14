/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [6] = ((((!(~15202299352069724315)))));
        arr_3 [i_0] [i_0] = ((((~(((arr_0 [i_0]) ^ -349331240161932282)))) / ((((4501609736330302900 || ((min(0, (arr_1 [2] [15]))))))))));
    }
    var_17 = (max(var_17, 7564229550814291628));
    #pragma endscop
}
