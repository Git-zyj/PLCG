/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_10 = var_3;
                arr_6 [i_1] = (arr_5 [i_1]);
                arr_7 [i_1] = ((21945 + (max(-9223372036854775801, -9223372036854775787))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
                {
                    var_11 = (max(var_11, (arr_3 [i_0] [i_1] [i_1])));
                    var_12 = (-var_5 && 1);
                    var_13 = (max(((~(var_1 * 1))), (((4201582941 > (arr_3 [i_0] [i_0] [i_0]))))));

                    for (int i_3 = 2; i_3 < 8;i_3 += 1) /* same iter space */
                    {
                        arr_14 [i_1] [i_1] = (arr_5 [i_1]);
                        var_14 = ((-(max(1, (min(4294963200, -16943))))));
                    }
                    for (int i_4 = 2; i_4 < 8;i_4 += 1) /* same iter space */
                    {
                        var_15 = ((~(((!(((arr_10 [i_0] [i_1]) || (arr_2 [i_4]))))))));
                        var_16 = (max((((((min(var_7, (arr_16 [i_0] [i_0] [i_1])))) != -1))), (arr_5 [i_1])));
                        var_17 = (var_6 & var_4);
                        var_18 = (max((((((min(var_5, (arr_9 [i_0] [i_1])))) ? ((max(var_5, 1))) : var_8))), ((-4070 ? 4069 : (var_8 + var_3)))));
                    }
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                {
                    var_19 ^= (((((4294963206 << ((((max(var_8, var_3))) - 136))))) ^ -9223372036854775803));
                    var_20 = ((-(arr_3 [i_5] [i_1] [i_0])));
                    arr_20 [i_0] [i_0] [i_5] [i_1] = ((((var_7 ? var_1 : var_8))) ? (!83) : ((max(var_4, var_0))));
                }
                for (int i_6 = 1; i_6 < 8;i_6 += 1) /* same iter space */
                {
                    var_21 = ((((((arr_15 [3] [i_0] [3] [i_0] [i_0] [i_6 + 4]) - (arr_4 [i_1] [i_6 + 4] [i_6 + 2])))) ? (!4090) : ((min(var_5, (max(var_6, var_1)))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_22 &= (((~1) ? (arr_27 [i_7] [i_1] [i_1] [i_1] [i_1]) : (max(-4294963174, ((((arr_24 [i_7] [i_7] [i_7]) - 5273)))))));
                                var_23 = (max(177, 4294963174));
                            }
                        }
                    }
                }
                for (int i_9 = 1; i_9 < 8;i_9 += 1) /* same iter space */
                {
                    arr_32 [i_0] [i_1] [i_1] [i_9] = (min((min(var_3, var_8)), (!16775701427852303941)));
                    var_24 = (max(var_24, (max(var_4, (arr_8 [i_0] [i_1] [11])))));
                    arr_33 [i_0] [i_1] [i_9] = ((!((((4090 + var_2) ? (!var_7) : (!var_7))))));
                }
            }
        }
    }
    var_25 |= ((~(((!((max(-20686, 4123))))))));
    #pragma endscop
}
