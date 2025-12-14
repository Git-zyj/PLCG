/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_8, var_8));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = ((min(((min(var_6, 0))), (arr_1 [i_0]))) % 35807);

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_5 [i_0] = ((((((min(var_5, (arr_0 [i_0])))) ? 659850202337412526 : (-7451085810112918185 + -5565)))) + (arr_1 [i_0]));

            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                arr_9 [i_2] [i_2] [i_2] = (((arr_4 [i_0] [19] [i_2 + 3]) * ((((!(arr_4 [i_0] [i_1] [i_2 + 2])))))));

                /* vectorizable */
                for (int i_3 = 2; i_3 < 19;i_3 += 1) /* same iter space */
                {
                    arr_12 [i_3] [i_3] [i_3] [i_3] = ((-(arr_3 [i_2 + 2] [i_3 + 1])));
                    arr_13 [i_0] [i_0] [i_2] [i_3 + 1] = 1;
                    arr_14 [i_0] [i_0] [i_0] [i_0] = (arr_4 [i_0] [i_2] [i_2]);
                    arr_15 [i_0] [i_1] = ((44992 + ((~(arr_3 [i_0] [i_0])))));
                }
                for (int i_4 = 2; i_4 < 19;i_4 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_13 = (min(var_13, ((1 ? (arr_4 [i_4] [i_4] [i_4 - 1]) : 1))));
                        var_14 -= (((arr_0 [i_4 + 1]) ? (arr_18 [i_2 + 3] [i_0] [i_0]) : 0));
                    }
                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        arr_24 [i_0] [i_0] [i_2] [i_4] [14] = var_9;
                        arr_25 [i_6] [i_1] [i_1] [i_1] [i_0] = min(((((arr_22 [i_0] [i_0] [i_2] [i_2] [i_2 + 3] [4] [i_6 + 3]) + (max(var_8, var_7))))), (((~var_4) ? 10721063317829888495 : (arr_8 [i_2] [i_4 - 2] [5] [i_2]))));
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        arr_29 [i_2 + 3] [i_1] [i_0] = (((arr_28 [i_0] [i_2 + 3] [i_1] [i_0]) % ((-(((arr_11 [4] [i_1] [i_2] [i_4] [4] [i_0]) * (arr_17 [i_0] [i_0] [i_0] [i_0])))))));
                        var_15 *= ((~((+(((arr_1 [i_0]) ? 245 : 1))))));
                    }

                    for (int i_8 = 2; i_8 < 17;i_8 += 1)
                    {
                        arr_32 [i_4] [i_8 - 1] = ((~(((arr_23 [i_8] [i_4] [i_2] [i_1] [i_0]) % (arr_20 [i_0] [i_1] [i_2] [i_4 - 1] [6] [i_8])))));
                        var_16 *= (min(var_9, ((-(-2235024541564799946 + var_9)))));
                        var_17 = (max(var_17, (659850202337412526 % 1)));
                    }
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        arr_35 [i_9] [i_9] [i_4] [i_4 + 1] [i_1] [i_1] = (((((arr_23 [i_0] [9] [i_4] [i_9 - 1] [i_9]) ? (arr_23 [i_1] [i_1] [i_1] [i_9 - 1] [i_9]) : (arr_23 [i_9] [i_9] [i_9] [i_9 - 1] [i_9]))) % ((max(-1995, 510)))));
                        var_18 ^= (max((~7), (min(1992479609152071541, var_7))));
                        arr_36 [i_1] [i_1] [i_2] [i_4] [i_1] [i_9] = (min((((arr_8 [i_1] [6] [i_4] [i_4 - 1]) + 5273692308367547981)), ((max((arr_8 [i_0] [i_4] [i_4] [i_4 - 1]), 1)))));
                    }

                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        arr_39 [i_1] = (arr_38 [i_4] [i_4] [i_4] [i_4]);
                        arr_40 [i_0] [i_0] = (2 + -2235024541564799946);
                    }
                    for (int i_11 = 3; i_11 < 19;i_11 += 1)
                    {
                        arr_43 [i_11] [i_4] [i_0] [i_11] [i_1] [i_1] [i_0] = (arr_23 [14] [14] [i_1] [14] [i_1]);
                        arr_44 [i_0] [i_0] [i_0] [i_11] [15] [i_0] [i_0] = 441125004;
                        arr_45 [i_11 - 1] [i_4 - 1] [i_11] [i_0] [i_11] [i_0] [i_0] = var_9;
                    }
                }
                var_19 ^= (((~18446744073709551593) * (min((arr_19 [i_2 + 1] [i_2 - 2] [i_2 + 3] [i_2 + 2] [i_2 - 2]), var_9))));
                arr_46 [i_0] [i_0] = (((arr_30 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2]) ? (((~(arr_30 [i_2 + 1] [i_2] [6] [i_2 + 1] [6])))) : (arr_30 [i_2 + 1] [i_2] [1] [4] [i_2])));
            }
        }
    }
    #pragma endscop
}
