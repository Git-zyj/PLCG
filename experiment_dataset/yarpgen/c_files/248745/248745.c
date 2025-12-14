/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_2] = 16;
                    var_19 *= -21526;
                    var_20 = ((((!(arr_3 [i_0 + 1] [i_0]))) ? (((arr_1 [i_2] [i_2]) ? (((arr_1 [i_0] [11]) ? 10 : 2811110364)) : (((~(arr_4 [13] [1] [i_2])))))) : (((arr_4 [i_2] [i_0 + 3] [i_0 + 4]) ? (arr_5 [i_0 + 3] [i_0 + 3] [i_0 + 4]) : (arr_1 [i_0 + 3] [i_0 + 4])))));
                }
            }
        }
        var_21 = (((~(((arr_2 [i_0] [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_4 [i_0] [i_0 + 3] [i_0 - 1]))))));
        var_22 -= (min((arr_2 [i_0 + 1] [i_0] [i_0 + 1]), 70));
        arr_7 [3] [i_0] = (min((((!((((arr_5 [i_0 - 1] [i_0] [i_0]) << (((arr_3 [9] [i_0 + 3]) - 1391761053)))))))), (((((0 ? (arr_0 [i_0]) : 0))) ? (((-1 ? 3601951440735993573 : 89))) : ((-1 ? 18446744073709551599 : -127))))));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
    {
        var_23 = ((((((((~(arr_11 [i_3])))) ? ((1 ^ (arr_9 [9]))) : (arr_10 [i_3] [11])))) ? (arr_11 [i_3]) : 5262));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    var_24 = (~0);
                    var_25 = (arr_11 [i_3]);
                    arr_17 [13] [i_4] [i_4] = (((((1 ? -11 : -74))) ? (arr_9 [i_4]) : 1));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
    {
        arr_21 [i_6] [i_6] = (((((arr_18 [0]) >> (((arr_12 [i_6] [i_6]) ? 1 : (arr_8 [i_6]))))) << (98 - 77)));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 16;i_9 += 1)
                {
                    {
                        var_26 = (((((max(-95, (arr_11 [i_6]))))) ? ((((arr_19 [i_6]) == 128))) : (((((~(arr_27 [i_6] [i_7] [i_8] [i_9 + 2]))) << (((~16) - 18446744073709551586)))))));
                        var_27 = (((((62 && 189) <= ((max(27984, 19569))))) ? (arr_27 [i_9 + 2] [10] [10] [i_6]) : ((((max((arr_12 [0] [i_9]), 3395))) ? (max(110, 18446744073709551612)) : (max((arr_18 [i_6]), 18446744073709551613))))));
                        var_28 = ((0 ? (max((((~(arr_25 [i_7] [i_7] [i_7])))), (arr_23 [i_6] [i_7] [i_9]))) : (((~(arr_14 [i_7] [i_8 + 1] [i_7]))))));
                    }
                }
            }
        }
    }
    var_29 = var_10;
    var_30 = (min(((((max(8, var_12))) ? ((max(32767, var_12))) : -62)), 3395));
    var_31 = (!162);
    #pragma endscop
}
