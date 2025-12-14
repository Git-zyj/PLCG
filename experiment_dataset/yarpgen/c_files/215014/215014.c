/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_1] [i_2] [i_3] = arr_0 [5];
                        arr_10 [i_3] [i_0] [i_0] [i_0] = (max((((arr_4 [i_3] [i_2 - 3] [i_0 - 2]) ? (((arr_8 [i_0] [i_1] [i_3]) ? (arr_7 [i_0 - 3] [i_1] [i_1] [i_2] [i_3]) : var_12)) : (arr_6 [i_0 + 2] [i_0 - 3] [i_0 - 3] [i_2 - 3] [i_2 + 2]))), (((var_1 & var_3) ? (max((arr_3 [i_0 + 2] [i_0 + 2] [i_2]), (arr_0 [i_0 + 1]))) : -21362))));
                        var_13 = (min(var_13, (((!((min((arr_6 [i_2 - 3] [i_2 - 1] [i_2 - 1] [i_2 - 3] [i_2 - 3]), ((0 + (arr_1 [i_0 - 1] [i_0 - 2])))))))))));
                        var_14 = (min(var_14, (((!((!(arr_2 [i_0 - 2]))))))));
                    }
                }
            }
            arr_11 [i_0] = (max(((((arr_5 [i_0 + 2] [i_1] [i_1]) == -7182881521275532267))), (min((arr_4 [i_0 - 1] [i_0 + 1] [i_0 - 3]), (arr_4 [i_0 - 2] [i_0 - 3] [i_0 - 2])))));
            var_15 = ((((var_3 ? (0 * var_6) : (max(var_2, 4503599627369472)))) % ((-(arr_1 [i_0] [i_0])))));
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_16 ^= (min((((((arr_4 [i_0 + 1] [i_4] [i_0 + 1]) ? (arr_14 [i_0 - 2] [i_0] [i_4]) : (arr_4 [10] [i_0 - 1] [i_4]))))), 7182881521275532267));
            arr_15 [i_4] [19] [i_4] = ((!(arr_12 [i_0 - 1] [i_0 - 3] [i_0 - 1])));
            arr_16 [16] [16] |= arr_6 [i_0] [i_0] [1] [i_4] [i_4];
            var_17 *= 0;
            arr_17 [i_0 - 3] [i_4] [i_4] = (min((arr_7 [14] [i_4] [i_0 - 2] [i_0 - 1] [18]), (arr_7 [i_0] [i_0] [i_0] [i_0 - 1] [i_4])));
        }
        var_18 *= var_5;
    }
    for (int i_5 = 1; i_5 < 22;i_5 += 1)
    {
        var_19 = 65535;
        var_20 ^= ((((((arr_20 [i_5 + 2]) ? (arr_20 [i_5 + 2]) : (arr_20 [i_5 + 1])))) ? (arr_19 [i_5 + 1]) : ((((arr_18 [1]) ? var_3 : (arr_19 [i_5 + 2]))))));
    }
    var_21 = var_8;
    var_22 = ((min(var_5, 7182881521275532267)));
    #pragma endscop
}
