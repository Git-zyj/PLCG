/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_8, ((min(-var_1, ((max(var_12, var_4))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = max(1, (min(362707496866016295, 1)));
        arr_5 [i_0] = var_12;
        arr_6 [i_0] [i_0] = (max((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))), (((!(arr_1 [i_0] [i_0]))))));
    }
    #pragma endscop
}
