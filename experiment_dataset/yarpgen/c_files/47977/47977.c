/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = (min(var_19, (arr_1 [i_0])));
        var_20 |= (174 != var_13);
        var_21 = (min(var_21, (((!(((~(arr_1 [i_0])))))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_22 = ((-(arr_2 [i_0])));
            var_23 = (~39372052132840944);
        }
        arr_4 [i_0] = (((arr_2 [i_0]) ^ 270263016));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            arr_11 [i_3] [i_3] = ((max(((max(var_9, var_18))), (min(81, (arr_10 [i_2] [15] [i_2]))))));
            var_24 = (max(var_24, ((min(((((arr_6 [i_2]) ? (arr_5 [i_2]) : (arr_1 [i_2])))), (((var_5 ? (arr_9 [1] [16]) : 13591))))))));
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_25 = (((((arr_0 [i_4]) ? (arr_1 [i_2]) : var_5)) | (!var_10)));
            var_26 -= (((arr_10 [i_2] [14] [i_2]) ? (((81 ? 3767009745 : 47))) : (((!134217696) ^ (((arr_10 [19] [i_4] [i_4]) ^ (arr_10 [i_2] [i_2] [7])))))));

            for (int i_5 = 2; i_5 < 17;i_5 += 1)
            {
                var_27 = var_11;

                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    var_28 ^= 1;
                    arr_19 [14] [i_4] [i_5] [18] |= ((((!(arr_10 [i_5] [i_5] [i_5 + 1]))) ? (max((arr_14 [i_4] [i_5] [0]), ((var_6 ? 8 : (arr_1 [i_2]))))) : (~2195679558)));
                    var_29 *= (((-9223372036854775807 - 1) ? (-127 - 1) : ((81 ? (arr_12 [i_5 - 1] [i_5 + 1]) : var_12))));
                    var_30 = (max(1, (-2147483647 - 1)));
                    var_31 = (min(var_31, (arr_16 [i_4] [i_5] [i_5 + 1] [i_5 + 1] [14])));
                }
                arr_20 [11] [i_4] [i_5] [i_4] = ((((((((arr_10 [19] [i_4] [i_4]) ? 247 : (arr_7 [i_2])))) ? (max(268433408, 4855173002796743180)) : var_6))) ? (arr_5 [i_2]) : ((((arr_5 [i_2]) ? 0 : (arr_15 [i_2])))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_32 = (max(var_32, (arr_1 [i_2])));
                            arr_28 [2] [1] [i_5] = ((((((((81 ? 81 : -651))) ? (arr_14 [i_5] [i_4] [i_4]) : (arr_6 [i_2])))) ? (((((arr_17 [8] [i_4] [i_4] [2] [i_4]) ? 18446744073441118207 : (arr_15 [i_2]))) / (((var_0 ? var_6 : (arr_5 [i_2])))))) : 2879637308));
                        }
                    }
                }
            }
            for (int i_9 = 3; i_9 < 19;i_9 += 1)
            {
                var_33 = ((+(((arr_30 [i_9] [i_9 - 2] [7]) ? 18446744073441118207 : var_1))));
                var_34 = var_18;
            }
            arr_31 [i_2] [i_2] |= var_6;
        }
        arr_32 [i_2] |= ((((((arr_12 [i_2] [i_2]) ? (arr_6 [i_2]) : (arr_3 [i_2] [0])))) ? ((var_1 ? 944472289 : var_18)) : (arr_3 [i_2] [i_2])));
        var_35 = ((18446744073441118207 ? 10628 : 247));
    }
    var_36 -= var_15;
    var_37 |= ((((((-134217697 + 9223372036854775807) >> (268433409 - 268433388)))) ? var_9 : (max(var_16, var_14))));
    #pragma endscop
}
