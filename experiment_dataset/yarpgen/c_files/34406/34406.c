/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-(~383256285820581097)));
        var_13 = -17;
    }
    var_14 |= var_3;
    var_15 *= (max((((8125834152068582615 ? ((4805 ? 65517 : var_7)) : 122))), 2147483647));
    #pragma endscop
}
