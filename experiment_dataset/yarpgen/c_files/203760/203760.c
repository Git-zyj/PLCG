/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += ((var_8 < (((((var_10 ? 0 : 242))) ? (max(var_9, var_7)) : var_2))));
    var_13 = ((-(((((-1234038778 ? var_7 : var_6))) ? (((min(var_11, 0)))) : ((var_10 ? var_3 : var_7))))));
    var_14 = (((((min(var_2, var_9)) % (~var_6))) * (((-var_4 ? -var_6 : var_5)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_15 ^= (((arr_1 [i_0]) << ((((var_10 ? 42821 : (arr_0 [i_0] [i_0]))) - 42805))));
        arr_3 [i_0] [i_0] = ((arr_1 [i_0]) <= (arr_1 [i_0]));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((~(arr_5 [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_15 [i_1] [i_1] [i_1] [i_2] = (min(((min(((min((arr_5 [i_4]), 242))), var_5))), (min((((91 ? 1 : 0))), ((var_0 ? var_3 : (arr_0 [i_4] [i_3])))))));
                        var_16 = var_0;
                    }
                }
            }
        }
        arr_16 [i_1] = 10178559114275618280;
        var_17 |= ((978125367 ? ((65535 ? (arr_7 [i_1]) : (arr_6 [i_1]))) : ((((arr_6 [i_1]) ? (arr_6 [i_1]) : (arr_6 [i_1]))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
    {
        var_18 ^= (!0);
        arr_21 [i_5] = (((arr_13 [i_5] [i_5]) & var_3));
        arr_22 [i_5] = (((arr_13 [i_5] [i_5]) & var_3));
    }
    var_19 = (min(var_8, (((((var_3 ? var_6 : 1040187392))) - var_9))));
    #pragma endscop
}
