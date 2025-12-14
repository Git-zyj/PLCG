/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((~(((!((min(var_3, -32))))))));
    var_21 = var_4;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [1] = arr_1 [i_0];
        var_22 += ((((min(31, var_13))) ? (((0 & -32) ? 1410573839842932879 : (39 >= 32))) : (((min(32, 0))))));
        var_23 = var_18;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    arr_11 [i_1] [i_2] [i_1] = ((((var_9 ? (max((arr_9 [i_1] [i_1] [i_3]), 1392816855)) : 1))) ? ((max((46 - var_19), (arr_8 [i_1] [i_1] [i_1])))) : ((var_1 + (((-32 + (arr_4 [i_1])))))));
                    arr_12 [i_2] [i_1] [i_1] [i_2] = ((((-(arr_10 [i_2]))) > (arr_9 [i_1] [i_2] [i_3])));
                    arr_13 [i_1] = (187066675336725957 ^ -var_18);
                }
            }
        }
        var_24 |= 4128768;
        var_25 = (max(var_25, (((!(((max(var_18, (arr_10 [i_1]))))))))));
        var_26 = (max(var_26, (((~((min(6, -46))))))));
    }
    var_27 = var_11;
    #pragma endscop
}
