/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (((!(((2623719396 ? 52444 : 16251))))) ? var_14 : 1547880637);
    var_18 = (min(1547880636, var_5));

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_19 = (max(var_19, ((-1547880624 % ((~(arr_0 [i_0 + 4] [i_0 - 2])))))));
        var_20 -= (min((((~(arr_0 [i_0] [i_0])))), (arr_1 [0])));
    }
    var_21 &= 4258814002886462843;
    #pragma endscop
}
