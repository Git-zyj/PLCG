/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((((min((max(var_12, 2848320929)), (arr_0 [i_0])))) & (((((arr_0 [i_0 + 1]) - 1868544516003589937)) / (arr_0 [i_0 + 1])))));
        var_13 = 2848320926;
    }
    var_14 = (max(var_14, ((((1446646379 / var_9) * (min(2848320914, var_5)))))));
    #pragma endscop
}
