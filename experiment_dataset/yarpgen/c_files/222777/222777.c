/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_9, 24927));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_0 [i_0]) % ((max(var_3, (min((arr_0 [i_0]), var_1)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_12 = (max(((((arr_4 [i_2] [i_1]) ? 1433614951 : (arr_0 [i_1])))), (arr_6 [i_0] [i_1] [i_2])));
                    arr_8 [i_0] = (max(((((((max(var_8, var_10)))) <= (min(18446744073709551593, (arr_3 [i_0] [i_0])))))), (max(var_8, (arr_6 [i_2] [i_1] [i_0])))));
                    arr_9 [i_0] [i_0] [i_2] = (max(((-7597595638544303336 ? (((max(22, 23)))) : ((2093056 + (arr_5 [16] [16] [0]))))), var_6));
                    arr_10 [i_1] [i_2] [9] = var_8;

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_13 = (min((((-(arr_6 [i_0] [i_1] [i_2])))), (max(((127 ? 8522396549877147882 : (arr_7 [i_0] [i_0]))), ((max((arr_0 [i_0]), var_6)))))));
                        var_14 -= (max((arr_5 [i_0] [i_2] [i_2]), (((((arr_12 [i_0] [i_0] [i_2] [i_0]) ? 92 : 18))))));

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            var_15 = (((((min((arr_4 [i_1] [i_3]), (arr_11 [i_0] [i_0] [i_2] [i_3]))))) * ((var_7 ? (4294967154 - 126) : (min(8522396549877147850, -9069541997306140999))))));
                            var_16 = (((((8522396549877147848 ? var_7 : 1023))) <= ((min(110, var_0)))));
                            var_17 = ((((((max(var_0, var_1))) || var_1)) ? (min(((var_3 ? var_4 : -114)), (((arr_4 [16] [16]) * var_4)))) : var_7));
                        }
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            arr_21 [i_5] [i_1] [i_0] [i_1] [i_0] |= ((21179 >> (8522396549877147845 - 8522396549877147837)));
                            var_18 = ((206 ? -24 : 97));
                            var_19 -= 75;
                            arr_22 [i_0] [i_2] [i_0] |= (max((((((var_3 ? var_5 : (arr_18 [i_0] [i_3] [14] [18] [i_0])))) * (~279161692003905586))), ((min(var_6, (((var_6 ? var_1 : var_1))))))));
                            var_20 = ((-(((max(9924347523832403764, (arr_12 [6] [i_0] [i_0] [i_3]))) >> (((arr_14 [i_5] [i_3] [i_2] [i_1] [i_0]) - 2321257536792650614))))));
                        }
                    }
                }
            }
        }
        var_21 = ((+(min(var_5, ((var_6 ? (arr_11 [i_0] [i_0] [i_0] [i_0]) : -8731946560516916319))))));
        var_22 = ((max(((max(127, var_10))), var_6)) / -18);
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            var_23 ^= (min(((max(var_8, -var_3))), ((((((var_4 ? (arr_12 [i_6] [i_7] [i_7] [i_7]) : (arr_1 [i_6]))) + 9223372036854775807)) >> var_5))));
            var_24 = (min((((min(var_6, 9924347523832403731)) % ((max(-1449685145427211550, var_7))))), (((0 ? (-7317613424653004781 || 0) : (!var_10))))));
            var_25 = (min(var_25, ((max((((var_10 - ((((arr_17 [8] [8] [8] [1] [i_7]) && (arr_17 [1] [4] [i_7] [10] [i_7]))))))), (arr_12 [i_6] [i_6] [i_7] [i_7]))))));
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            arr_29 [i_8] [i_8] [i_8] = var_8;
            var_26 = (max(var_26, (((~(min((arr_27 [i_6]), var_0)))))));
        }
        var_27 = (min(var_27, var_6));
        var_28 = var_3;
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
    {
        arr_34 [i_9] = ((((max(var_3, 9924347523832403776))) <= var_4));
        var_29 = (((((arr_14 [i_9] [i_9] [13] [18] [i_9]) * var_0))) && ((var_1 > (arr_14 [i_9] [i_9] [i_9] [i_9] [i_9]))));
        arr_35 [i_9] = (((~var_2) ? -9069541997306140987 : 15120386399304447355));
        var_30 -= -65515;
    }
    #pragma endscop
}
