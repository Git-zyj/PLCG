/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_16 = (((arr_0 [i_0 - 3]) ? var_10 : (arr_0 [i_0 - 3])));
            var_17 = ((arr_3 [i_0 + 3] [i_0 + 3]) >= ((var_2 ? (arr_3 [i_0 - 2] [i_0 - 2]) : var_12)));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_8 [i_0] [i_2] [i_0] = ((4597608060138860665 ? (var_0 % 3) : (var_2 ^ 30417)));
            var_18 = ((1 ? 12298791780884146004 : 6202951370673841089));
        }
        var_19 = (~var_2);
        var_20 ^= (arr_5 [i_0] [i_0]);
        arr_9 [i_0] = (min(-1, 6313737275049604756));
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 10;i_5 += 1)
            {
                {
                    arr_19 [i_5] = var_1;
                    arr_20 [i_5] [i_3] [i_3] [i_3] = (max((max(((var_2 ? (arr_12 [i_3]) : (arr_16 [i_3] [i_4] [i_4] [i_5 - 1]))), (13849136013570690951 && var_5))), ((min(28, 761227161796776660)))));
                    var_21 = arr_11 [i_4] [i_5];
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_22 = 1;
                                var_23 *= min(((((arr_10 [i_7]) ? 6147952292825405637 : 6))), (arr_13 [i_6]));
                                arr_25 [i_3] [i_5] [i_3] [i_3] [4] = (arr_13 [i_3]);
                                arr_26 [i_3] [i_3] [i_4] [i_5] [i_5] [i_7] [i_7] = 28;
                                arr_27 [i_3] [12] [12] [i_5] [i_7] = 18409275955894805313;
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = var_4;
    #pragma endscop
}
