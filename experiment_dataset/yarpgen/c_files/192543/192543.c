/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 = (max(var_20, ((((((max(44, 53165))) ? -var_17 : (((arr_0 [i_0]) ? 4294967285 : var_17))))))));
        arr_2 [i_0] = 36;
        var_21 = (max(2214, 5495923345591000553));
    }
    var_22 = ((((var_4 / var_17) ? (max(var_7, var_15)) : var_6)));
    #pragma endscop
}
