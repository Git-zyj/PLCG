/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (246 && 246);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_5 [i_0] = ((~(arr_1 [i_0])));
            var_11 = (min(var_11, (-2147483647 - 1)));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_8 [i_0] [i_2] &= ((-(arr_1 [i_0 - 2])));
            var_12 = (max(var_12, (((~(arr_2 [i_0] [i_0] [i_0]))))));
        }
        var_13 |= (10 ? 2 : 253);
    }
    var_14 = 155;
    var_15 = (max(235, -19));
    var_16 = (min(var_16, var_2));
    #pragma endscop
}
