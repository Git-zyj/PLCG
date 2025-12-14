/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_17 = (max(var_17, var_5));
        var_18 = (7066 ^ -1);
        var_19 -= 138;
        var_20 = (((var_11 ? ((var_0 + (arr_2 [i_0])) : (arr_2 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_21 += ((((var_5 - 135) >= (arr_6 [i_1] [i_2] [i_2]))));
            arr_7 [i_1] [i_2] = (max((((!(arr_5 [i_2])))), -7145002751746531282));
            arr_8 [i_1] [i_1] [i_1] = 138;
            var_22 = ((((var_7 ? var_6 : (~116))) % (((((max((arr_3 [i_2] [i_1]), (arr_3 [i_2] [i_2])))) ? ((~(arr_1 [i_1] [i_2]))) : (var_4 || var_16))))));
            var_23 -= ((var_12 <= (min(var_12, 129))));
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            arr_19 [i_1] [i_3] [i_3] [i_1] [i_5] [i_1] = (((((((((arr_0 [i_3] [i_6]) % (arr_5 [i_1])))) ? ((var_10 ? var_1 : -733007717246662050)) : (((138 ? 3779 : 424629807)))))) ? (arr_12 [i_6]) : ((((!(63 + var_10)))))));
                            var_24 = (min(var_24, ((((-4180646696410135071 != -29554) == (arr_0 [i_1] [i_3]))))));
                            arr_20 [i_1] [i_3] = var_12;
                            var_25 = ((((!(arr_10 [i_6] [i_5] [i_4]))) ? (max(8614614757309285917, var_2)) : (((((arr_16 [i_1] [i_3] [i_4] [i_3]) && (arr_14 [i_1] [i_3] [i_5])))))));
                        }
                        for (int i_7 = 2; i_7 < 10;i_7 += 1)
                        {
                            arr_25 [i_1] [i_3] [i_4] [i_5] [4] = ((((-(arr_17 [i_3] [i_3] [i_3] [i_5] [i_3] [i_7 + 3]))) > ((var_4 ? (arr_17 [i_1] [i_4] [i_5] [i_5] [i_3] [i_5]) : 2147483646))));
                            arr_26 [i_1] [i_5] [i_4] [i_7 + 2] [i_3] = ((-var_2 != (((!(!var_2))))));
                            arr_27 [i_1] [i_3] [i_3] [i_3] [i_5] [i_5] [i_7] = ((((max((arr_2 [i_4]), (arr_3 [i_5] [i_5]))) >> ((var_14 ? var_5 : var_15)))));
                            var_26 ^= (((arr_6 [i_1] [i_3] [i_4]) ? (((!(((arr_22 [i_1] [i_1] [i_1] [i_1] [i_1]) || 424629807))))) : var_16));
                        }
                        for (int i_8 = 3; i_8 < 11;i_8 += 1)
                        {
                            var_27 -= (arr_24 [i_4] [i_3] [i_1] [i_5] [i_4]);
                            var_28 = (max(var_28, (arr_22 [i_8 + 2] [i_8] [2] [i_8] [i_8 - 1])));
                            var_29 ^= ((!((min((min(1670682229377424613, 733007717246662049)), ((max(139, -83))))))));
                            var_30 *= ((var_9 + (arr_21 [i_3] [i_4] [i_3] [i_4] [i_3] [i_4] [i_1])));
                            arr_32 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = (max((((!(arr_21 [i_5] [i_3] [i_8 - 2] [i_8] [i_8 - 2] [i_8 + 1] [i_8])))), (((var_11 && var_3) - (arr_22 [i_8 - 1] [i_8 - 3] [i_8 - 1] [i_8 - 2] [i_8 - 3])))));
                        }
                        arr_33 [i_4] |= (((~(max((arr_10 [i_1] [i_3] [10]), -1795328427963262877)))) / 48);
                    }
                }
            }
        }
    }
    var_31 = ((~(((!(((var_4 ? var_7 : 39870))))))));
    #pragma endscop
}
