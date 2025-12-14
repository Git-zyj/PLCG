/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_10 = (((((((max((arr_1 [9] [1]), (arr_0 [i_1] [i_0])))) ? (4235 * var_2) : (var_6 < var_1)))) ? ((-(arr_0 [i_0] [i_1]))) : 2147483647));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                    {
                        var_11 = 2147483647;
                        var_12 = ((!1845844363749425724) + (((-2147483647 + 2147483647) >> (-1845844363749425724 + 1845844363749425730))));
                        var_13 = (((~((877884912 ? 2147483647 : (arr_1 [i_0] [i_0]))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [14] = ((arr_4 [i_0]) >> (var_0 <= var_0));
                        arr_16 [i_0] [i_0] [i_2] [i_4] [i_4] [i_4] = (((arr_3 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : var_1));
                        var_14 = (max(var_14, (((var_8 ? (~var_7) : (arr_3 [i_1] [i_2]))))));
                    }
                    var_15 = (((arr_12 [i_0] [i_1] [i_0] [i_0]) ? (((((arr_11 [i_0] [i_0] [i_0]) > var_4)) ? -1845844363749425724 : var_3)) : ((min((var_1 / -2147483647), (!var_0))))));
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    arr_20 [i_0] [i_0] [i_1] [i_5] = (((((var_5 ? 7 : (-32767 - 1))))) ? (((arr_10 [i_0] [14] [14] [i_5] [7] [7]) ? ((min(var_2, (arr_6 [i_1] [0])))) : ((5528948373004870094 ? (arr_4 [i_1]) : var_8)))) : var_5);
                    arr_21 [i_0] [i_0] [i_0] = (max(572795082, ((((arr_11 [i_0] [i_0] [1]) ? (arr_4 [i_1]) : (32751 * var_1))))));
                }
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    var_16 = (min(((((!(arr_11 [i_0] [i_6] [6]))) ? (((1936710400 ? (arr_5 [i_1] [i_0]) : -2147483647))) : (arr_9 [i_1] [i_1] [i_1]))), ((-((var_1 ? (arr_1 [i_0] [i_1]) : (arr_1 [i_1] [i_1])))))));
                    arr_25 [0] [i_1] [i_1] [i_6] = (+(((((arr_4 [i_6]) < (arr_0 [i_0] [i_6]))) ? (max(var_8, var_2)) : (((arr_3 [9] [i_1]) ? var_7 : (arr_6 [1] [i_6]))))));
                    var_17 += (((((!2147483647) - ((~(arr_11 [i_0] [i_0] [i_0])))))) ? var_4 : var_9);
                    var_18 = (min(((-(arr_19 [i_0]))), (min((arr_0 [i_0] [i_0]), 2147483647))));
                    var_19 = (((arr_5 [i_6] [i_0]) & ((min((arr_23 [i_0] [i_1] [9]), 181)))));
                }
            }
        }
    }
    var_20 ^= (((max((max(0, var_4)), (var_6 + var_9))) * var_1));
    #pragma endscop
}
