/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(40164, var_4));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = ((2444615002 ^ (((var_11 ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
        arr_3 [i_0] [i_0] &= (((var_7 / var_7) ^ ((max(var_6, ((var_4 ? 26 : var_11)))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_14 = (min((arr_4 [i_1] [14]), (max(61440, 1))));
        var_15 = (min(var_15, (((var_4 ? (((max(var_9, var_2)))) : var_5)))));
    }
    #pragma endscop
}
