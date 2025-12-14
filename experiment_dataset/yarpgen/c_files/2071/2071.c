/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = ((((min((arr_0 [i_0]), ((~(arr_0 [i_0])))))) ? (arr_0 [i_0]) : (((!((((arr_0 [i_0]) / 31))))))));
        arr_2 [i_0] = (((min((arr_1 [i_0]), (arr_1 [i_0])))) / (arr_0 [i_0]));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_13 ^= (((((((min(7, (arr_0 [i_1])))) + (arr_4 [i_1])))) ? 1 : 51));
        var_14 = (max(var_14, (arr_0 [i_1])));
        var_15 ^= (min((((109 / (1 * 66)))), 8616630034752691373));
        var_16 = (min(var_16, ((((min(40, var_11)))))));

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_8 [i_1] [i_2] [8] = (arr_7 [i_1] [i_1] [i_2]);
            arr_9 [7] [i_2] = ((((~(arr_6 [i_2]))) | (((78 ? 0 : (arr_1 [i_1]))))));
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            arr_13 [i_1] [i_3] = -97;
            var_17 = (max(var_17, (arr_1 [i_3])));
            arr_14 [i_3] = (min((arr_12 [i_1] [i_3]), (((239 ? (arr_1 [i_1]) : (arr_4 [i_3]))))));
            arr_15 [i_1] [i_3] = ((((((var_4 ? 96 : var_4)))) >> ((((-(arr_12 [i_1] [i_3]))) + 2079654555860658937))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {

            for (int i_5 = 3; i_5 < 20;i_5 += 1)
            {
                arr_23 [i_1] [i_1] [i_5] = (((arr_5 [i_5]) <= (arr_19 [i_1] [i_1] [i_4] [i_5])));
                arr_24 [i_1] [i_5] [i_5 - 1] = 63;
                var_18 = 0;
            }
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                arr_28 [i_1] [i_1] [i_6] = (((arr_27 [i_1] [i_1] [i_4] [i_6]) ? (((-(arr_19 [i_1] [i_4] [9] [i_6])))) : ((var_6 - (arr_3 [i_1])))));
                arr_29 [i_1] [i_4] [i_6] = var_5;
            }
            var_19 = -83;
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 18;i_8 += 1)
                {
                    {
                        var_20 = ((var_3 % (((arr_7 [i_8] [i_8] [i_7]) + (arr_10 [i_1] [i_4] [i_7])))));
                        var_21 = -97;
                        var_22 ^= (arr_21 [i_8] [i_4] [i_7 + 2] [i_8 - 1]);
                    }
                }
            }
            var_23 = ((-3 ? (arr_17 [i_1] [i_4]) : (arr_17 [i_4] [i_1])));
        }
    }
    var_24 = (6 - -var_6);
    #pragma endscop
}
