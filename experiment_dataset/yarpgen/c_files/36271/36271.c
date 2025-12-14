/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(8484, var_1));

    for (int i_0 = 2; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_11 ^= ((!((max((arr_1 [i_0 + 1]), var_6)))));
        var_12 ^= (arr_1 [i_0 - 1]);
        var_13 = (min(var_13, (!5317751567242269408)));
        arr_2 [i_0 - 1] = ((((var_0 ? (((15303 >= (arr_1 [9])))) : var_8)) << (-754928712977985920 + 754928712977985938)));
        var_14 = (((var_1 - (max(18446744073709551603, 37641)))));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_7 [0] [i_1] = ((((-754928712977985921 ? (!var_5) : ((max((arr_1 [i_1 - 1]), var_7))))) << ((((arr_4 [i_1]) || (((-(arr_0 [i_1])))))))));

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_12 [10] [i_2] = ((!(((~((var_5 ? var_2 : var_7)))))));
            var_15 = var_9;
            var_16 = 17137045755621608304;
            var_17 = (max(((((arr_8 [i_1 - 2] [i_2]) <= (arr_8 [i_1 - 2] [i_2])))), (-28626 ^ 17)));
        }
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            var_18 ^= ((((((var_1 ? var_7 : (arr_6 [i_1 - 1]))) * var_2)) | (6144 < 6628354670905204358)));
            arr_16 [1] |= max(((((max(var_6, var_0))) ? ((-6072448729842049853 ? (arr_14 [0]) : (arr_6 [18]))) : var_2)), 12520);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        var_19 += ((~(max(-6072448729842049853, -1450635068454190364))));

                        for (int i_6 = 4; i_6 < 17;i_6 += 1)
                        {
                            var_20 *= (((((arr_23 [i_6 - 2] [i_6 - 2] [i_6 + 1] [i_6 - 2] [i_6 - 2] [i_6 - 2]) ? (arr_23 [i_6 - 4] [i_6] [i_6 - 3] [17] [i_6 - 2] [i_6 + 3]) : var_7)) <= -6628354670905204331));
                            arr_24 [i_3] [i_3 + 1] = ((((max((arr_13 [i_3] [i_1 + 1]), var_0))) > (arr_21 [i_3] [i_5] [i_5] [i_4] [i_3] [i_3])));
                            var_21 = (max(var_21, (arr_5 [i_1 - 1] [i_1 - 1])));
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 16;i_7 += 1)
                        {
                            var_22 = (((((var_6 ? var_0 : (arr_21 [i_3] [19] [i_4] [i_1] [19] [3])))) ? (((((arr_8 [i_1 - 2] [i_3]) || var_5)))) : var_2));
                            var_23 = ((-5271289715601553308 ? var_3 : 5271289715601553300));
                        }
                        arr_27 [i_3] [i_3 + 1] [i_5] = ((((~(max(var_8, var_9)))) == ((max((max(var_1, var_3)), (((26549 < (arr_10 [i_3] [i_3])))))))));
                    }
                }
            }
            arr_28 [i_3 + 1] [i_3] = -var_7;
            arr_29 [i_3] = -1;
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            arr_32 [i_8] = ((-(arr_31 [i_1 - 1])));
            var_24 = ((-(arr_8 [i_1 + 1] [i_8])));

            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                arr_37 [i_1 - 1] [i_8] [i_8] [i_1] = (((((-(arr_10 [i_8] [i_9])))) ? ((-(arr_31 [i_1]))) : -15));
                var_25 = 5271289715601553307;
                var_26 = ((var_0 ? (!var_5) : var_2));
            }
        }
    }
    for (int i_10 = 2; i_10 < 19;i_10 += 1) /* same iter space */
    {
        var_27 = ((-((-(((arr_21 [i_10] [i_10] [13] [i_10 + 1] [i_10] [i_10]) ? (arr_36 [i_10]) : (arr_17 [i_10 + 1] [i_10] [i_10])))))));
        var_28 += (((arr_30 [2]) ? (((-((var_0 ? var_0 : 1))))) : ((var_1 ? var_3 : (-9223372036854775807 - 1)))));
        arr_41 [i_10] [i_10] = (~((max(1109998338491981187, (arr_0 [i_10])))));
    }
    #pragma endscop
}
