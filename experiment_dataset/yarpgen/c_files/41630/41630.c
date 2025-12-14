/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] = (((min(var_6, (max(-1150051545, 1150051544)))) / (max(-2147483647, var_2))));
        arr_4 [8] = (arr_2 [i_0 + 1]);
    }
    var_11 = ((~((-((max((-32767 - 1), 21)))))));
    var_12 = 50883;
    #pragma endscop
}
