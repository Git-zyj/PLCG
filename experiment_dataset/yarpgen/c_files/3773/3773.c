/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (+(max((var_3 + 9198392840212011678), (var_14 < var_13))));
    var_18 = (((((1032939799 % var_0) ? (var_16 > 385790978) : (min(var_10, -6655787407762512710)))) >= ((51755 ? (max(1244683322, var_10)) : (~5)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 = var_13;
        var_20 ^= ((((-3181630263094512841 ? var_5 : (arr_0 [i_0])))) + var_16);
        var_21 = ((!(max((15899 > -3112118959469237634), (var_13 < -1845435425)))));
        arr_4 [i_0] = ((!(arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_22 -= 65535;
        var_23 = (arr_7 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 16;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_15 [i_1] [i_2] [i_1] [i_4] = var_4;
                        arr_16 [i_1] [i_4] = ((((221571606 ^ (min((arr_7 [i_1]), var_13))))) ? (((~var_16) >> (((arr_8 [11]) - 2033378885828323050)))) : var_15);
                        arr_17 [i_2] [i_1] [i_1] = min(((var_14 / (arr_14 [i_3 + 2] [2] [i_3 + 2] [i_3 + 2] [i_4]))), ((max(var_4, var_6))));
                    }
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        arr_20 [i_1] [i_3 + 3] [i_1] [i_1] = 1577258881;
                        var_24 = (arr_19 [i_5 + 3]);
                    }
                    arr_21 [i_1] = ((-var_10 >> (((min((min(var_4, 1811469506)), (!-948046894))) + 1992170085))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    var_25 = (max((arr_12 [i_1] [15] [i_7] [i_7]), var_16));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_26 = var_0;
                                var_27 *= ((((max(((-(arr_23 [i_7] [i_1]))), ((max(var_7, 1605046356)))))) ? (min((arr_25 [i_1] [i_6] [i_7] [i_8]), ((62053 ? (arr_23 [i_9] [i_8]) : (arr_5 [i_1]))))) : (arr_25 [i_9] [i_6] [i_7] [i_8])));
                                var_28 = (((max((arr_18 [i_1]), 2097151))) ? (arr_8 [i_1]) : (max(((var_2 ? var_9 : (arr_9 [i_1] [i_1]))), var_14)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            {
                arr_37 [i_10] = 14987;
                var_29 = (max((((-(arr_24 [i_10] [i_11] [13])))), (arr_24 [i_11] [i_10] [i_10])));
                var_30 = (((min((((arr_9 [i_10] [i_10]) ? -2454850954278763522 : 27644)), (((arr_25 [i_10] [i_10] [i_10] [i_10]) ? (arr_27 [i_11]) : var_1))))) ? 2068742747 : 44303);
            }
        }
    }
    var_31 = (min((((var_10 ? var_11 : var_10))), ((min(31, -1577954567)))));
    #pragma endscop
}
