/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-(min(((min(var_16, var_3))), var_2))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (!112);
        var_18 = ((-9223372036854775805 ? (!1) : (arr_0 [i_0 + 2] [i_0 + 2])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = ((~(arr_5 [i_0 - 1])));
                    arr_9 [i_0] [i_1 - 1] [i_0] = -3382693993;
                }
            }
        }
        arr_10 [i_0] = 144;
        var_20 = arr_3 [i_0 + 1];
    }
    var_21 = var_6;
    #pragma endscop
}
