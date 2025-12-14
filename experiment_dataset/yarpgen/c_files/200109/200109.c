/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = (arr_4 [i_1]);
            var_14 = (min(var_14, ((((arr_4 [4]) * (arr_0 [i_0]))))));
            var_15 ^= (((arr_0 [i_0]) ? (arr_2 [i_1]) : (arr_1 [i_0])));
        }
        arr_6 [i_0] [i_0] = ((21753 ? 127 : var_7));
    }
    var_16 = (((!2147483647) + 2147483623));
    var_17 = ((var_0 ? (((var_8 > ((var_7 ? var_2 : var_1))))) : var_9));
    var_18 = (min(var_18, (((-7690230220735638799 ? -var_7 : ((((127 ? 114 : 21753)) * 65)))))));
    #pragma endscop
}
