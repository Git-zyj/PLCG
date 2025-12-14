/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((((5905685049912079755 ? 2301986141 : var_13)))))));
    var_17 = (min(var_17, (((!(~var_5))))));
    var_18 = var_0;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 &= (((~var_11) ? (((~(((((arr_2 [i_0]) + 2147483647)) << (var_2 - 1268737360)))))) : (min((arr_2 [12]), ((((arr_0 [i_0]) << (((-1 + 12) - 11)))))))));
        var_20 -= (~var_5);
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        arr_6 [i_1] = (!var_8);
        var_21 = (~((~(arr_0 [i_1 + 1]))));
        arr_7 [i_1] = 0;
        var_22 = (arr_3 [i_1]);
    }
    #pragma endscop
}
