/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        arr_2 [18] [i_0] = (((((~(max((arr_0 [16]), (arr_1 [i_0] [i_0])))))) ? ((max((arr_1 [8] [i_0]), 11618))) : (((!4977670892410840936) ? (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0 + 1] [i_0 - 2]) : var_9)) : 1))));
        arr_3 [i_0] [i_0 - 1] = ((((~(arr_1 [i_0 + 1] [i_0]))) / (((((24091 + (arr_1 [i_0 + 1] [i_0])))) ? (max((arr_0 [i_0]), (arr_1 [18] [i_0]))) : (min((arr_0 [i_0 + 1]), (arr_1 [i_0 - 2] [i_0])))))));
    }
    var_11 = (max(var_2, (((var_8 == (~839451965))))));
    #pragma endscop
}
