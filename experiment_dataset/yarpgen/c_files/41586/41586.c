/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = (min((5854606058414738495 && 5854606058414738495), (((min(var_15, 12592138015294813121)) % ((((arr_0 [i_0]) - var_4)))))));
        var_17 += (arr_2 [21] [i_0]);
    }
    var_18 = var_12;
    var_19 = ((((((~125829120) / var_10))) % (((min(12592138015294813121, 12592138015294813131)) | ((-22558 ? 12592138015294813129 : -96))))));
    var_20 = var_10;
    var_21 = (((~-96) ? var_12 : ((((max(var_7, 0))) ? (~-1) : (min(var_10, var_15))))));
    #pragma endscop
}
