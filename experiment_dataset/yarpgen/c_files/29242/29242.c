/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (238 ^ var_3);

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_14 += (!-32753);
        var_15 = ((~(arr_1 [i_0])));
        var_16 = ((-(((((-1698207361 / 255) + 2147483647)) << (-1597130963 - 18446744072112420653)))));
    }
    var_17 = (max((max((~31), (var_6 - 58872))), var_2));
    #pragma endscop
}
