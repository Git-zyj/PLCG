/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_0] [0] [0] &= ((max((((arr_3 [8] [i_1] [0]) ? (arr_4 [i_0] [i_0]) : 109)), ((max(var_5, (arr_4 [i_0] [i_0])))))));
                    arr_8 [i_2] = (((arr_4 [i_0 + 1] [i_0 + 1]) >= (~109)));
                }
            }
        }

        /* vectorizable */
        for (int i_3 = 2; i_3 < 7;i_3 += 1)
        {
            var_17 = 4930562854403825921;
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            arr_17 [4] [i_3] [7] [i_5] [i_6] = (((arr_1 [i_0 - 1]) & var_1));
                            arr_18 [i_5] [i_3] [i_3] [i_3 + 2] [i_3] [i_3] [i_3] = ((106 >= (arr_16 [7] [i_3 - 1] [i_4] [i_5] [i_6])));
                            arr_19 [i_0] [i_3 - 2] [i_5] [i_0] [i_4] = ((arr_4 [i_0] [i_0]) ? (~109) : ((~(arr_5 [i_5] [i_5] [i_5]))));
                        }
                    }
                }
            }
            var_18 += ((-(arr_2 [i_3 - 1] [i_3 + 2])));
            arr_20 [i_0 + 1] = ((-((var_15 ? (arr_5 [i_0] [i_3 + 2] [i_0]) : var_6))));
            arr_21 [i_0] [3] [i_3 + 1] = (((arr_2 [i_0 - 1] [6]) ? ((109 ? var_4 : (arr_2 [i_3] [i_0]))) : (((var_8 ? 30714 : (arr_3 [i_0 - 1] [i_0] [i_0 - 1]))))));
        }
        var_19 |= ((((max(((((arr_3 [i_0] [i_0] [i_0]) >= var_3))), (arr_13 [i_0 - 1] [i_0 + 1] [i_0] [i_0] [i_0 + 1])))) >> ((((-((max(var_8, (arr_0 [i_0])))))) + 8751))));
        arr_22 [i_0] = ((-(arr_10 [i_0 - 1] [i_0 + 1])));
        arr_23 [i_0] = (arr_12 [1] [0] [i_0 + 1] [i_0 + 1]);
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 10;i_7 += 1)
    {
        arr_26 [i_7] [9] = ((((((arr_24 [i_7] [i_7]) | (arr_24 [i_7 - 2] [5])))) ? (arr_24 [i_7 + 1] [i_7 + 1]) : (((arr_24 [i_7] [i_7]) | var_16))));
        var_20 = (((arr_24 [i_7 + 1] [i_7 + 1]) ? (((89 != (arr_25 [i_7])))) : (arr_24 [i_7 - 2] [i_7 + 1])));
        arr_27 [i_7] [i_7] = 90;
    }
    var_21 = ((!(((min(var_16, var_13)) == (!101)))));
    var_22 &= (max(-var_2, var_0));
    #pragma endscop
}
