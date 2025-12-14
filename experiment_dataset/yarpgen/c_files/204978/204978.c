/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;
    var_21 = var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_12 [1] [i_0] [i_2] [i_2] [i_2] [i_2] = ((8326 ? -6315056262494148551 : 1));
                        arr_13 [i_3] [i_2] [i_2] [i_0] = (var_4 == 65534);
                        arr_14 [i_0] [i_2] = var_0;
                    }
                }
            }
        }
        var_22 = (((var_0 ? (arr_5 [i_0]) : 1009285284)));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_23 ^= 5141499910290815542;
        var_24 *= var_13;
    }
    var_25 = var_16;
    var_26 |= (min(var_5, var_5));
    #pragma endscop
}
