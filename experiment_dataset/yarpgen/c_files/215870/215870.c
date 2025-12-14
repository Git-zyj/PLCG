/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_14 = ((((((((0 ? 689951982 : 20))) ? 689951982 : ((2 ? 147910149 : 27))))) ? ((((-1307894508 ? -1121758999 : 689951975)))) : 10));
        arr_2 [i_0] [i_0] = (-9 ? (~-102) : (~-114091887));
    }
    var_15 = var_7;
    var_16 = var_10;
    var_17 = -1;
    #pragma endscop
}
