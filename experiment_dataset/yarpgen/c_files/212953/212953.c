/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_0 ^ var_15);

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (!13);
        var_17 = (((!0) ? ((~(arr_0 [i_0 - 2]))) : (((~98641046) & ((-(arr_0 [i_0 - 3])))))));
        arr_3 [i_0] |= 2147483647;
        arr_4 [i_0] = ((((min(1248363595, var_1))) != var_7));
    }
    #pragma endscop
}
