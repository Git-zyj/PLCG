/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += (var_0 != var_10);
    var_14 = (max(var_14, (((((max(var_6, (max(var_1, var_10))))) ? ((-426221400 << ((max(var_7, var_11))))) : var_8)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 = (max(((max(var_11, (arr_3 [11] [i_0])))), ((var_5 ? var_6 : 60))));
        arr_4 [i_0] [i_0] &= (max((((((-(arr_2 [i_0])))) - var_7)), var_11));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    var_16 |= (arr_6 [i_1]);
                    var_17 *= var_1;
                    var_18 = (max(var_18, 58));
                }
            }
        }
        var_19 = 65535;
        arr_16 [i_1] = (arr_5 [i_1] [i_1]);
    }
    for (int i_4 = 4; i_4 < 15;i_4 += 1)
    {
        var_20 = (!15169945576196517953);
        var_21 = (((((+((var_4 ? (arr_18 [i_4]) : var_6))))) | (max(((max(1, var_6))), (var_11 ^ 381271169176191873)))));

        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            var_22 = ((+((44998 ? (arr_22 [i_4] [i_5]) : var_0))));
            var_23 ^= (((max(((max(var_5, 60))), (274877906943 ^ var_11))) != -14910));
        }
        var_24 *= ((((var_1 ? (arr_10 [i_4 - 3] [i_4 - 2] [i_4 - 2]) : (arr_10 [i_4 - 1] [i_4 - 2] [i_4 - 3])))) ? (max(var_4, (arr_11 [i_4 - 1]))) : (max((arr_11 [i_4 - 2]), (arr_10 [i_4 + 2] [i_4 - 2] [i_4 + 1]))));
    }
    #pragma endscop
}
