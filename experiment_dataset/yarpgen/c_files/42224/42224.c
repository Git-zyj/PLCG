/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = ((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 -= var_4;
                    var_19 ^= (((((((arr_9 [20] [i_1]) ? (arr_3 [i_1]) : var_8))) || (arr_7 [i_0] [i_1] [i_1] [i_0]))));
                }
            }
        }
        var_20 = ((!(((((arr_3 [i_0]) ? 89 : 11480615863531353897))))));
    }

    for (int i_3 = 3; i_3 < 7;i_3 += 1) /* same iter space */
    {
        var_21 = ((-(max((~var_6), (arr_6 [i_3] [i_3 + 3] [i_3 + 4])))));
        var_22 = (max(((((var_13 <= var_13) >= (min(var_11, (arr_4 [i_3])))))), ((((~(arr_4 [i_3]))) >> (((!(arr_0 [13] [i_3]))))))));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            arr_14 [i_3] [i_4] [i_3] = ((-206 ? var_14 : ((((arr_6 [i_3] [i_3] [i_4]) >= (arr_3 [i_4]))))));
            var_23 |= ((!(arr_11 [i_4])));
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            arr_19 [i_3] [i_3] [i_3] = 206;
            /* LoopNest 2 */
            for (int i_6 = 4; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 9;i_7 += 1)
                {
                    {
                        var_24 = (~12031827295011752933);
                        var_25 = ((~(((((arr_7 [i_3] [i_5] [i_3] [i_3]) ? 50434 : 208))))));
                        arr_24 [i_3] = var_2;
                        arr_25 [i_3] = ((~(arr_22 [i_3] [i_3] [i_6] [i_7 + 1] [i_7])));
                    }
                }
            }
        }
    }
    for (int i_8 = 3; i_8 < 7;i_8 += 1) /* same iter space */
    {
        arr_28 [i_8] = (arr_10 [i_8]);
        var_26 |= (((((-var_7 ^ (11188 | 4993093148881849033)))) ? (((max((arr_4 [i_8]), var_5)))) : var_6));
        arr_29 [i_8] [i_8] = ((-((-1931216864444216533 ? (arr_3 [i_8 + 1]) : 1931216864444216532))));
    }
    var_27 = 1931216864444216532;
    #pragma endscop
}
