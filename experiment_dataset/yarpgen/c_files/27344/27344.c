/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_15 = (max(((((max((arr_0 [i_0]), var_6))) & (-32767 - 1))), ((((min(-1178660619, -32765))) ? 32762 : ((~(arr_1 [i_0])))))));
        var_16 = ((-((((arr_0 [i_0 - 1]) == (-32767 - 1))))));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_17 = ((((max((max(-1531972543, 906814821)), 9963780615375672160))) ? (arr_4 [4] [i_1 + 1]) : ((0 ? var_9 : (3388152474 | 32749)))));
        arr_5 [i_1] = (max(((((max(-5411, -106))) ? ((max(205, -38))) : 44460)), (arr_1 [1])));
    }
    var_18 = var_3;
    #pragma endscop
}
