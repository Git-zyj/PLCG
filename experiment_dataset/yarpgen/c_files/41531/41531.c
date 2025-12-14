/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = min(var_10, 3591631708);
    var_13 = -var_8;

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] &= ((((min(((max(var_5, 1679947029))), ((var_4 ? var_8 : (arr_2 [i_0])))))) ? ((~(min((arr_0 [i_0 - 3] [i_0 - 1]), (arr_2 [i_0 - 1]))))) : 10312746044894747839));
        arr_4 [i_0] = max((max((arr_2 [i_0 - 2]), (arr_1 [i_0 - 2]))), (max((arr_2 [i_0 + 1]), (arr_0 [i_0 - 1] [i_0 - 1]))));
        arr_5 [i_0] [i_0] = ((((~(arr_1 [i_0])))));
        arr_6 [5] [i_0 - 2] = 144115188075855871;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_10 [i_1] = ((-(((arr_9 [i_1] [i_1]) ? (arr_9 [i_1] [i_1]) : (arr_9 [i_1] [i_1])))));
        arr_11 [i_1] = (min(((-(max(18302628885633695724, 14)))), (~18302628885633695724)));
    }
    var_14 = var_2;
    var_15 = var_1;
    #pragma endscop
}
