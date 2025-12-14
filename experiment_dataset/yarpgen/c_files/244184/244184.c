/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = ((-550 * (((((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_1])))) || ((max(-4768092, (arr_4 [i_1])))))))));
                var_21 = (max(((((max((arr_0 [i_1]), (arr_3 [i_0 + 3] [i_0])))) || ((max((arr_3 [i_0] [i_0]), (arr_2 [i_0])))))), ((((!(arr_2 [i_1]))) && ((((arr_0 [i_0]) ? (arr_0 [i_1]) : -30789)))))));
                var_22 = (arr_3 [1] [1]);
                var_23 = ((!(-550 >= -4817193323127481410)));
            }
        }
    }

    for (int i_2 = 3; i_2 < 6;i_2 += 1)
    {
        arr_9 [i_2] [0] = (-30789 >= 232);

        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            var_24 = (max(462068008, 6));
            arr_14 [i_2 + 2] [i_2] = (59 >= 9142263653012679475);
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    {
                        var_25 = (min((max((((arr_12 [i_6] [i_5] [i_2]) ? (arr_8 [i_2 - 1]) : (arr_1 [i_6]))), (arr_5 [i_2] [13]))), (min((((arr_15 [i_2] [i_4] [i_4]) - -933985630)), ((((arr_18 [6] [i_4] [i_5]) ? (arr_16 [i_6]) : (arr_11 [i_4] [i_4] [i_4]))))))));
                        var_26 ^= (((-550 * -34) % (arr_12 [i_6] [i_5] [i_2])));
                    }
                }
            }
            arr_21 [i_2] [i_4] [i_2] = ((~((((arr_6 [i_2]) || ((max((arr_17 [i_2 - 3] [i_2 - 3] [i_4]), -11761))))))));
            var_27 = (max((max((1222385083 + -7018876747510825035), (max((arr_10 [i_4] [i_2]), 1)))), (((((arr_10 [i_4] [i_2]) * (arr_13 [i_4]))) % (arr_8 [i_4])))));
        }
        var_28 = ((549 ? (((0 + 134) + (((arr_4 [i_2]) % (arr_4 [10]))))) : ((((((-20319 >= (arr_15 [i_2] [i_2] [i_2]))))) % (max((arr_19 [i_2] [i_2] [i_2] [i_2 + 2]), (arr_1 [i_2])))))));
        arr_22 [i_2] = (min(((((arr_4 [i_2 + 4]) + (arr_2 [i_2])))), ((max((arr_15 [i_2] [1] [1]), (arr_7 [i_2 + 1] [i_2 + 1]))))));
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        var_29 = (min(var_29, ((((max((arr_3 [i_7] [i_7]), ((-31671 | (arr_4 [i_7]))))) + (arr_3 [i_7] [i_7]))))));
        arr_25 [i_7] = ((((((((min((arr_23 [i_7] [i_7]), (arr_23 [i_7] [i_7])))) && (((arr_24 [i_7]) || 79)))))) % (min(((max((arr_3 [i_7] [i_7]), (arr_0 [i_7])))), (arr_4 [i_7])))));
    }
    #pragma endscop
}
