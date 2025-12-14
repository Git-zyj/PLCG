/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~(~-11816)));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_21 -= ((((((!32) ^ ((8790606615027530132 ? 107587468 : -1))))) ? (((-(((!(-9223372036854775807 - 1))))))) : var_16));
        var_22 = ((-27 * (min((var_5 / -473282150), (((arr_2 [i_0 + 1]) - var_10))))));
        arr_4 [i_0] = (~45295);
    }
    #pragma endscop
}
