/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((!(((var_3 ? var_13 : var_17))))) ? ((1 ? -9158335027579860200 : (((var_2 ? -1903840260 : 128))))) : ((max(var_2, ((var_17 ? var_8 : 2864075969)))))));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_19 = (--2660348983);
        var_20 = (arr_1 [3] [i_0 + 1]);
        var_21 = (((arr_0 [i_0 - 1]) ? ((max(((((arr_1 [i_0 - 1] [19]) ? -1989031258 : 255))), 21))) : ((-(((arr_1 [i_0] [8]) ? (arr_0 [i_0]) : (arr_1 [i_0] [17])))))));
        var_22 ^= (min(0, -9158335027579860200));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_23 = ((!(max(((!(arr_3 [i_1]))), (!-1903840260)))));
        var_24 = arr_4 [1] [i_1];
        var_25 = (max(((((!0) >= (((arr_4 [i_1] [i_1]) & (arr_3 [i_1])))))), (min((((arr_4 [i_1] [i_1]) << (((arr_3 [17]) - 2356995973)))), (arr_5 [i_1])))));
    }
    for (int i_2 = 3; i_2 < 13;i_2 += 1)
    {
        var_26 &= (!17);
        var_27 &= (((~-65535) ? ((((max(128, 2742919668))) ? (((-12382 ? 4294967274 : 4294967275))) : (arr_1 [i_2] [i_2 - 3]))) : 1134851951));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_28 |= ((!((((((0 & (arr_3 [i_3])))) ? (((-(arr_12 [11])))) : ((-(arr_3 [i_2]))))))));
                    var_29 = (min((((((1634618312 ? (arr_8 [4] [i_3]) : 1))) ? (~1) : (max(9223372036854775807, 2396230077)))), (((~(arr_11 [i_2] [i_2] [i_4]))))));
                    var_30 &= ((!(arr_4 [9] [i_3])));
                    var_31 &= ((~(max((max(64798, -1911749676564983492)), (((~(arr_12 [i_4]))))))));
                }
            }
        }
    }
    #pragma endscop
}
