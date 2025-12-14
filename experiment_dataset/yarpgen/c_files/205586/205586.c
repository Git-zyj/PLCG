/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((~((var_3 ? 2305807824841605120 : var_1)))), var_1));
    var_12 = (-((40824 ? -4584076885253557521 : (((15360 ? 0 : -13))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = 2147483630;

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_14 |= (min(((((arr_9 [i_0] [i_0] [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_3]) ? 1044480 : (arr_5 [i_0 + 1])))), (((((45 ? (arr_1 [i_0]) : var_0))) ? ((var_9 ? (arr_2 [i_0]) : 3026305078080555637)) : ((-21301 ? var_3 : -5015101754115129930))))));

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_15 = ((+((+(max((arr_11 [i_0] [i_0]), 342632417))))));
                            var_16 = (max((max((((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [i_1]) : var_4)), ((32767 ? 101 : 20)))), (--127)));
                            var_17 = ((-((7394368215236712668 ? (((arr_0 [9]) ? var_9 : var_10)) : (((max(215, 0))))))));
                        }
                        arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] = (38 ? ((max((arr_0 [i_0 - 1]), var_0))) : ((-3736478486335997815 ? (arr_3 [i_0 + 1]) : (-32767 - 1))));
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_18 = (max(var_18, (((-(((!(((var_4 ? var_0 : var_1)))))))))));
                        var_19 = ((~(((~18446744073709551615) ? -6 : (~1)))));
                        var_20 = (max(var_20, ((((((-16 || (((var_5 ? var_4 : 105)))))) == (((!((((arr_0 [i_0 + 1]) ? (arr_1 [0]) : (arr_0 [i_2]))))))))))));
                    }
                    for (int i_6 = 2; i_6 < 9;i_6 += 1)
                    {
                        var_21 = (max(var_21, (((((((arr_8 [i_6 + 1] [i_2] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1]) ? var_8 : var_5))) * (min((max(4186966605719444233, (arr_1 [i_1]))), (!var_7))))))));
                        var_22 = (((((((var_2 ? -13 : 29))) ? -1849339214 : ((var_6 ? var_8 : var_0))))) ? ((max(((~(arr_12 [i_1] [i_2] [i_1] [i_0 + 1]))), (((26099 == (arr_5 [i_0]))))))) : ((((((arr_8 [i_0] [i_0] [i_0] [i_6] [i_1] [i_6]) ? (arr_10 [i_0] [i_1] [i_1] [i_0] [7]) : -1))) ? var_8 : (min((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]), var_7)))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_23 = (arr_2 [i_0 - 1]);
                        var_24 = (((arr_4 [i_0 - 1] [i_1]) | var_6));
                        var_25 = ((-127 - 1) ? (((arr_12 [i_0] [i_0] [i_2] [i_0]) ? 4146377884763765879 : (arr_1 [i_7]))) : var_6);
                    }
                    var_26 = ((((((((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_1 [8]) : 77))) ? ((1193257833631403529 ? (arr_0 [i_1]) : (arr_18 [i_1] [i_1] [i_2]))) : (((var_3 ? var_5 : -6282161104214331098))))) * (min((var_8 + 0), ((81 | (arr_15 [i_0] [i_0] [i_1] [i_1] [i_0])))))));
                }
            }
        }
    }
    #pragma endscop
}
