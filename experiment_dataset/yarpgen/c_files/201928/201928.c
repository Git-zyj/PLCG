/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = min((arr_1 [i_0]), (min(1, 5869)));
        arr_4 [i_0] [i_0] = 1;
        var_17 = (((((((arr_2 [4]) == (arr_0 [i_0] [i_0]))) ? ((-436243316 ? 780343719 : var_3)) : (192 < 1))) > (((var_2 ? var_15 : ((268435455 ? -6986732259630833314 : var_16)))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_18 = (arr_8 [9]);
        arr_9 [i_1] = arr_5 [i_1] [1];

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_19 = (arr_2 [i_2]);

            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                var_20 = (max(var_20, (((var_4 ? 4026531862 : var_5)))));

                for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                {
                    var_21 = (~((9796 ? 245 : 0)));
                    var_22 = (((var_3 ? var_15 : (arr_7 [2]))));
                    var_23 = -5964300577645499096;
                }
                for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_24 = (arr_20 [i_6] [i_6]);
                        var_25 = -1960517000;
                        arr_23 [i_6] [i_6] [i_1 - 1] [i_6] [i_1 - 1] = (((((var_14 ? 0 : (arr_5 [i_1] [i_2])))) ? 10571057870335314840 : (arr_15 [i_1] [i_2] [i_1] [16] [i_6] [20])));
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        arr_26 [i_2] [i_5] [i_3] [i_5] [i_5] = ((-(arr_0 [i_1 + 1] [i_1 - 2])));
                        var_26 = (((((192 % (arr_5 [9] [i_2])))) % (arr_15 [i_3 - 1] [i_3] [i_3 - 1] [0] [i_3] [i_3])));
                        var_27 = (-1053121373 < 34359738367);
                        var_28 = (((((~(arr_19 [i_5] [i_1])))) < (arr_25 [i_1 + 3] [i_1] [i_1] [i_1 + 2] [15])));
                    }
                    var_29 = (arr_11 [i_1 - 1] [16]);
                    var_30 += ((1 ? -6986732259630833305 : 18029));
                }
            }
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                var_31 = (((~var_3) ? ((8 ? (arr_14 [i_8] [i_2] [i_1] [i_1]) : (arr_18 [i_1] [i_1 + 3] [i_1 - 2] [i_1 + 1] [i_1] [i_1 + 3]))) : (arr_24 [i_8] [i_8] [i_2] [i_2] [i_1 - 1] [i_1])));
                var_32 = (((((-6986732259630833331 ? (arr_14 [i_1] [i_2] [i_8] [i_8]) : (arr_20 [i_2] [i_2])))) ? (((arr_24 [i_1] [i_1] [i_2] [i_2] [i_2] [i_8]) ? 4294967274 : var_15)) : 9));
            }
            arr_29 [i_2] = (((((~(arr_5 [i_1] [i_2])))) ? 1 : ((18029 ? 45163 : 780343719))));
            arr_30 [i_1] [i_1] = 10375254814952146079;
        }
        var_33 = ((((((arr_20 [i_1] [i_1 - 2]) % (arr_24 [i_1] [i_1] [i_1] [i_1 - 1] [i_1] [i_1])))) - ((559540888 ? (arr_20 [i_1 + 1] [i_1]) : (arr_7 [i_1 + 1])))));
    }
    var_34 = ((var_7 ? (((var_3 - var_9) ? (((var_1 ? 8 : var_15))) : ((1 ? 435236489663769778 : var_1)))) : ((((var_4 ? var_9 : var_11))))));
    #pragma endscop
}
