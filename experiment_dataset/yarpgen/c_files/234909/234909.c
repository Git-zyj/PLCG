/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_16 = (min(32256, 10707904735826861059));
        var_17 ^= (arr_2 [i_0] [i_0]);
    }
    var_18 = var_10;
    var_19 = var_2;
    var_20 = max(((((((-8 ? 6076575948187857769 : -71))) || (33291 ^ var_14)))), ((var_5 >> ((((min(var_5, var_15))) - 25525)))));
    #pragma endscop
}
