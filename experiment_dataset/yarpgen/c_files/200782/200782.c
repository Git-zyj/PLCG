/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-((1707631789 ? (((2 ? var_2 : var_5))) : var_6))));
    var_11 = ((var_0 ? ((-((var_4 ? var_0 : var_4)))) : (((15 ? 31 : var_5)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (((((((arr_1 [i_0] [i_0]) ? 2 : 62)))) ? (((min(7609751241874916768, (arr_0 [i_0]))) + var_2)) : (((~((var_7 ? 2 : var_6)))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_8 [i_1] [i_0] |= ((~((((arr_6 [i_0] [i_1] [i_1]) != ((222 ? 228 : var_6)))))));

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                var_12 = (min(var_12, ((((((0 ? ((-(arr_9 [i_0] [i_1] [i_2]))) : (arr_11 [i_2] [i_1])))) ? -22 : (((!var_5) ? ((79 ? (arr_0 [i_1]) : 228)) : (arr_4 [i_2] [i_1]))))))));
                arr_12 [i_0] [23] [i_2] [i_2] = ((((((((-(arr_10 [i_0] [i_1] [0] [8])))) ? (arr_5 [i_1]) : ((1417499599 ? var_0 : 217))))) - 1800987005193025385));
            }
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_15 [21] [21] = ((var_1 ? (arr_14 [i_0] [i_3] [i_3]) : var_5));
            var_13 = (((arr_14 [i_0] [19] [i_0]) * (arr_14 [1] [i_0] [i_0])));
            var_14 = (((arr_11 [i_3] [i_3]) ? (((var_7 - (arr_4 [i_0] [i_3])))) : 285026626));
        }
    }
    var_15 += ((217 ? -31 : var_1));
    #pragma endscop
}
