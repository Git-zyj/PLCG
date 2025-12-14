/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 890058024;
        arr_3 [i_0] = (2147483647 | var_6);
        arr_4 [i_0] = var_7;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_10 = (max(var_10, (min(-1, (((!(arr_7 [2]))))))));
            var_11 = (((((max(var_8, (arr_5 [i_1] [i_2]))) % (~196)))) != ((0 ? (arr_8 [i_1]) : (arr_6 [i_1]))));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_12 = (min(var_12, 1));
            arr_16 [10] [10] |= (max((((((0 >> (223 - 221)))) ? -var_4 : (max(var_9, -890058031)))), 6));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            var_13 ^= ((-(((417362500 - (arr_5 [4] [4]))))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    {
                        var_14 = (min(var_14, ((var_2 >> (((((105 - -11865) ? var_7 : (arr_17 [i_6 - 1]))) - 86))))));
                        var_15 = (min(var_15, var_0));
                        arr_24 [i_1] = (arr_23 [i_1] [i_4] [i_5] [i_6]);
                    }
                }
            }
        }
        arr_25 [i_1] = ((((var_7 >> (249 - 232))) * ((max((!-35), (var_3 == 0))))));
        arr_26 [i_1] = (var_6 <= 1308683681);
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 7;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 8;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    {
                        var_16 = (min(var_16, (((119 << (((arr_9 [i_10]) + 81)))))));
                        arr_40 [i_7] [i_8] [i_9] [4] [i_8] [i_7] = (-(!var_7));
                        var_17 |= (arr_17 [i_7]);
                        arr_41 [i_7] [i_8] [i_9] [i_10] = (arr_31 [i_7] [i_7] [i_9]);
                    }
                }
            }
        }
        arr_42 [i_7] [i_7] = (((((-7216 ? var_2 : 9245))) ? 100 : 112));
        var_18 = var_9;
        arr_43 [i_7] [i_7] = (((!var_9) ? var_3 : -var_2));
    }
    var_19 = var_6;
    #pragma endscop
}
