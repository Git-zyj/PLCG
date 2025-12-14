/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_7 ? ((((65535 <= var_1) % ((var_6 ? var_0 : var_4))))) : 6318988315887185463);
    var_13 = ((var_11 < (((((((var_7 ? -28702 : var_8))) && var_5))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (max(15270977161045088428, (arr_2 [i_0])));
        var_14 = arr_1 [i_0] [i_0];
    }
    var_15 = ((~(((var_10 > var_0) ? (((-32766 ? var_8 : 65535))) : var_3))));
    #pragma endscop
}
