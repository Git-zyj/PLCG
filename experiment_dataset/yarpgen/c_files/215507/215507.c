/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 1;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min(((max(((var_3 ? (arr_0 [4]) : 65522)), ((var_10 ? var_3 : (arr_1 [i_0])))))), ((1135282178070730653 << (1135282178070730641 - 1135282178070730640)))));
        arr_3 [i_0] = (((((((!(arr_0 [2]))) ? (arr_0 [i_0]) : 1))) ? ((-(arr_1 [1]))) : (var_10 == var_5)));
        arr_4 [0] = (76 ^ 9007182074871808);
    }
    #pragma endscop
}
