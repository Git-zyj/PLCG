/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [8] = (arr_2 [i_0]);
        arr_4 [i_0] = (min(72, (((!(var_13 < var_10))))));
        var_16 = (min(var_16, (min(((((arr_0 [7]) != (arr_2 [11])))), (max(875834394, (min(-1, 2411505811509824192))))))));
    }
    var_17 = var_15;
    var_18 = var_0;
    #pragma endscop
}
