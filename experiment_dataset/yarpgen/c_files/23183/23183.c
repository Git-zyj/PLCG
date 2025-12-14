/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = min(((~(((arr_1 [i_0]) ? (arr_0 [i_0]) : 2010583755)))), (((~(((arr_3 [i_0]) / -2145))))));
        arr_5 [i_0] [2] |= var_13;
        var_16 ^= ((((((((-11 ? 1 : (arr_3 [i_0])))) ? (arr_2 [i_0]) : ((-(arr_2 [3])))))) ? ((-(arr_0 [4]))) : (arr_2 [i_0])));
        var_17 ^= 1;
        arr_6 [i_0] = (-(arr_2 [i_0]));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_10 [i_1] = ((~(((!(arr_3 [i_1]))))));
        var_18 -= (max(((((!var_4) > ((-2010583756 ? var_8 : var_8))))), (((arr_7 [i_1]) ? 2144 : (-2010583756 | -2145)))));
        var_19 = (max((((((arr_7 [3]) ? (arr_0 [12]) : -2142)))), ((~(arr_2 [i_1])))));

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_13 [i_1] [i_2] = (((!12043375918725166536) ? (((-102033000 == 5341802111799761067) ? -1220287968 : (min((arr_3 [i_2]), (arr_0 [2]))))) : 0));
            var_20 = ((((((((!(arr_2 [i_1])))) << (((max((arr_0 [10]), (arr_7 [i_2]))) - 628737077))))) >= (arr_0 [10])));
            var_21 = var_6;
            arr_14 [i_1] [i_1] [i_1] = (max((!4390302784673517042), ((((((arr_8 [7]) ? var_11 : (arr_7 [i_1])))) || (arr_11 [3] [i_1] [9])))));
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_22 = ((1 | ((~(arr_15 [1] [i_1])))));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_23 = min((((!(arr_23 [i_3])))), (109 | 4935));
                            var_24 = (arr_23 [i_6]);
                        }
                    }
                }
            }
            var_25 = (((-(((arr_7 [i_1]) * 457920821)))));
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_26 = 1;
        arr_26 [i_7] [i_7] = ((((-(arr_1 [i_7])))) | (((arr_8 [i_7]) ? ((4361393310214463249 * (arr_18 [10] [i_7] [10]))) : (((((arr_1 [1]) && var_2)))))));
    }
    var_27 = (min(var_27, var_4));
    #pragma endscop
}
