/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((max(1, (var_8 <= 1)))), ((~(~var_4)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_6 [i_2] = (max(8128, 22801));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_9 [i_0] [i_2] [1] [i_3] [i_1] = ((~((~((42735 & (-127 - 1)))))));
                        var_12 = ((22814 != ((-var_10 ? ((1 ? var_6 : var_6)) : 245))));
                    }
                    for (int i_4 = 4; i_4 < 13;i_4 += 1)
                    {
                        var_13 = (max((-59 * var_7), (((((22795 ? var_7 : 1))) ? (((arr_3 [i_0] [i_2] [10]) ? 63 : 1)) : 1))));
                        var_14 = (min(var_14, ((max((((arr_7 [i_1] [i_4 + 1] [i_4 - 3] [i_1]) >> (var_5 && 1))), (((1 ? 42735 : 1))))))));
                        arr_12 [i_0] [i_1] [i_2] [i_4] = (((((arr_4 [i_4 - 2]) ? 0 : (arr_4 [i_4 + 1]))) * var_7));
                        var_15 &= ((125 & (1 ^ 127)));
                    }
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_16 = ((18446744073709551597 ? (min((var_7 * -7756), (var_6 > 40))) : var_1));
                        arr_15 [12] [i_2] [i_1] [13] = 259454389;
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_1] [i_2] [i_6] [i_6] [i_7] [i_7] = (((((-(arr_1 [i_2])))) ? ((max(var_3, (arr_13 [i_2] [i_1])))) : ((var_1 ? ((max(127, (arr_18 [i_0] [i_1] [i_2] [i_6] [i_7])))) : 1))));
                            var_17 = (max(var_17, 1));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [1] [i_2] [6] [i_6] = (((max(var_9, var_4))) ? (min((arr_14 [i_8] [i_8] [i_6] [i_2] [i_1] [6]), 5687914872350483819)) : (arr_20 [i_1]));
                            arr_27 [i_0] [i_1] [1] [i_2] [7] [i_6] [i_8] = 22801;
                            var_18 = (((((3333339388 || (1 || 3)))) >= (38389 ^ var_0)));
                        }
                        var_19 = (max(var_19, ((max((~var_6), ((13325469936838134124 ? 0 : 0)))))));
                        var_20 ^= (((~var_8) ? (~-108) : (1 ^ -119)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
