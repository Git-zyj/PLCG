/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((min(-30460, 1)));
    var_16 = (((7609387183022758761 ? 30447 : 0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = -1928650865;
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        {
                            arr_10 [i_2] [i_1] [i_1] [i_3] [i_0] = ((29614 == (min(((0 >> (var_10 - 3262684830))), 210))));
                            var_18 = (max(var_18, 0));
                            arr_11 [i_0] = (2097088 >= 1);
                            var_19 *= (((var_0 ^ var_0) ? var_7 : (((min((arr_5 [i_2 - 3] [i_2 - 2] [i_3 + 1] [1]), 14804))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 16;i_5 += 1)
        {
            {
                var_20 &= ((-(min((arr_14 [16]), -2041068091))));
                var_21 = (!-1);
                var_22 &= (((((var_12 ? 158 : 1134))) & 7691834994903360707));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        {

                            for (int i_8 = 0; i_8 < 19;i_8 += 1)
                            {
                                arr_22 [i_4] = (((((!(9221120237041090560 ^ var_3)))) % (((var_13 ? -30460 : -2495238964877945169)))));
                                arr_23 [i_4] [i_4] [i_4 - 2] [i_4 - 2] [i_4] = (min(var_7, ((((var_4 > 2456910580) || (((1 ? 97 : 65535))))))));
                                var_23 = (min(((((175 ? 9 : 2273028)))), ((-(arr_15 [i_4 - 2] [1] [i_4 - 2])))));
                            }
                            for (int i_9 = 0; i_9 < 19;i_9 += 1)
                            {
                                arr_27 [i_4 + 1] [4] &= (((min(65535, 2625000994)) - (((-15 ? (arr_20 [16]) : -1)))));
                                var_24 = -239795680;
                            }
                            var_25 = (18330 ^ -72);
                        }
                    }
                }
            }
        }
    }
    var_26 = (min(var_26, (((65511 ? ((((min(var_11, -10642))))) : (((min(3844923162, 0)) ^ var_9)))))));
    #pragma endscop
}
