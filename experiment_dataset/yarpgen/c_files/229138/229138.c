/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] |= (min(((((arr_1 [i_0]) && var_13))), ((-76 ^ (arr_1 [i_0])))));
        arr_4 [i_0] [i_0] = (3755968510 && 520093696);
    }
    var_17 = ((((((min(var_9, 520093681)) ^ (~var_13)))) ? 3774873629 : (min(((520093681 ? 520093696 : 3774873609)), (var_8 == var_7)))));
    var_18 = var_12;
    #pragma endscop
}
