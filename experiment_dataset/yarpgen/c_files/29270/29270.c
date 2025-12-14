/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_15, ((((-3683373529941646544 ? 18446744073709551615 : 19339)) | var_7))));
    var_21 = ((~(!8)));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_22 += (max((arr_1 [14]), (arr_2 [i_0 + 1])));
        var_23 = (max(((~(arr_2 [i_0 + 3]))), (arr_1 [i_0])));
    }
    #pragma endscop
}
