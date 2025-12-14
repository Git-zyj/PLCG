/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = max(((((((var_10 ? var_5 : var_9))) ? (((max(var_5, var_7)))) : (max(-535337843004649395, 2073710251))))), var_0);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_8;
        arr_3 [i_0] = (((arr_1 [i_0] [i_0]) + -16810036));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_14 = (arr_5 [i_1]);
        arr_6 [i_1] [i_1] = (((arr_0 [i_1]) ? var_6 : (arr_0 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    var_15 = ((!((((arr_4 [i_2] [i_2]) | -16810048)))));
                    var_16 = ((((((arr_8 [i_3]) ? var_8 : (arr_14 [i_2 - 1] [i_2 + 3] [i_2] [i_2])))) ? (arr_0 [i_2]) : var_6));
                }
            }
        }
        var_17 = (((16810035 ? var_10 : var_3)));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    {
                        arr_24 [i_7] [i_6] [i_5] = 99;
                        var_18 = (~(arr_21 [i_2] [i_2 + 3] [i_2] [i_2 - 2] [11]));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        var_19 -= (min(((((var_11 < var_10) <= (max((arr_0 [i_8]), (arr_0 [13])))))), ((((((arr_26 [11]) <= var_7))) % (((var_9 + 2147483647) >> (var_5 - 164)))))));
        arr_27 [i_8] = var_9;

        for (int i_9 = 4; i_9 < 14;i_9 += 1)
        {
            var_20 = (min(var_20, ((((~34546) ^ ((65532 ? 1058658020 : 30989)))))));
            arr_31 [i_9] = (max((((~(arr_25 [5])))), (((arr_29 [i_9 - 2] [i_9 - 2] [i_8]) ? var_0 : (arr_29 [i_9 + 2] [i_9] [i_9])))));
        }
    }
    #pragma endscop
}
