/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    var_19 = var_4;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (max(((max(-25161, 36))), (max(((564101718 ? -10050 : 508)), var_8))));
        var_20 = (((1 ? 7401134083682276173 : 4138781184356457816)));
        var_21 = -1;
    }
    var_22 = (min(var_22, var_12));
    var_23 = ((var_16 ? ((((max(var_5, 255))) ? (((1 ? 25478 : 41))) : (-3842954901276854434 % var_1))) : ((max(var_0, (var_1 != -3325779936748302786))))));
    #pragma endscop
}
