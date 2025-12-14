/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = (((((-(2935799770533613676 + var_7)))) || (((-(arr_2 [i_1] [i_0]))))));
                arr_5 [i_1] [i_0] = arr_4 [i_0] [i_0] [i_0];
            }
        }
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_18 = (((arr_6 [i_2]) ? (((-(arr_6 [i_2])))) : (arr_8 [i_2] [i_2])));
        var_19 = (((((~((max((arr_6 [i_2]), (arr_7 [i_2]))))))) ? (arr_6 [i_2]) : (((arr_6 [i_2]) ? ((124 / (arr_6 [i_2]))) : (arr_7 [i_2])))));
        arr_9 [i_2] = (arr_7 [i_2]);
    }
    var_20 = (((((((min(16942, var_3))) ? ((2533942799 >> (var_4 - 53066))) : var_6))) ? (((var_5 ^ var_9) ? var_10 : var_12)) : (min(var_11, (var_16 + var_12)))));
    var_21 = var_6;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            {
                var_22 = ((var_15 ? (min(((((arr_15 [7] [i_3]) ? (arr_10 [i_3]) : (arr_10 [i_3])))), (min((arr_6 [i_3]), 5285699437824329663)))) : (arr_10 [i_3])));

                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    var_23 ^= (arr_14 [i_4]);
                    var_24 ^= ((((((((!(arr_11 [i_5] [8])))) | (arr_6 [i_4])))) ^ 1257287311));
                }
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    arr_21 [i_3] [i_3] [i_3] = ((((((2232609416344904160 ? 65533 : -32754)) << ((((min((arr_6 [18]), (arr_16 [i_6] [2] [2])))) - 151)))) < (((((arr_15 [i_4] [i_4]) & var_2)) + ((min(13638, (arr_19 [i_3] [i_4] [i_4] [i_4]))))))));
                    var_25 ^= (((((((-1850862706015906403 ? 5156 : 524287))) ? (min(var_13, (arr_16 [i_3] [i_4] [i_4]))) : ((var_16 >> (((arr_12 [i_4]) - 47990)))))) * ((((arr_16 [i_3] [11] [11]) || var_8)))));
                }
                var_26 += (((((((29674 ? (arr_20 [i_3] [i_4]) : (arr_19 [1] [i_4] [i_4] [i_4]))) + ((((arr_19 [4] [i_4] [4] [i_4]) || (arr_20 [i_4] [13]))))))) && ((((((var_5 ? (arr_13 [i_3] [i_3] [i_4]) : (arr_13 [i_3] [i_3] [3])))) ? (arr_15 [i_3] [i_4]) : (((arr_10 [i_3]) ? var_10 : (arr_7 [i_3]))))))));
                arr_22 [i_3] [i_3] = ((~((var_8 >> (arr_11 [i_3] [i_3])))));
                arr_23 [i_3] [i_3] = (((((arr_20 [i_3] [i_3]) / (arr_10 [i_4]))) / (arr_19 [i_3] [i_4] [i_3] [12])));
            }
        }
    }
    #pragma endscop
}
