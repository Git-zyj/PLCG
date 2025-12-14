/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-1622601439871272040 ? ((max(3891347918, var_13))) : ((-(~var_11)))));
    var_15 = (max(var_2, 13948));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 = (arr_1 [i_0]);
        var_17 = 4294967295;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] = var_2;
        var_18 = ((~((-((max((arr_4 [i_1]), var_10)))))));
    }
    var_19 = ((((max((max(28462, 4382415422281025377)), var_8))) ? (min((((3559147640 / (-2147483647 - 1)))), (min(var_0, var_5)))) : ((max(((((var_3 + 2147483647) >> (var_7 - 4072702857)))), var_6)))));
    var_20 = ((var_13 ? ((max(2147483647, (-29294 == -29294)))) : ((min(var_12, 3426379698189789424)))));
    #pragma endscop
}
