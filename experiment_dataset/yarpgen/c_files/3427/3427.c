/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((((2 ? 0 : var_7))) ? var_5 : 65522))) ? 38 : var_7));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 *= ((-(((max((arr_3 [i_0] [2]), 716299709)) & (((2 % (arr_3 [24] [8]))))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_14 [i_0] [i_0] [19] [i_0] = (var_11 <= var_10);
                        arr_15 [i_0] [i_0] = ((((((-(arr_1 [i_3 - 1]))) + 2147483647)) >> var_3));
                    }
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 17;i_4 += 1)
    {
        arr_19 [i_4] = (arr_18 [i_4]);
        arr_20 [i_4] = (((arr_6 [i_4] [i_4 - 2]) ? ((((max(1, var_12)) & (((((arr_3 [i_4] [i_4]) > (arr_12 [i_4 - 1] [i_4 + 1])))))))) : 12344096377465354420));
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                {
                    arr_29 [i_4] = ((~((var_12 ? (max(2, 4294967267)) : (~-21)))));
                    arr_30 [i_4] = (arr_28 [i_4] [i_5] [i_6] [i_4]);
                    arr_31 [i_4] [i_5] [i_6] = var_10;
                }
            }
        }
    }
    #pragma endscop
}
