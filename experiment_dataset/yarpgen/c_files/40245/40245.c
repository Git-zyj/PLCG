/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] = (min((~3042727639), 3677052945));
                var_16 = (((arr_2 [i_0] [i_0] [i_1]) ? (!var_8) : (((2112178316 > (arr_3 [i_0]))))));
                var_17 = ((((!((min((-2147483647 - 1), 20))))) || ((!(((18446744073709551597 ? 9223372036854775794 : 17457)))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_18 |= var_8;
                    var_19 = (max(var_19, 0));
                    arr_13 [i_3] [i_4] [6] &= ((-17457 ? -12288 : (((arr_10 [i_3 + 1] [10] [i_3 - 1]) ? 0 : 644420158))));

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_20 -= ((280027228 ? 88019916 : 18446744073709551615));
                        var_21 = (1 < 13055);
                        arr_16 [i_2] [2] [i_2] [i_4] = ((!((((arr_6 [i_3] [i_3 + 1]) ? (arr_15 [i_3] [i_3 - 2] [i_5] [i_5] [i_4]) : 3441705974)))));
                    }
                    var_22 = 64;
                }
            }
        }
    }
    var_23 ^= var_7;

    /* vectorizable */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_24 = ((18446744073709551608 ? 7 : 17457));
        arr_19 [i_6] [i_6] = 61650162;
        var_25 = (arr_2 [i_6] [i_6] [i_6]);
        var_26 = (max(var_26, (-650975812 / 32)));
    }
    #pragma endscop
}
