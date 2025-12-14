/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 = var_5;
                    var_17 = (((min(((((arr_1 [i_0]) ? 11108 : 49424))), -1923024675707846277)) <= (((min(54413, 17367))))));
                    var_18 = max(((min(54397, -706223712))), ((~(((arr_3 [i_0] [i_0]) ? 11107 : 18446744073709551607)))));
                }
            }
        }
    }
    var_19 = (max((-32756 ^ 65535), ((var_15 ? 16114 : (min(var_2, var_15))))));

    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    var_20 = (max(var_20, ((((((var_9 ? (arr_8 [i_3] [i_3] [i_5]) : (arr_7 [i_4] [i_3]))) <= (arr_9 [i_3] [i_3])))))));
                    arr_14 [i_3] [i_4] [i_4] = 1;
                    var_21 = ((!((!(arr_11 [i_4] [i_4] [i_4] [i_4])))));
                }
            }
        }
        var_22 = (((min(0, (arr_3 [i_3] [i_3])))) ? ((max(((64997 ? 23 : (arr_12 [i_3] [i_3]))), ((20 ? 127 : (arr_12 [i_3] [i_3])))))) : ((16112 ? (((arr_8 [5] [9] [i_3]) ? var_6 : var_8)) : ((((arr_13 [6] [6] [i_3] [i_3]) ? (arr_7 [i_3] [i_3]) : 54413))))));

        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {
            var_23 = var_13;
            var_24 = ((((((((0 ? (arr_3 [i_3] [i_6]) : var_14))) ? 49421 : (arr_1 [i_6])))) ? (((arr_13 [i_6 - 1] [i_3] [i_3] [i_3]) % 26)) : (max(((((arr_0 [i_6]) ? (arr_2 [1] [i_6] [i_3]) : (arr_5 [i_3] [i_6 + 1] [i_6 - 1] [i_6])))), (-9223372036854775807 - 1)))));
        }
        for (int i_7 = 4; i_7 < 11;i_7 += 1)
        {
            arr_20 [i_3] [i_7 - 2] = -26;
            var_25 = (min(((~(arr_16 [i_7 - 4]))), ((max(26553, (arr_16 [i_7 + 1]))))));
            arr_21 [i_3] [i_3] = (((((18446744073709551615 ? ((-(arr_12 [i_3] [i_3]))) : ((4174 ? 22149 : 986224659))))) ? 1 : (((((2361657595130514491 ? var_9 : -442012194))) ? (arr_0 [i_3]) : (((8891329760106958731 != (arr_9 [0] [i_3]))))))));
        }
    }
    for (int i_8 = 1; i_8 < 9;i_8 += 1)
    {
        var_26 *= (((((((((arr_7 [i_8] [i_8]) ? (arr_23 [i_8]) : (arr_13 [i_8] [i_8] [4] [1])))) ? (arr_13 [i_8 - 1] [0] [0] [i_8]) : (arr_11 [4] [i_8] [i_8] [i_8 + 2])))) ? (max(2147483647, (arr_4 [12] [12] [12]))) : ((((19795 / (arr_12 [0] [2]))) * (arr_7 [i_8] [i_8])))));
        var_27 = (-413997059 & (arr_19 [i_8 + 1]));
    }
    #pragma endscop
}
