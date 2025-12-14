/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_12 = (min((((((0 ? -15393 : -694722933))) ? ((max(0, var_1))) : ((65522 / (arr_0 [i_0]))))), (((max(56, 622471097))))));
        arr_3 [i_0 - 1] &= (arr_1 [i_0]);
        arr_4 [7] = ((~(arr_0 [i_0])));
    }
    var_13 = ((~(~var_3)));
    var_14 += 1915282733;
    #pragma endscop
}
