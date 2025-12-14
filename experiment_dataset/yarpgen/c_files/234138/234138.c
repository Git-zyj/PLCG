/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((~0) - (((1 | 60393) * 1))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 = ((var_5 < (arr_1 [i_0])));

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            var_14 = (min(var_14, ((((((-(((arr_5 [0] [0]) ? (arr_4 [i_0] [i_0] [i_1]) : var_1))))) ? (((max((arr_1 [i_0]), (arr_4 [1] [i_1] [i_1 + 1]))))) : (!1))))));
            var_15 = ((-18169 ? (arr_0 [i_0] [i_0]) : (arr_2 [i_1 + 1])));

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                var_16 = (arr_3 [i_1 + 1]);

                /* vectorizable */
                for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                {
                    var_17 = var_6;
                    arr_10 [i_0] [i_0] [i_2] [i_0] [i_2] = ((((~4839528559847988681) + 9223372036854775807)) << 0);
                }
                for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                {
                    arr_14 [i_0] [i_2] = (((((arr_0 [i_1 - 1] [i_1 - 1]) + (arr_0 [i_1 - 1] [i_1 + 1]))) - (arr_1 [i_1])));
                    var_18 -= 1201960913749794804;
                }
                for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                {
                    var_19 = (min(var_19, 3846406701813872138));
                    arr_18 [i_0] [4] [i_1] [i_1] [i_0] = (((arr_9 [i_0] [i_1 + 1] [i_0] [i_2]) || (((arr_9 [5] [i_1 + 1] [i_0] [i_2]) && (arr_6 [i_0] [i_1 + 1] [i_1 + 1])))));
                    var_20 = ((((arr_11 [i_0] [i_1 - 1] [i_2]) ? (((8337888529099940654 << (((arr_2 [i_0]) - 36))))) : 13088239551519066364)));
                    var_21 = (((arr_9 [i_1 + 1] [i_1 + 1] [i_0] [i_5]) >= 682330838));
                }
                arr_19 [i_0] [i_1] [i_1 - 1] [i_2] = min((arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1]), (((((arr_13 [i_0] [1]) <= 1)) ? (((arr_16 [3] [3] [i_2] [i_0]) ? 3846406701813872131 : 31)) : ((min(var_10, (arr_16 [i_0] [i_2] [i_1] [i_0])))))));
                var_22 = (var_2 % ((-(~-9223372036854775785))));
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    arr_26 [14] [i_6] [10] [i_7] |= (((min(0, (arr_23 [i_6 + 2] [i_6 - 1]))) & (max((arr_23 [i_6 + 1] [i_6 + 2]), var_4))));
                    var_23 = (-127 - 1);
                    arr_27 [i_0] [0] [i_0] [i_7] = (~2675164759);
                }
            }
        }
    }
    #pragma endscop
}
