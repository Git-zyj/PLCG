/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (+-4194);
    var_15 += 971233790990460361;
    var_16 ^= (((var_10 ? ((max(5835235172549882720, var_13)) : var_10))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 = (min(var_17, ((max(-11675498823152175174, ((((arr_0 [i_0]) > (arr_0 [i_0])))))))));
        var_18 *= (((~(arr_2 [i_0]))));
    }
    #pragma endscop
}
