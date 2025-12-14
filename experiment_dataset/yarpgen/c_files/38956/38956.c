/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    var_13 = var_5;
    var_14 |= var_2;

    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (min((max(1, (arr_0 [i_0 + 1]))), ((max(255, var_9)))));
        var_15 = (min((min(0, (arr_0 [i_0 - 1]))), ((max((arr_1 [i_0 + 1]), (arr_1 [i_0 - 1]))))));
        var_16 |= (max((max((arr_2 [i_0 + 1]), (arr_2 [i_0 - 1]))), ((max(-74, 54616)))));
        var_17 -= (max((max(1, var_8)), (min((arr_2 [i_0 - 1]), (arr_2 [i_0 - 1])))));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_18 = (max(var_18, ((max(((min((arr_1 [i_1 - 1]), -1))), (min(var_10, var_9)))))));
        var_19 += (max(1, 1));
    }
    var_20 |= max(var_7, (max(1, 1318341402)));
    #pragma endscop
}
