/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_14 = (min(var_14, ((min(var_0, (((arr_1 [i_0] [i_0 - 2]) ? 1 : (arr_1 [i_0] [i_0 - 2]))))))));
        var_15 ^= 127;
        var_16 = (min(var_16, ((max(((+(((arr_0 [i_0 + 1]) ? -4852206426756054321 : (arr_0 [i_0]))))), (min(((9459 ? 17179869183 : 3)), ((min(var_10, 32657))))))))));
    }
    var_17 = (max(var_17, var_12));
    #pragma endscop
}
