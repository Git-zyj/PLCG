/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((-96 ? (-1110214198 / -1110214198) : 1463517722)), (-2138180132 - 1)));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_11 = var_2;
        var_12 = (max(var_12, 63));
        arr_3 [i_0 + 1] = ((~(arr_0 [3])));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_13 = (!170);
        arr_8 [i_1] = 63;
    }
    var_14 = var_6;
    #pragma endscop
}
