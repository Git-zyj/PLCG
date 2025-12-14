/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_2 + 1] [i_1] [7] [i_0] = ((+((((max((arr_3 [9]), (arr_6 [4] [10] [i_2 + 1])))) >> (69 - 68)))));
                    arr_9 [0] = (max(var_7, ((127 * (arr_6 [i_2 - 1] [i_2 - 2] [i_2 - 2])))));
                    var_10 = (!var_4);
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        arr_13 [13] = ((~((max((max((arr_10 [i_3]), (arr_12 [12]))), var_8)))));

        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            arr_18 [i_3] [12] [13] = (((-1 || var_9) - var_1));
            var_11 = (((arr_12 [6]) ? -105 : (arr_0 [i_3] [i_4])));

            for (int i_5 = 1; i_5 < 12;i_5 += 1)
            {
                var_12 = arr_6 [i_5 + 2] [18] [i_4];
                var_13 += 251;
                arr_21 [i_5] [i_4] [i_4] [i_5 + 1] = -1;
            }
        }
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            var_14 ^= (max((+-165), ((186 ? (100 + 0) : ((max(var_9, 108)))))));
            arr_24 [7] [i_3] &= 207;
            var_15 = var_9;
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 11;i_8 += 1)
            {
                {
                    arr_29 [8] = ((((max(0, 97))) ? ((var_2 ? (arr_7 [i_8 + 2] [i_8 + 1] [8] [i_8 + 1]) : (arr_7 [i_8 + 1] [i_8 + 1] [3] [i_8 + 1]))) : ((max(var_0, var_1)))));
                    var_16 = (min(var_16, ((min(-237, (max((0 * var_8), ((~(arr_22 [i_3]))))))))));
                    var_17 |= 94;
                    arr_30 [4] = var_7;
                    arr_31 [0] = ((var_5 < (arr_4 [15])));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
    {
        var_18 = (min(var_18, (arr_22 [i_9])));
        var_19 ^= (~-121);
    }
    #pragma endscop
}
