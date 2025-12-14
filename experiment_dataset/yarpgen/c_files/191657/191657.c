/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((((((arr_1 [i_0] [i_0]) ? (max(var_6, var_10)) : var_6))) ? ((379607362 & (((max((-127 - 1), 32767)))))) : (((arr_0 [i_0] [i_0]) ^ var_0))));
        arr_4 [11] [i_0] |= (arr_0 [i_0] [i_0]);
        var_11 = 658825523;
    }
    var_12 = ((var_1 ? var_10 : ((((((var_3 ? var_0 : var_4)) != var_1))))));

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [1] |= var_2;

        for (int i_2 = 3; i_2 < 19;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                arr_13 [i_3 + 1] [i_2 + 1] = (((((var_1 * (arr_6 [1])))) ? var_1 : (~var_1)));

                for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                {
                    arr_16 [i_1] [i_2 - 2] [i_3 + 1] [6] = (min((arr_5 [i_4]), (((arr_9 [i_2 + 1] [i_2 - 3]) % var_2))));
                    var_13 = ((((max(-75, (arr_14 [i_1] [i_3 + 1] [i_3 + 1])))) ? (((((16 ? 1 : 0))) ? (min(1, 215136552)) : (((37 ? 1 : 1))))) : var_3));
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                {
                    arr_21 [i_2 - 3] [i_3 + 1] [i_5] = (1 ^ ((var_10 ? ((((arr_19 [i_1] [i_2 - 2] [i_3 + 1] [0]) > var_4))) : ((1 >> (var_7 + 59))))));
                    var_14 = (!(((~var_5) > (1 == var_3))));
                }
                for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                {
                    arr_24 [i_1] [6] [14] [i_3 + 1] [i_3 + 1] [i_6] = (~1);
                    arr_25 [12] [i_2 - 2] [i_2 - 1] [i_2 - 1] [i_2 - 3] [i_2 + 1] = (((!var_6) ? ((((arr_11 [i_3 + 1]) ? var_9 : ((63 ? var_1 : var_1))))) : var_7));
                }
                var_15 -= (((var_1 ? (arr_12 [i_3 + 1] [i_3 + 1] [i_2 - 1]) : var_7)));
                var_16 = -23356;
                var_17 = (min(var_17, (((((((((arr_18 [0] [1]) ? var_0 : 56))) && (((var_9 ? (arr_22 [i_2 - 3] [i_3 + 1]) : var_8))))) ? (min(var_4, var_2)) : (arr_8 [10] [i_2 + 1] [18]))))));
            }
            var_18 ^= (min(59, -10186));
            var_19 &= ((((min(((var_1 ? (arr_8 [i_1] [1] [i_1]) : 1)), var_3))) ? ((var_0 ? (arr_15 [i_1] [i_2 - 1] [i_2 - 2] [i_2 - 3]) : (arr_15 [10] [i_2 + 1] [i_2 - 1] [i_2 + 1]))) : (arr_15 [i_1] [i_2 + 1] [17] [8])));
            arr_26 [i_1] = (min(56, 1));
        }
        for (int i_7 = 1; i_7 < 18;i_7 += 1)
        {
            var_20 = (((var_10 >= var_6) ? (!var_3) : var_4));
            arr_30 [8] = (max((var_9 & -77), var_1));
            var_21 -= (min(var_10, ((max((arr_8 [i_7 + 1] [13] [i_1]), ((-56 ? var_8 : var_3)))))));
            arr_31 [i_1] [14] [i_7 + 1] = (((((((min(var_7, var_8))) ? var_10 : (!var_0)))) ? ((((arr_27 [i_1] [1]) ? var_0 : var_1))) : ((((var_0 << 1) || (arr_6 [15]))))));
        }
    }
    #pragma endscop
}
