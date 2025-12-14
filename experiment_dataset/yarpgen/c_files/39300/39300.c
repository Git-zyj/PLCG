/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((((-17865 | -2785919683820988648) ? (~var_13) : -var_9)), -var_13));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 = ((((((arr_2 [i_0 - 1]) ? (arr_5 [i_0 - 1]) : 2785919683820988671))) ? ((~(max((arr_6 [i_0 - 2] [i_0 - 2]), -125)))) : ((((((arr_2 [i_2]) ? 59384 : var_14)) >> (((((arr_8 [i_0 + 1] [i_0] [i_1] [i_0 + 1]) % (arr_6 [i_2] [i_0 + 1]))) - 26828)))))));
                    var_19 = -2785919683820988645;
                }
            }
        }
    }
    var_20 = 53842;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                var_21 = (max(((max((max(var_0, (arr_11 [i_4]))), (arr_15 [i_4] [i_3])))), (((arr_11 [i_4]) ? 31 : var_13))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        {

                            for (int i_7 = 2; i_7 < 20;i_7 += 1)
                            {
                                var_22 = 9223372034707292160;
                                var_23 = (max(1, 0));
                            }
                            for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                            {
                                var_24 = (((((arr_13 [i_4] [i_4] [i_5 + 1]) ? 15370 : (arr_13 [i_5] [i_4] [i_3])))) ? (((arr_13 [i_3] [i_4] [i_5 + 1]) ? (arr_13 [i_5 + 1] [i_6] [i_8]) : var_0)) : var_2);
                                var_25 = (((min(var_14, var_10)) % (((max(14, (!1)))))));
                            }
                            for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                            {
                                var_26 = 67108864;
                                var_27 = (((min(var_3, 2785919683820988697)) < (arr_11 [i_5 + 1])));
                            }
                            for (int i_10 = 0; i_10 < 23;i_10 += 1)
                            {
                                var_28 = ((!(((arr_14 [i_5 + 1] [i_4] [i_4]) && (arr_23 [i_5 + 1] [i_5] [i_5] [i_5] [i_5 + 1] [i_5 - 1])))));
                                var_29 = (min(((((arr_26 [i_6] [i_5] [i_5 - 1] [i_5] [i_5 - 1] [i_5] [i_5]) <= -202396773))), (((arr_26 [i_10] [i_10] [i_10] [i_10] [i_5 - 1] [i_5 + 1] [i_4]) | var_5))));
                                var_30 = (((max((31 != 58982), ((-20581 ? (arr_20 [i_10] [i_6] [i_5] [i_4]) : 32150)))) < (((arr_20 [i_5 - 1] [i_5] [i_5] [i_5 + 1]) ? -2444 : 61447))));
                            }
                            var_31 = ((((max(205, (arr_27 [i_5 - 1] [i_5] [i_5 + 1] [i_5 - 1])))) != (arr_27 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 + 1])));
                            var_32 = ((!((((!-30463) ? (((var_9 || (arr_19 [i_3] [i_4] [i_5 - 1] [i_5] [i_5 - 1] [i_6])))) : ((max((arr_19 [i_3] [i_4] [i_4] [i_4] [i_5] [i_6]), 56))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
