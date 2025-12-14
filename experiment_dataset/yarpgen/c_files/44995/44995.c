/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_5 ? var_0 : var_4);
    var_16 = (max(var_16, var_0));
    var_17 = ((1 ? var_11 : 2044535194740664065));

    for (int i_0 = 2; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_18 ^= (~var_14);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_19 -= 1;

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                var_20 = (max(var_20, ((((((var_14 ? 1 : var_13))) ? var_2 : 1)))));
                arr_7 [i_2] = var_11;

                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    var_21 = (max(var_21, ((((arr_3 [1] [i_2]) ? var_14 : (arr_0 [i_3 + 3] [i_0 - 2]))))));
                    arr_10 [i_2] [i_1] [i_2] [i_2] = var_7;
                }

                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    var_22 = ((-(arr_11 [i_0] [i_0] [i_0] [0] [i_0 + 1] [i_4 + 1])));
                    var_23 = (arr_12 [7] [1] [i_1] [i_4 - 1]);
                }
                arr_14 [i_0 + 1] [i_1] = (((((!(arr_3 [i_0 - 2] [6])))) >> (((arr_11 [i_0 - 2] [i_0 + 1] [i_0] [i_0 + 1] [0] [i_0]) - 1960387184))));
            }
        }
    }
    for (int i_5 = 2; i_5 < 12;i_5 += 1) /* same iter space */
    {
        arr_18 [2] [i_5] |= ((max((arr_0 [i_5 - 1] [i_5 - 2]), var_1)));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    var_24 = ((((((!28927) ? (min((arr_22 [i_5] [11]), (arr_8 [i_5 - 1] [i_5 - 1]))) : 8336))) || (((0 & (arr_26 [i_5 + 1]))))));
                    arr_27 [i_5 - 1] [i_6] [i_7] = (min(62293, var_13));
                }
            }
        }
    }
    #pragma endscop
}
