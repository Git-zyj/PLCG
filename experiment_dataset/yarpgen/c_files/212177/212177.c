/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= var_13;

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        var_18 = (((((7680 ? ((-(arr_0 [i_0 - 3]))) : var_8))) ? 7668 : -1));
        var_19 = (((~-64) && (arr_0 [i_0 - 4])));
        arr_2 [i_0] = (((((((5819968902606566062 ? 1 : 11489))) ? (((arr_1 [i_0]) % -5819968902606566062)) : (~-1246510050))) * (!15374727798239407304)));
        arr_3 [i_0] [i_0 - 3] = (min((((arr_1 [i_0 + 2]) % (arr_0 [i_0 + 2]))), (3279561257 && var_10)));
    }
    var_20 = 1;
    var_21 = var_9;
    #pragma endscop
}
