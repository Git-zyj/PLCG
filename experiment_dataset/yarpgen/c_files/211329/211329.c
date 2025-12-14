/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (!var_14);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_19 = (min(var_19, ((((arr_8 [1] [i_1] [i_2 + 1] [i_3]) ? ((((~65534) ^ var_2))) : (min((18446744073709551615 <= 1), (min((arr_3 [1]), (arr_6 [i_1] [i_1]))))))))));
                        var_20 = (arr_7 [i_0] [i_0] [i_0] [i_0]);
                    }
                }
            }
        }
        var_21 = (min(var_21, var_10));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        arr_13 [i_4] [i_4] = ((((((((~9223372032559808512) + 9223372036854775807)) >> (((min(18446744073709551615, (arr_6 [i_4] [5]))) - 8996344073730119389))))) ? (min(60, ((var_3 & (arr_3 [i_4]))))) : (((((arr_2 [i_4] [7] [i_4]) << (var_2 + 1755328609))) >> ((((54 ? 234 : 0)) - 213))))));

        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            var_22 ^= ((!(arr_8 [8] [i_5] [1] [5])));

            for (int i_6 = 1; i_6 < 13;i_6 += 1)
            {
                arr_21 [i_5] = (var_0 + 60);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_23 *= (max(((64 ? ((0 / (arr_11 [i_5 + 1] [i_8]))) : 103)), (((arr_11 [i_4] [i_5 + 1]) ? (((max(127, 1)))) : (min(18446744073709551613, (arr_10 [10])))))));
                            arr_26 [12] [i_5] [i_6] [i_6] [i_8] = (((((!var_13) << (((arr_0 [i_4]) + 1124011331)))) > (arr_22 [i_5] [i_7] [i_6] [i_5] [i_4] [i_4])));
                            var_24 = var_14;
                            var_25 = ((~((((((var_10 < (arr_15 [i_4] [7] [i_5])))) == (var_11 <= var_12))))));
                        }
                    }
                }
                var_26 += ((((var_14 << (67108864 - 67108864))) > (var_17 / 194)));
            }
        }
    }
    var_27 = var_16;
    #pragma endscop
}
