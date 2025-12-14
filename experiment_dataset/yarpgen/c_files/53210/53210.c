/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_1 ? var_2 : ((-(!var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = 290242266995205879;
                arr_4 [i_0 + 1] [i_1] [i_1] = ((18446744073709551615 ? ((((((arr_0 [i_1]) ^ var_7))))) : (((arr_0 [i_0 + 1]) ? (arr_3 [i_0 + 1] [i_0 + 2]) : 18156501806714345737))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_12 ^= ((-(((arr_7 [i_0 + 2]) / (arr_7 [i_0 - 1])))));
                                var_13 &= (min((((arr_8 [i_1]) ? (arr_8 [i_1]) : var_2)), ((var_7 ? (~290242266995205861) : (min(var_3, 5667372247362128637))))));
                                arr_11 [i_3] = (((max(-1, (((arr_5 [i_0]) ? (arr_0 [i_0]) : 290242266995205879)))) & ((((arr_3 [i_0 + 2] [i_4 + 2]) ? (arr_3 [i_0 + 2] [i_4 - 2]) : -1237397579)))));
                            }
                        }
                    }
                }
                var_14 = ((-5214750838552109088 && (arr_0 [1])));
            }
        }
    }
    var_15 = ((var_1 & (var_1 == var_2)));
    #pragma endscop
}
