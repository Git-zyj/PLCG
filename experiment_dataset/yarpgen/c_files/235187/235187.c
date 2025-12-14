/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= ((~(!var_1)));
    var_19 = var_15;
    var_20 = (max(var_4, (min((~-17191), var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_21 = (min(var_21, -906238435));
                        var_22 ^= (((((arr_4 [i_1] [i_1]) >> (var_10 - 129))) + (((var_15 ? var_14 : var_7)))));
                    }
                    arr_12 [i_2] [i_0] = ((!(var_1 + 906238437)));
                    arr_13 [i_2] [i_2] [i_0] = -906238445;
                }
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    arr_17 [i_0] [i_1] [i_4] = (min((!-1), 142));

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        arr_21 [i_0] [i_5] [i_5] [i_5] [i_5] = (((255 ? var_11 : 728744192861247469)) >> ((((((var_2 ? (arr_3 [i_0] [i_0] [1]) : var_10))) < (min(var_3, var_1))))));
                        arr_22 [i_0] [i_5] [i_4] = -141;
                        var_23 = (arr_4 [i_0] [i_1]);
                    }
                    var_24 = ((~(49084 != -283318652109126500)));
                    var_25 = 1;
                    var_26 = var_2;
                }

                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    arr_25 [i_0] [i_1] [i_6] = (~141);
                    var_27 = (((~var_0) ? (((arr_2 [i_0]) * (arr_23 [i_6] [i_1] [i_6] [i_6]))) : (!1779009698)));
                }
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        var_28 = 2147483646;
                        arr_30 [i_0] [i_0] [i_1] [i_7] [i_8] = ((!((((15 ? 118 : 8897))))));
                        var_29 = var_3;
                    }
                    var_30 = ((-10912 == ((-((min(var_9, var_10)))))));
                }
            }
        }
    }
    #pragma endscop
}
