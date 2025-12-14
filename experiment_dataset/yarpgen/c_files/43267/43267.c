/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = ((~9114245766964686264) && (9332498306744865374 || 32767));
        var_20 = (((arr_0 [i_0] [i_0]) ? ((min((arr_1 [i_0]), (arr_1 [i_0])))) : ((-(arr_1 [i_0])))));
    }
    var_21 = ((~(~398542834)));
    #pragma endscop
}
