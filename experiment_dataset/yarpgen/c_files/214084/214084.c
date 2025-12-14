/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((121 | (max(0, 4294967295))));
    var_12 = (~20);
    var_13 = var_5;
    var_14 = ((((((max(var_8, 11)) >> (((-31787 + -120) + 31957))))) && 18446744073709551610));

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        var_15 = ((max(-1, -8192)));
        var_16 -= (min((min(20, (((18446744073709551586 ? 0 : var_3))))), (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_17 ^= (arr_5 [i_1] [i_2] [i_2]);
            var_18 = (min(18446744073709551605, ((~(arr_2 [i_2] [i_2])))));
            arr_7 [i_1] [i_1] = (min(((!((min(1, 6764140822887909834))))), (47 || 16)));
            arr_8 [i_1] [i_1] [i_1] = var_6;
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_11 [i_1] [i_3] = ((-((~(min(1806371124556118262, 1))))));
            arr_12 [i_1] = ((+(((arr_10 [i_1]) ? (arr_10 [i_3]) : (arr_10 [i_1])))));
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_19 = ((min((max(10264299907184535387, (arr_14 [i_4])), 1))));
            arr_15 [1] [1] &= ((~(min(9, 1145214817))));
            var_20 |= (min((((16640372949153433336 / 8) ? -86 : (min(1806371124556118262, 11682603250821641781)))), ((((arr_5 [i_1] [i_1] [i_4]) >= 6)))));
        }
        arr_16 [i_1] [i_1] = ((~(((21147 ? 8106 : 65517)))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_21 = ((-(arr_9 [i_5] [i_5] [i_5])));
        arr_20 [i_5] = ((8208 << (21 - 4)));
        var_22 = ((-15 ? (arr_3 [i_5]) : (!-12)));
        var_23 = -27;
    }
    #pragma endscop
}
