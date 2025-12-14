/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_2;
    var_13 = (min(var_13, ((min((((var_3 | var_3) | (max(32767, 4294967295)))), var_1)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_14 = (min(var_14, (((((var_1 ? var_7 : 198394545)) % (573854472 > 6))))));
        arr_3 [i_0] = (i_0 % 2 == 0) ? ((((arr_2 [i_0] [i_0]) >> (((arr_2 [i_0] [i_0]) - 12531713828897474286))))) : ((((arr_2 [i_0] [i_0]) >> (((((arr_2 [i_0] [i_0]) - 12531713828897474286)) - 16406290066483888795)))));
        arr_4 [i_0 - 1] [i_0] = (((((573854472 ? 1 : var_5))) + 2047));
        var_15 += (((arr_0 [i_0 - 1]) <= ((3721112823 ? 0 : -29417))));
    }
    #pragma endscop
}
