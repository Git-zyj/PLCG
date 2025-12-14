/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (max(var_9, var_10));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_13 = (max(var_13, ((((((-1 ? 1 : 17))) ? ((((min(125594049496842331, 20637))) ? ((max(var_3, var_8))) : ((min(64211, var_4))))) : 41)))));
        var_14 ^= (((max(var_7, (arr_0 [i_0] [i_0 + 3])))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_15 = var_0;
        arr_5 [i_1] [i_1] &= ((~((var_10 % (1 != 5500577099233427576)))));
        var_16 = max((arr_4 [1] [1]), (arr_4 [i_1] [i_1]));
        arr_6 [i_1] = (arr_3 [i_1]);
        arr_7 [i_1] = var_11;
    }
    var_17 = (min(var_17, ((63 / (max(var_10, ((var_3 ? var_10 : 76))))))));
    #pragma endscop
}
