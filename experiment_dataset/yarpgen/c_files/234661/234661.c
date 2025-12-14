/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_11 = (max(var_11, ((((((3716135908 ? 226870665 : (arr_2 [i_0] [i_0])))) ? ((((-226870669 < (arr_0 [i_0] [i_0]))))) : (((arr_0 [i_0] [i_0]) ? 1280844146 : (arr_2 [i_0] [i_0]))))))));
        var_12 = ((((-(arr_0 [i_0] [i_0]))) > (min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))));
    }
    var_13 *= (((18446744073709551587 != 1251569311) ? (((!(((var_9 ? var_8 : -226870681)))))) : (var_3 != var_3)));
    var_14 ^= var_4;
    #pragma endscop
}
