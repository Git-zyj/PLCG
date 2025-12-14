/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_16, 18446744073709551596));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_18 = (((~(arr_10 [i_0] [i_1] [i_1] [i_0] [i_3]))));
                        var_19 = (max(var_19, (((+(min((~-120), (((arr_1 [i_0] [i_0]) << (((arr_0 [i_2]) - 3524)))))))))));
                    }
                }
            }
        }
        var_20 = (min(((~(~22736))), 122));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_14 [i_4] = (((120 << (((((arr_12 [i_4]) ? 21751 : (arr_12 [i_4]))) - 21744)))));
        var_21 -= ((-(((1 ? 103 : 278077868)))));
        arr_15 [i_4] = ((~(((((arr_12 [i_4]) ? 2 : -115))))));
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        arr_18 [i_5] = ((-(max(((-12 ? (arr_13 [i_5] [i_5]) : 27095)), (max((arr_9 [i_5] [i_5]), (arr_5 [i_5])))))));
        arr_19 [i_5] = (((((max(26, 0))) ? (48927 & 1) : (((arr_8 [i_5] [i_5] [i_5] [10] [i_5] [i_5]) ^ (arr_3 [i_5] [i_5] [i_5]))))));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 16;i_7 += 1)
            {
                {
                    arr_24 [i_5] [i_5] [i_5] [i_7 + 1] = ((~(min(((((arr_4 [i_5]) >= 63))), (((arr_8 [i_5] [i_5] [i_6 + 3] [i_6] [i_5] [i_7]) ? (arr_8 [i_5] [i_6] [i_6] [i_6] [i_7] [i_7]) : (arr_11 [i_7] [i_5] [i_5] [i_5] [i_5] [i_5])))))));
                    var_22 *= (((((((max((arr_9 [i_5] [i_6]), 7164441633472917759))) ? -0 : (arr_3 [i_5] [i_5] [6])))) ? (((((arr_2 [10]) ? (arr_22 [10]) : (arr_9 [i_5] [i_5]))) * -107)) : ((((1073741824 ? -30094 : -115))))));
                }
            }
        }
    }
    #pragma endscop
}
