/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!var_1);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = arr_2 [1];
        var_19 = (((arr_3 [i_0]) ? (0 != 960) : ((2299175454474589197 ? 16147568619234962437 : 31))));
    }
    var_20 = ((-((var_0 + (var_3 + var_12)))));
    var_21 = var_8;
    #pragma endscop
}
