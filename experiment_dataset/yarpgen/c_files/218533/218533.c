/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 = ((((-108 ? -111 : 32767)) / ((((arr_0 [i_0]) || (arr_2 [i_0]))))));
        var_18 &= (46287 * 243);
        var_19 = 0;
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 7;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 9;i_3 += 1)
            {
                {
                    var_20 *= ((((((arr_2 [i_2]) ? 13192 : 5)) >> (((arr_10 [i_3] [i_2] [i_1]) - 3998995475)))));
                    var_21 = (arr_6 [i_1 - 1]);
                }
            }
        }
        var_22 = (arr_10 [i_1] [i_1] [i_1]);
        var_23 = (arr_4 [i_1]);
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_24 = (arr_14 [i_4]);
        var_25 = -1;
        var_26 = (((65530 / (arr_13 [i_4]))));
        var_27 ^= (((((arr_13 [i_4]) < (((9166113144823613785 ? var_4 : (arr_14 [i_4])))))) ? ((((((arr_14 [21]) - (arr_13 [i_4])))) ? -60867 : 1929828631)) : (((239 ? 32 : -49)))));
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 4; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                arr_31 [i_5] [i_5] [i_8] [i_5] [i_8] [i_6] [i_6] = (max((min(10255, 2)), (var_2 != var_16)));
                                var_28 = (min(var_28, (((((~(arr_15 [i_8 + 2]))) * ((max(6522, (arr_29 [i_6] [8] [i_6 - 1] [i_6 - 1] [0] [i_8 - 2])))))))));
                                var_29 = 1732123304;
                                arr_32 [i_9] [i_6] [i_9] [i_6] [i_9] = min(6, (max((-9223372036854775807 - 1), (arr_23 [i_6] [i_6] [i_9]))));
                            }
                        }
                    }
                }
                var_30 = (min(var_30, (((((max((arr_25 [i_5] [i_6 + 2] [i_6] [2]), -123))) ? 687305981 : (min(2064800681, ((7575755394783900398 ? 72 : 2218163715)))))))));
                var_31 -= (((arr_13 [i_5]) ? (arr_19 [4] [i_6 - 1]) : ((((arr_19 [4] [i_6 + 2]) && -10241)))));
            }
        }
    }
    #pragma endscop
}
