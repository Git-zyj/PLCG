/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= var_10;
    var_19 &= 46358009;

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (min(var_13, (arr_1 [i_0 + 3])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 ^= ((-(2147483647 / 2147483647)));
                    var_21 += (min((((arr_6 [i_0 + 3]) >= var_16)), ((var_17 <= (11169426243730814438 & 2147483636)))));
                    var_22 = (min(var_22, -1198096308762751758));
                    arr_9 [i_1] [i_0 - 2] [i_2] = 38;
                }
            }
        }
        var_23 ^= (arr_6 [i_0 - 2]);
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_13 [10] = var_11;
        var_24 = var_4;
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    var_25 = min(2147483647, ((var_0 ? 358584776 : var_9)));
                    arr_23 [i_5] [i_4] [10] [i_5] &= ((-8449763138998315372 || -3759001236480413119) ? (((((arr_18 [i_5 - 3] [i_5 - 2]) >= -498253792)))) : (min(-7838068865089476575, (arr_20 [i_5 + 1] [i_5] [i_6]))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 9;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    {
                        arr_32 [i_9] = ((+((((((arr_1 [8]) ? var_8 : -292937477))) - ((var_16 ? (arr_0 [i_4] [i_8 + 1]) : var_2))))));
                        var_26 *= (((((((8066 ? (arr_12 [1]) : 2305843009213689856))) ? (arr_18 [i_8 + 3] [i_9]) : 18446744073709551615)) > (((((((arr_0 [16] [i_9]) ? (arr_26 [i_9] [0]) : 0)) != (var_14 > 21595)))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
