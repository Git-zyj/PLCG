/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_8 [12] [i_0] |= (18446744073709551608 & 0);
                    arr_9 [i_2] [13] [i_0] &= ((-((32704 ? 95 : (arr_4 [5])))));
                    arr_10 [i_2] [i_0] = ((-((-(arr_7 [i_0])))));
                }
            }
        }
        arr_11 [i_0] = (arr_0 [i_0]);
        arr_12 [i_0] [i_0] = (-127 - 1);
    }
    var_14 = ((1048575 ? (((-0 - ((var_7 ? var_4 : var_1))))) : -var_11));
    #pragma endscop
}
