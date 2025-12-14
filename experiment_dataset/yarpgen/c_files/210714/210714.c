/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, (var_16 & var_18)));
                    arr_9 [i_0] = ((((min((~245), ((var_9 ? -4399084295471020155 : 2452187397))))) ? var_2 : (max((((arr_4 [i_0] [i_2] [i_2]) ? var_4 : (arr_2 [i_2]))), ((-54 ? (arr_8 [i_1] [i_1] [i_1] [i_1]) : 18446744073709551615))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 10;i_5 += 1)
                {
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_4] [i_5 + 1] = 1313;
                        var_22 = ((-54 / (max((arr_4 [i_5 + 1] [i_5 - 1] [i_0]), (arr_4 [i_5 + 2] [i_5 + 2] [i_5])))));
                        var_23 = (min(var_23, (((((arr_17 [i_5 + 1] [i_5 + 1] [i_5 + 2] [i_0]) && (arr_17 [i_5 + 1] [i_5] [i_5 + 2] [i_4])))))));
                        arr_19 [i_0] [i_3] [i_3] [i_3] = (((((0 != var_13) && -54)) ? (arr_12 [i_0]) : (~-54)));
                    }
                }
            }
        }
    }
    for (int i_6 = 2; i_6 < 13;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 14;i_9 += 1)
                {
                    {
                        arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] = (((arr_28 [i_6] [i_9]) << (((((arr_28 [i_7] [i_7]) ? 809571460622965537 : (arr_22 [i_7] [i_9]))) & var_0))));
                        var_24 |= (arr_28 [i_6] [i_6]);
                    }
                }
            }
        }
        var_25 ^= (((((max(var_8, var_14)))) ? 16471 : (arr_29 [i_6 + 2] [i_6] [i_6 - 2] [i_6])));
        arr_33 [i_6] = (((max(1023, 16471)) + (arr_31 [i_6 - 1] [i_6 - 2] [8] [i_6] [8] [i_6 - 1])));
        var_26 |= (min((((2537606924 && ((min(0, var_15)))))), (((!10366990559852323964) + -56918247))));
    }
    var_27 = ((16 ^ (var_13 == var_16)));
    var_28 = (((((var_19 + (((var_6 ? var_0 : 13)))))) ? var_13 : (!var_15)));
    var_29 = (((var_8 && var_10) * (!var_11)));
    #pragma endscop
}
