/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= var_5;

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_12 = ((3889336295 ? (min(3963252725, 405631001)) : ((((arr_1 [i_0 + 1]) ? (arr_1 [i_0 - 3]) : (arr_1 [i_0 - 3]))))));
        var_13 = (arr_1 [i_0]);
        var_14 = var_10;
        arr_2 [i_0 - 2] = (max((arr_1 [i_0 - 2]), (arr_0 [i_0 + 2])));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_7 [i_1] [20] = (min(((((33 == (arr_6 [i_1]))) ? -var_3 : (arr_3 [i_1] [i_1]))), ((min((arr_6 [i_1]), var_5)))));
        var_15 = (min((((8680 ? -34 : 6))), (arr_3 [i_1] [i_1])));
    }
    var_16 = max(-37, 111);
    #pragma endscop
}
