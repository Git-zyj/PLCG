/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (~9118704738481653684);

        /* vectorizable */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            var_19 = var_1;

            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                var_20 = (min(var_20, 4687267888017740132));
                var_21 = arr_4 [i_0] [i_1 - 1];
            }
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                var_22 = -92;
                arr_10 [i_1] [i_3] = ((33867 * (((arr_0 [i_0]) ? (arr_8 [i_0] [i_1] [i_3]) : 6421735582495361465))));
                arr_11 [i_0] [i_1] [i_3] = (arr_0 [i_1 - 1]);
                arr_12 [i_0] [i_1] [i_3] = var_7;
            }
            for (int i_4 = 3; i_4 < 19;i_4 += 1)
            {
                var_23 *= (6421735582495361465 == 5372);
                var_24 |= (((((-123 * (arr_13 [21] [11] [i_0])))) ? (arr_3 [i_1 - 1] [i_1 - 1]) : (((!(arr_5 [i_0] [20] [i_0]))))));
                arr_15 [i_0] = (((arr_14 [i_4 - 3] [21] [i_1 + 1]) ? (arr_14 [i_4 - 3] [i_4 - 3] [i_1 + 1]) : var_1));
            }
        }
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_25 = var_15;
            var_26 = (max(var_26, (((-124 ? var_6 : (arr_8 [i_0] [i_0] [i_0]))))));
            arr_18 [i_0] [i_5] = (((arr_16 [i_0]) ? ((max(-127, -7320473163430406962))) : (min(((max(1033046660, -123))), (min(10182710525059428026, 10))))));
            var_27 -= (max(((~(((arr_16 [i_0]) ? (arr_3 [1] [1]) : (arr_0 [13]))))), (!var_12)));
        }
        arr_19 [5] &= 8479754544717881998;
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
    {
        arr_22 [2] [10] = (~-8486330110136767562);
        arr_23 [14] = (((((!(~1504310400)))) & -6275));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
    {
        var_28 = ((-(arr_0 [i_7])));
        var_29 = (max(var_29, (+-1)));
        var_30 = (arr_20 [i_7]);
        var_31 |= (((arr_0 [i_7]) ? 1504310400 : (arr_0 [i_7])));
        var_32 += (arr_16 [i_7]);
    }
    var_33 = (((-653926467 ? ((var_5 ? 5197525539369078520 : var_8)) : ((min(var_14, var_9))))));
    var_34 = var_8;
    var_35 ^= (-6278 | var_14);
    #pragma endscop
}
