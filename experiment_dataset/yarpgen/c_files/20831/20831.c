/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (((((((((arr_1 [i_0] [i_0]) < (arr_0 [i_0])))) == (arr_1 [i_0] [i_0])))) << (((((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) - 6609))));
        var_10 = (max(var_10, var_9));
        var_11 &= ((var_8 ? ((((32767 ? (arr_0 [i_0]) : 2202)) / -32767)) : (((((15022 ? (arr_0 [i_0]) : -38))) ? ((var_5 ? 38 : (arr_0 [i_0]))) : ((((arr_0 [i_0]) ? -32767 : (arr_1 [i_0] [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_12 = (min(var_12, ((((arr_5 [i_1] [i_1]) && ((max((((arr_6 [i_1]) ? var_2 : 470062943929466875)), (arr_4 [i_1])))))))));
        var_13 = (((((arr_3 [i_1]) ? -var_6 : (((-39 ? 15 : 29649))))) + var_5));
        var_14 &= var_3;
    }
    var_15 ^= ((-((((max(var_4, 17)) >= (!-32767))))));
    var_16 -= (61049 && var_3);
    #pragma endscop
}
