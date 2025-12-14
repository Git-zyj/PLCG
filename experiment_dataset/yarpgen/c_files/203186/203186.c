/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((((max(var_11, ((var_8 >> (-278025424 + 278025436)))))) ? ((var_10 ? ((111 ? -1406503940 : 1346299539)) : 39)) : var_4))));
    var_17 = (max(var_17, 1));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-25 != ((min((arr_0 [i_0 - 1]), 6)))));
        var_18 = ((((arr_0 [i_0 - 1]) | (arr_0 [i_0 - 1]))));
    }
    #pragma endscop
}
