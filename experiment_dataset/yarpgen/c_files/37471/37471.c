/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) ? ((min((arr_0 [i_0]), (arr_0 [i_0])))) : (((arr_0 [5]) ? 1 : ((1 ? (arr_0 [i_0]) : (arr_0 [i_0])))))));
        var_17 = (min(var_17, ((((max(((61911 >> (51251 - 51235))), ((max((arr_0 [i_0]), (arr_0 [i_0])))))) & (min((((arr_0 [i_0]) ? var_14 : (arr_0 [i_0]))), (arr_0 [i_0]))))))));
        var_18 &= arr_0 [i_0];
    }
    var_19 ^= (min(((-77 ? 77 : -1684163526240318340)), (((!4294967295) ? var_5 : ((100 ? -100 : -675314438100826190))))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            {
                var_20 ^= ((100 ? (((((((arr_6 [i_2]) == var_16))) < ((max((arr_4 [i_2 - 1]), var_4)))))) : (arr_6 [i_1])));

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_21 = ((arr_9 [i_1] [i_2] [i_2 - 1]) ? ((((((var_7 ? (arr_13 [i_1] [0] [i_3]) : (arr_7 [i_1]))) == (!-100))))) : (min(675314438100826189, ((((arr_6 [19]) ? -2 : (arr_4 [i_1])))))));
                    arr_14 [i_1] [i_1] [i_1] = (((-var_16 ? ((var_13 * (arr_4 [i_2])) : 100))));
                    var_22 = ((arr_10 [i_1] [i_2 + 2] [i_2 + 2]) ? (arr_13 [i_1] [i_2 + 1] [i_3]) : (((((min(81, 0))) ? (max((arr_8 [i_1] [i_2] [i_3]), (arr_9 [i_1] [11] [i_3]))) : (((1680321365 + (arr_4 [i_2]))))))));
                }
                for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                {
                    var_23 ^= (arr_8 [i_1] [20] [i_1]);
                    arr_18 [i_1] [i_2 - 2] &= (~var_16);
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                {
                    arr_21 [i_1] [i_1] [i_1] [i_1] = ((((((min((arr_8 [i_1] [i_2 - 1] [i_2 - 1]), 18446744073709551615))) ? (min((arr_13 [12] [i_2] [i_2]), 0)) : (((min((arr_16 [i_5] [i_2 + 2] [i_1]), (arr_6 [i_1])))))))) ? 0 : var_6);
                    var_24 &= (((~(arr_10 [i_2 - 2] [i_2 - 2] [1]))));
                }
                for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                {
                    var_25 *= ((!((min(13, 127)))));
                    var_26 |= (max(((~((0 ? 0 : (arr_16 [i_6] [9] [1]))))), (((!(arr_16 [i_2 - 1] [i_2 - 1] [i_2 + 1]))))));
                }
                var_27 = (min(var_27, (arr_15 [i_1] [i_1] [i_1])));
                var_28 *= (18446744073709551602 + 0);
            }
        }
    }
    #pragma endscop
}
