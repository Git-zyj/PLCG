/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (max(((((arr_1 [i_0] [i_0]) > (arr_1 [11] [i_0])))), (arr_1 [i_0] [i_0])));
        arr_3 [i_0] [0] = (21286 == 2147483634);
        arr_4 [i_0] = var_3;
        arr_5 [i_0] [i_0] = (arr_1 [17] [17]);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_9 [8] [8] = var_7;
        arr_10 [i_1] = 2147483644;
    }
    var_18 = (max(var_9, 21289));
    var_19 = (max(((~(max(var_10, var_9)))), -8920));
    #pragma endscop
}
