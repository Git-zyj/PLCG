/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = 32768;
        var_20 = ((!(arr_1 [i_0])));
        var_21 ^= (((((var_13 ? var_7 : (arr_1 [7])))) < (((arr_1 [i_0]) ? var_9 : var_9))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (((((-(max((arr_2 [i_1]), (arr_0 [14])))))) ? ((-(((arr_1 [i_1]) ? (arr_2 [i_1]) : (arr_0 [i_1]))))) : (arr_0 [i_1])));
        var_22 = ((((((((-(arr_0 [1])))) ? -16 : ((-(arr_0 [i_1])))))) > ((((max(2464876646435313982, var_10))) ? (((-(arr_1 [8])))) : (arr_4 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = (2 | 37452);
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_3 + 4] [3] [i_4] = (max((((arr_1 [i_4]) ? (min((arr_2 [i_3]), var_13)) : (arr_11 [i_4]))), ((((var_0 ? (arr_0 [i_2]) : (arr_9 [i_4] [4] [i_2])))))));
                    arr_15 [i_2] [i_4] = ((((18446744073709551615 ? 2366864 : 1))) ? (14749443962047540943 + 28100) : (((((var_10 * (arr_0 [i_4])))) ? ((var_3 ? (arr_11 [i_4]) : 12356210228255484366)) : (var_11 & 1))));
                    var_23 = (min(var_23, ((((((((var_12 ? 2821052802 : var_5)) >> (((((arr_6 [i_2]) + 4294967292)) + 8823693694022746051))))) ? (((arr_7 [i_3 + 3] [i_4]) ? (arr_3 [i_4]) : (((arr_0 [i_2]) + (arr_12 [i_4] [10] [i_2]))))) : (arr_7 [15] [i_2]))))));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
    {
        var_24 = 18446744073709551615;

        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            arr_20 [i_6] [14] = (max((((((var_8 ? (arr_7 [i_5] [i_6]) : (arr_3 [i_5])))) ? (((((arr_7 [i_6] [i_5]) > (arr_13 [1] [i_6] [i_6]))))) : (max((arr_6 [i_5]), (arr_9 [i_5] [i_5] [i_5]))))), 1920));
            arr_21 [i_6] [i_5] = ((((((((0 ? -49 : (arr_12 [i_5] [12] [i_6])))) ? 37221 : 0))) ? ((-(arr_18 [i_5]))) : (((((-(arr_19 [i_5])))) ? 4744786056867132107 : (arr_17 [i_5] [i_6])))));
            arr_22 [i_6] = (((((((var_17 + (arr_7 [i_5] [5])))) - ((var_13 & (arr_12 [i_5] [i_6] [7])))))) ? (((13236823814329366892 ? 124 : 66977792))) : (min((arr_12 [i_5] [0] [i_6]), (((var_8 ? -6 : (arr_3 [i_5])))))));
        }
    }
    var_25 *= ((var_5 ? var_3 : (!var_18)));
    var_26 = ((15 ? 15481 : (max(1, ((37 ? 4294967282 : 4))))));
    var_27 = ((var_7 ? (((max(var_18, var_10)) | (max(var_0, var_9)))) : var_12));
    var_28 = ((-(((((14749443962047540943 ? 28083 : 216))) ? var_11 : -4227989507))));
    #pragma endscop
}
