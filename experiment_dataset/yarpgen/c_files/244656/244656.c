/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_10 = ((min(21972, (((arr_0 [i_0]) / var_4)))) * (((var_3 < (((-(arr_2 [i_0]))))))));
        var_11 = (arr_0 [i_0]);
    }
    var_12 = (244 != 80);
    var_13 = ((~(~11864069490054881488)));
    #pragma endscop
}
