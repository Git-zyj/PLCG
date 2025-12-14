/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_12 = var_9;

                    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        var_13 += 29;
                        arr_11 [i_2] [i_0] [0] [i_1] [i_2] [i_3] = ((226 << 0) & var_0);
                        var_14 = max(var_11, (~var_1));
                        arr_12 [6] [i_2] [3] [i_3] = -var_10;
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        var_15 = ((+(((arr_10 [i_2 + 1] [i_1] [i_2 - 1] [i_1] [i_1] [i_1]) / 4294967291))));
                        var_16 += ((((var_5 && (!var_3)))));
                        var_17 = 206;
                        var_18 = (min((arr_7 [i_2] [i_0] [i_2 + 1]), (~var_9)));
                    }
                    arr_15 [i_0] [i_0] [i_2] = arr_14 [i_2 - 1] [i_0] [i_0];

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_19 = (((14 - 1427514992) <= var_0));
                        arr_19 [i_2] [i_2] = 183;
                        var_20 -= ((((33553408 & (arr_18 [i_0] [i_1] [4] [i_5])))) & var_6);
                        var_21 = (-((161925222 ? (arr_18 [i_2 - 1] [i_2] [i_2 + 1] [i_2]) : var_6)));
                    }
                    var_22 += (10 & 23);
                }
            }
        }
    }
    var_23 -= var_11;
    /* LoopNest 3 */
    for (int i_6 = 1; i_6 < 9;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 9;i_8 += 1)
            {
                {

                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        var_24 = (((((arr_0 [i_6 + 1] [i_8 - 1]) & (arr_0 [i_6 + 1] [i_8 - 1]))) << (var_8 - 16)));
                        arr_30 [i_6] = ((((var_10 << (var_9 - 40))) & 216852811));
                    }
                    for (int i_10 = 3; i_10 < 9;i_10 += 1)
                    {
                        arr_34 [i_7] [i_6] [i_6] [i_7] = (33553408 & 224);
                        var_25 += var_2;
                    }

                    for (int i_11 = 3; i_11 < 8;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            var_26 *= 4078114465;
                            var_27 = (((min((arr_35 [i_6] [i_8 - 2] [i_6]), (arr_36 [i_6] [i_11] [8] [i_11 - 1])))) ? (arr_9 [i_12] [i_6] [i_6] [i_6 - 1]) : ((((arr_10 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) >> (var_8 - 2)))));
                            arr_40 [i_7] [i_7] |= 143;
                            var_28 = ((((-(~var_2)))) ? (((min(var_8, (14 < 190))))) : ((1297838501 >> (min(2183218427, (arr_35 [i_6] [i_8] [i_6]))))));
                        }
                        for (int i_13 = 2; i_13 < 6;i_13 += 1)
                        {
                            var_29 = ((((max(var_0, (arr_42 [i_8] [i_8 + 1] [i_11] [i_6] [i_11])))) || (((arr_8 [i_6] [i_7] [i_6] [i_11] [i_13 + 4] [i_6]) && ((min(var_10, var_1)))))));
                            arr_45 [i_6] [i_7] [i_8] [i_11 + 1] [i_13] [i_7] |= max(((min(var_5, 112))), (2792873245 + 4294967293));
                            arr_46 [i_6] [i_7] [i_7] [4] [4] = var_0;
                        }
                        var_30 *= (max(((2 | ((4078114476 | (arr_35 [i_6] [i_7] [i_8]))))), (min((min(2815995436, 33)), (min(var_4, 28))))));
                    }
                    var_31 *= 33;
                    var_32 += ((-(!var_6)));
                    var_33 = (--99);
                }
            }
        }
    }
    #pragma endscop
}
