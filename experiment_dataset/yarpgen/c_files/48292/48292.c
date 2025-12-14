/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_3;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((arr_1 [i_0] [i_0]) / (arr_0 [i_0]))) % (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        var_20 = (max(var_20, ((((arr_0 [i_0]) && (arr_1 [i_0] [i_0]))))));
        var_21 = (((127 ? -58 : 67)));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {

                for (int i_4 = 4; i_4 < 14;i_4 += 1)
                {
                    var_22 = ((var_1 ? 2147483637 : var_1));
                    arr_15 [i_4 + 1] [i_1] [i_3 - 1] [i_1] [i_1] = (((((49602 ? 1707858218 : 24))) ? 74 : var_15));
                }
                arr_16 [i_1] [i_2] [i_2] [i_1] = (((var_13 ? (arr_10 [i_3 - 1]) : (arr_9 [i_1] [i_2] [i_1] [i_1]))));
            }
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                arr_20 [i_1] [i_2] [i_1] = (((151 ? 1320755418 : 1669582479)));
                arr_21 [i_5] [i_1] [i_1] [0] = (((arr_5 [i_2]) / (arr_5 [i_1])));

                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    arr_24 [i_1] = (arr_22 [i_1] [i_2] [i_5]);
                    arr_25 [i_1] [i_2] [i_1] [i_6] [i_6] = (arr_10 [i_6]);
                    arr_26 [i_6] [i_5] [i_1] [i_1] [i_2] [i_1] = 117;
                    var_23 ^= -var_5;
                }
                var_24 = (max(var_24, 29072));
            }
            arr_27 [i_1] [i_1] [i_1] = ((((((arr_5 [i_1]) - (arr_17 [i_1] [i_2] [i_1])))) ? (arr_11 [i_2] [i_2] [i_1] [i_1] [i_1]) : (arr_17 [i_1] [i_2] [i_2])));
        }
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            var_25 = ((((-(arr_28 [i_1] [i_7]))) % (-14 + 29072)));
            arr_30 [i_1] [i_7] |= (min(var_11, -4113551345042924611));
        }
        arr_31 [i_1] [i_1] = ((((max((arr_22 [i_1] [i_1] [i_1]), (arr_12 [i_1] [i_1] [i_1])))) ? ((max(var_2, (max(-1513082890, var_4))))) : (((arr_0 [i_1]) / (arr_0 [i_1])))));
    }

    /* vectorizable */
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        arr_34 [i_8] = (((arr_32 [18]) ? 252 : (arr_33 [i_8])));
        var_26 ^= (((arr_33 [i_8]) || (arr_33 [i_8])));
    }
    var_27 |= (max((((var_7 <= var_2) | ((min(-1, 32767))))), var_12));
    #pragma endscop
}
