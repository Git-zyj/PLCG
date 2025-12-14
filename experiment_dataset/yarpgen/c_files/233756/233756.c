/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min(13835801530976031372, 4610942542733520244);

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = min(281474439839744, ((var_6 ? (arr_1 [i_0]) : 0)));
        var_17 = (-(~3363269353386807260));
        arr_3 [i_0] [i_0 - 2] = var_9;
        var_18 -= ((~((-((((arr_1 [i_0 - 1]) <= (arr_0 [i_0 + 1]))))))));
    }
    var_19 = var_3;
    var_20 *= ((((281474439839744 | (min(4610942542733520244, var_15))))) ? var_14 : ((18446744073709551615 ? (var_13 - 16430871401441576847) : 18446744073709551615)));
    #pragma endscop
}
