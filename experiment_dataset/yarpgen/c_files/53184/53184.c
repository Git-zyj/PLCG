/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((min(var_4, 2378905421005767027)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((60865 ? (((var_4 != (arr_0 [i_0] [i_0 + 1])))) : (((min(var_1, var_1))))));
                arr_7 [i_0] [i_1] = var_3;

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_10 [i_0] [i_0] [i_0] = 18446744073709551615;
                    arr_11 [i_0] [i_0] [i_2] [i_2] = ((((32755 <= var_3) / var_12)));
                    var_15 = 3372786648006663402;
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    arr_15 [i_0] [i_0] [i_3] = ((((((((var_0 ? -21791 : var_13))) ? var_1 : ((max(var_4, var_9)))))) ? ((min((32755 < -125), var_9))) : ((((min(65535, var_13))) ? 1 : (min(149, var_7))))));
                    arr_16 [i_0] = (arr_2 [i_0 + 1]);
                    var_16 += ((15513142490524254119 ? 28899 : (~23380)));
                }
            }
        }
    }
    #pragma endscop
}
