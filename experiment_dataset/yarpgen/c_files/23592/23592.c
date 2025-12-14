/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_17);
    var_21 = (min(var_21, ((min(-var_16, (max(-29802, (max(var_7, var_11)))))))));

    for (int i_0 = 4; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_22 = (((((max(var_5, 4611686018427387902)) & (((max(var_18, var_3)))))) != ((((~(-127 - 1)))))));
        var_23 = (((var_10 % var_15) ? (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0 + 2] [i_0 - 1]) : ((-(arr_0 [i_0] [i_0 + 2]))))) : 127));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] |= (min((((-(arr_1 [i_0 - 1] [i_0 - 3])))), (max((((arr_1 [i_0] [i_0]) - (arr_3 [i_1]))), ((max((-127 - 1), (arr_2 [i_0 - 4] [i_0 - 4] [i_0 - 4]))))))));
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [i_2 + 3] [i_1] = (~(arr_9 [i_3] [i_2 + 4]));
                        var_24 = (min(-var_10, ((((max(var_17, var_11))) ^ ((min(var_16, 0)))))));
                        arr_11 [i_0 + 1] [i_1] [i_2 + 1] [i_1] = (((((+((((arr_6 [i_0 - 2]) && 18446744073709551594)))))) ? (max(var_16, (max((arr_7 [i_0] [i_2 + 4] [i_1] [i_0]), 29802)))) : ((min(((((arr_0 [i_2] [1]) ? 127 : (arr_2 [i_3] [i_1] [i_0])))), var_3)))));
                        arr_12 [i_0] [i_0 + 1] [i_0] [i_1] = var_12;
                    }
                }
            }
            var_25 -= ((~(((arr_3 [i_0 - 1]) ? (arr_3 [i_0 + 2]) : var_8))));
        }
        for (int i_4 = 3; i_4 < 17;i_4 += 1)
        {
            var_26 = ((((((arr_6 [i_0 - 4]) + (arr_6 [i_0 - 3])))) ? (arr_8 [i_4] [i_0 + 2] [i_4 - 3]) : ((((arr_14 [i_4]) ? (var_9 || 5336336174171840513) : (((arr_1 [i_0] [i_0]) ? var_17 : var_11)))))));
            var_27 = ((((((var_12 + var_15) / (min((arr_6 [i_0]), (-127 - 1)))))) ? 101 : (((max(var_8, var_14)) / 127))));
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_28 = 1;
            var_29 ^= ((-var_7 ? (((arr_8 [i_0] [i_0] [i_0]) + (arr_6 [0]))) : (arr_17 [i_0] [i_0] [i_0])));
        }
        arr_21 [i_0] = (((-127 - 1) || ((max(-12, (arr_2 [i_0 - 2] [i_0 - 2] [i_0 - 2]))))));
    }
    for (int i_6 = 4; i_6 < 16;i_6 += 1) /* same iter space */
    {
        var_30 = (min(var_30, var_4));
        arr_25 [i_6] = (-((var_17 ? (arr_16 [i_6 - 2] [i_6] [i_6 + 2]) : (max(25, (arr_0 [i_6] [i_6]))))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 17;i_8 += 1)
            {
                {
                    var_31 = ((var_2 ? (((((((arr_2 [i_7] [i_7] [i_6]) ? var_13 : var_19)) < ((((arr_18 [i_6 - 3] [i_7] [i_8]) ? var_7 : -29803))))))) : (arr_8 [i_6] [i_7] [i_7])));
                    var_32 = (max(var_32, (((~(arr_18 [i_8 - 1] [i_7] [i_6]))))));
                }
            }
        }
    }
    var_33 = (~var_15);
    var_34 = var_7;
    #pragma endscop
}
