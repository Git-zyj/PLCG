/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [14] &= (((((((2336185138 >> (var_4 + 26257)))) | (((arr_0 [14]) >> (((arr_1 [i_0]) - 10344312224487374719)))))) | 4294967295));
        arr_3 [i_0] = ((((!var_1) ? (arr_0 [i_0]) : (((arr_0 [i_0]) | 4294967295)))));
        arr_4 [i_0] [i_0] = (!var_3);
        arr_5 [i_0] = 162;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_12 [i_1 + 1] [i_2] [i_1] = (((arr_6 [i_1]) + (arr_7 [i_1])));
            arr_13 [i_1 + 1] [i_1 - 1] [i_2] &= (~var_6);
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            arr_16 [i_1] [i_1] = (!(arr_7 [i_1]));
            var_11 *= (((arr_6 [i_1 - 1]) + (arr_7 [i_3])));
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                {
                    var_12 = (max(var_12, var_3));
                    var_13 ^= (-(arr_6 [i_1]));
                    arr_22 [i_1] [i_1] [i_1 + 2] [i_1] = (arr_6 [i_1 + 2]);
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_14 -= (min((max(((var_7 ? -606743245 : 4579329227481609234)), ((var_2 ? (arr_18 [18] [i_6]) : 1)))), ((((((-90 + 2147483647) >> (((arr_24 [i_6] [i_6]) - 14666))))) | (arr_18 [i_6] [i_6])))));
        arr_27 [i_6] = ((-(((!(arr_15 [i_6]))))));
        arr_28 [i_6] = (((arr_19 [i_6] [i_6] [i_6] [i_6]) ? 606743244 : ((var_2 ? 2336185122 : (arr_24 [i_6] [i_6])))));
        arr_29 [i_6] = var_5;
    }
    var_15 = var_8;
    #pragma endscop
}
