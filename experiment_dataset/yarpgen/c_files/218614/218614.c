/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((127 ? var_12 : ((-0 ? -67 : var_13))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_21 = min((((max(var_1, (arr_0 [i_0] [i_0]))))), ((-(arr_0 [i_0] [i_0]))));
        var_22 *= (max(((max((arr_1 [8]), (arr_1 [4])))), var_10));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_23 = ((8064 ? -188 : 242166106));
        arr_4 [i_1] = min(var_13, (((arr_0 [i_1] [i_1]) ? var_1 : ((var_10 << (var_6 + 1753735052))))));
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        arr_8 [7] [i_2] = var_3;
        arr_9 [i_2] [i_2] = (min((arr_7 [i_2 - 1]), (((arr_5 [i_2 + 3]) ? (arr_5 [i_2 + 4]) : (arr_7 [i_2 + 1])))));
        var_24 = (min(-1293355065, (min(0, (arr_7 [i_2 + 3])))));
        arr_10 [i_2 + 2] [i_2] = ((~(((!((max(var_9, (-127 - 1)))))))));
    }
    #pragma endscop
}
