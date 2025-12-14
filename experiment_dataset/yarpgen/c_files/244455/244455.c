/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((min((1 >> var_8), var_10)));
    var_12 = var_0;

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_13 ^= (arr_0 [i_0]);
        arr_2 [i_0] [i_0] = (max((((min(175, (arr_1 [i_0]))))), ((~(((27041 || (arr_0 [i_0]))))))));
    }
    var_14 += -31375657;
    var_15 = (max((~var_2), (31375650 < 1)));
    #pragma endscop
}
