/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_0 / ((var_6 ? ((12653961327266132010 ? var_12 : var_10)) : 7))));
    var_18 = (max(var_18, (~218)));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((((((arr_2 [i_0 - 4]) % (-127 - 1)))) ? ((127 ? -1346392644 : -1346392644)) : -1346392643));
        var_19 = (~11998556303946985460);
        var_20 = (((arr_2 [i_0 - 2]) - -1346392644));
        arr_5 [i_0] = 23288;
    }
    #pragma endscop
}
