/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_4, ((max(var_1, (~227))))));
    var_17 = (max(var_17, ((((var_4 * -4031899127994453940) ? var_10 : var_13)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = -4031899127994453922;
        arr_3 [i_0] = (max(8625026980138647517, (arr_1 [i_0] [3])));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_11 [i_0] = (((max((var_13 - 5981), -32)) == (((224 < -4031899127994453927) ? (arr_6 [i_0] [i_0]) : ((65534 ? 29 : 107))))));
                    arr_12 [i_0] [i_1] [i_2] [i_1] = ((!((min((((-1749561201 ? 9 : (arr_10 [i_0] [i_0] [i_0] [i_0])))), (((-9223372036854775807 - 1) ^ var_10)))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_18 = ((4031899127994453922 ? (-32767 - 1) : 1));
        arr_17 [i_3] = var_12;
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        arr_22 [i_4] [i_4] = ((49280 ? var_11 : (min(var_3, (arr_21 [i_4])))));
        var_19 = (max(var_19, ((((arr_20 [i_4] [i_4]) ? var_8 : var_9)))));
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 16;i_6 += 1)
            {
                {
                    var_20 = (arr_9 [i_6 + 1] [i_5] [i_4] [i_4]);
                    arr_29 [i_6 + 2] [i_6 + 2] [i_5] [i_4] = (((!var_2) ? (arr_9 [i_5] [i_5] [i_6] [i_4]) : ((((227 >= (((var_9 <= (arr_10 [i_6] [i_5 + 2] [i_5] [i_4]))))))))));
                }
            }
        }

        /* vectorizable */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                var_21 ^= ((0 ? -13146 : 6254841433474432991));
                arr_35 [i_4] [i_7] [i_4] [i_7] = var_13;
            }
            arr_36 [i_4] [i_4] = (((15650812873309662402 >= var_9) << ((((arr_10 [i_4] [i_4] [i_4] [i_4]) || (arr_32 [i_4] [i_7] [i_7]))))));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            var_22 = (((arr_0 [i_4] [i_4]) == 54845));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    {
                        var_23 = arr_6 [i_11] [i_4];
                        arr_45 [i_4] [i_9] [i_10] = ((var_12 >= (arr_4 [i_4] [16])));
                        arr_46 [i_4] [i_4] [i_4] [i_4] [i_9] [i_11] = ((!((var_14 <= (arr_4 [i_4] [i_9])))));
                        arr_47 [i_9] [i_10] [i_9] [i_9] [i_9] = (((var_0 * 11) ? var_3 : (4503049871556608 / 49294)));
                        arr_48 [i_9] [i_9] [i_10] [i_11] = 524224;
                    }
                }
            }
        }
        for (int i_12 = 3; i_12 < 15;i_12 += 1)
        {
            arr_53 [i_4] [i_12 + 1] [i_12 - 3] |= -11;
            var_24 = (max(var_24, ((max((arr_30 [i_4] [i_4] [i_4]), (((var_14 | 65534) ? ((~(arr_25 [i_12]))) : var_10)))))));
            arr_54 [i_12 - 2] [i_12 + 4] [i_4] = (((arr_26 [i_4] [i_4] [i_12 - 2] [i_12 + 2]) ? (max((~-1645683857226261419), (((~(arr_8 [i_12] [i_12 + 4] [i_4])))))) : ((((65535 ? 7858303526423035160 : var_6))))));
        }
    }
    #pragma endscop
}
