/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_2;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_11 = 18446744073709551615;
        arr_2 [i_0] = 18446744073709551615;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_5 [i_1] = 177;
        var_12 = (min(var_12, (((-(min(((10788 ? 249 : 79)), (arr_1 [2] [2]))))))));
        var_13 = (min(var_13, -1099489606));
    }
    #pragma endscop
}
