/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!((max(((var_0 ? 241 : 15)), (!2695329031)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (((max(-596339155663183442, 12)) & ((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : 0)))));
        var_12 = ((((max((arr_0 [i_0]), (arr_0 [i_0])))) ? ((((!-1) ? (!-6623675074135995043) : 1))) : ((-((4294967294 / (arr_0 [i_0])))))));
        var_13 = (min(var_13, (((+(max((!var_1), -19)))))));
    }
    var_14 = var_2;
    var_15 = (((((-var_4 ? 65535 : 2695329031))) ? (((!(((var_3 ? var_3 : -17)))))) : ((((max(-14, 5896017930329688915))) ? var_6 : (!138)))));
    var_16 ^= var_6;
    #pragma endscop
}
