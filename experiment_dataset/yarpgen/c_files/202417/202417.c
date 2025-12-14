/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_11);

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_21 = ((((8846948638687958211 >> (((~9599795435021593415) - 8846948638687958163)))) == (((-(-127 - 1))))));
        arr_2 [i_0] = ((-((((~(arr_1 [3]))) + (((arr_1 [i_0 + 1]) | (arr_1 [16])))))));
        arr_3 [1] = (max(((((((arr_1 [i_0]) != (arr_1 [i_0])))) >> ((((~(arr_0 [9]))) - 17)))), (arr_0 [i_0 + 1])));
        arr_4 [i_0] [i_0] = var_5;
    }
    #pragma endscop
}
