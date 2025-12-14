/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~var_13);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = ((~(arr_1 [i_0] [i_0])));
        arr_4 [2] = min(((((var_12 ? var_10 : -1594622678)))), (((((arr_0 [11]) ? var_14 : var_0)) * (arr_0 [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        arr_8 [i_1] = (((arr_7 [i_1 - 2]) == ((-11528 ? 244 : var_9))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 8;i_3 += 1)
            {
                {
                    var_19 = ((-75 ? (arr_3 [4]) : (arr_1 [i_3 + 4] [i_2])));
                    var_20 ^= (((((var_8 / (arr_9 [i_1] [i_2] [i_3])))) * ((4294967283 * (arr_0 [6])))));
                    var_21 = (((var_5 ? var_6 : var_16)) % (arr_5 [i_3 + 1] [i_1 - 1]));
                }
            }
        }
    }
    var_22 = var_10;
    #pragma endscop
}
