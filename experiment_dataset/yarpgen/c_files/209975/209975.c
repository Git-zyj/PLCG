/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = min((-9223372036854775807 - 1), ((min((2828571881949596777 || 54), (var_0 && 54)))));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_16 = (max(var_16, (54 && var_7)));
        arr_2 [i_0] = (39 != 2749898174);
        arr_3 [i_0 + 1] [i_0] = ((((~(arr_0 [i_0 + 1]))) & -7));
        arr_4 [i_0] = var_4;
    }
    var_17 &= var_3;
    var_18 |= (((((((var_11 ? var_3 : var_13)) >= var_8))) >= ((((((var_9 ? var_5 : -103))) || (8277758918613919555 && 1))))));
    #pragma endscop
}
