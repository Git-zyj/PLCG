/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((min(27291, 27273)))));
    var_11 = var_7;
    var_12 = (((((~((27264 ? 224 : 17))))) ? (((86 ? -6707871691914866118 : 83))) : 80));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [14] = -var_2;
        arr_3 [i_0] = (((-5624 | 32419) | 6707871691914866095));
        var_13 *= (((arr_1 [i_0] [i_0]) ? ((((arr_0 [i_0] [22]) >= var_0))) : ((var_7 >> (((arr_1 [i_0] [i_0]) - 49))))));
        arr_4 [i_0] = (arr_0 [i_0] [i_0]);
        var_14 = (max(var_14, (225 + var_3)));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {
        arr_8 [i_1] |= (((arr_6 [i_1]) >= (((var_0 ? var_5 : (arr_5 [i_1]))))));
        var_15 &= var_4;
    }
    #pragma endscop
}
