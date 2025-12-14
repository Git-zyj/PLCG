/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min((!var_8), ((0 ? var_11 : 0))))) ? ((((((9223372036854775807 ? 3233 : 32757))) ? var_0 : ((2798 ? var_0 : 2113929216))))) : (min(((23300 ? var_4 : 3072)), (var_0 || var_4)))));
    var_13 = ((var_1 ? (((!(var_8 != var_10)))) : (10486 || 255)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 = ((+((((arr_1 [i_0] [i_0]) || (arr_6 [i_2] [i_1] [i_0] [i_0]))))));
                    var_15 = (~var_0);
                    var_16 = (((((((243 ? 1 : 62))) ? (arr_3 [i_1] [i_1] [i_1]) : ((var_7 ? -103234421 : (arr_1 [i_0] [i_0]))))) != ((((var_4 | var_10) ? -125 : (arr_2 [i_1] [i_0]))))));
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 8;i_3 += 1) /* same iter space */
    {
        var_17 = (max(var_17, 0));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    var_18 = ((1 ? var_11 : var_6));
                    var_19 = (((1 && 33767) ? (min(var_9, (arr_5 [i_5] [i_4 + 1] [i_3 + 1]))) : -var_8));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_20 = (!18446744073709551615);
                                var_21 = (arr_0 [i_3 - 1]);
                            }
                        }
                    }
                }
            }
        }
        var_22 = (1 ? ((((((arr_8 [i_3]) ? var_8 : (arr_7 [i_3 + 1] [i_3])))) / (arr_1 [i_3 + 2] [i_3 + 1]))) : ((((((var_4 ? 1729159130 : var_6)) != ((((!(arr_17 [i_3] [i_3] [i_3 + 2] [i_3] [i_3 + 2] [i_3]))))))))));
        var_23 = (arr_6 [i_3] [i_3] [i_3 - 1] [i_3 + 2]);
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 8;i_8 += 1) /* same iter space */
    {
        var_24 += 4294967283;
        arr_23 [i_8] = (((arr_20 [i_8 + 1]) ^ var_8));
    }
    var_25 = (((((!var_7) ? (!var_10) : ((var_7 ? var_7 : 255)))) + (((~var_8) ? var_3 : ((18446744073709551591 ? 234 : 618721960))))));
    #pragma endscop
}
