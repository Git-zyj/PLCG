/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 3339139023;
    var_16 = min(8087226852881029709, (((9223372036854775807 ? -1251701902 : 1251701898))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_17 *= (((((-89 ? 702281832469655921 : (min(var_5, var_5))))) ? (arr_1 [i_0]) : (21602 > 19240)));
        var_18 += (max(((min(2270764798, ((var_5 ? (arr_1 [i_0]) : (arr_2 [i_0] [i_0])))))), (~7998868484743073002)));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_5 [i_1] = (((9033398334383194983 - (arr_4 [i_1] [i_1]))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_8 [6] [i_2] [i_1] = (~(arr_7 [0] [i_2] [i_2]));
            arr_9 [4] [i_2] = 0;
            var_19 = (((-9223372036854775807 - 1) ? 0 : 18446744073709551615));

            for (int i_3 = 2; i_3 < 15;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_20 = ((arr_17 [15] [i_3 + 2] [i_3 + 2]) ? (arr_17 [i_3 + 2] [i_3 + 2] [i_3 - 1]) : 9033398334383194963);
                            arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] |= (var_13 && var_1);
                        }
                    }
                }
                arr_19 [i_1] [i_1] [1] = ((var_6 != (arr_14 [i_2] [i_2] [i_3] [i_2])));
                arr_20 [i_1] [i_2] [i_1] [i_1] |= ((~(!var_12)));
            }
            var_21 = (min(var_21, ((((1 ^ var_3) ? var_0 : ((~(arr_15 [i_1] [i_2]))))))));
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_22 = (max(var_22, (((~((~(arr_4 [i_1] [i_6]))))))));

            for (int i_7 = 2; i_7 < 16;i_7 += 1)
            {
                var_23 = (max(var_23, (max(((max((arr_16 [i_7 + 1] [i_7] [i_7 - 1] [i_7] [i_7]), (arr_16 [i_7 + 1] [i_7] [i_7 - 1] [i_7] [i_7])))), (min(var_0, var_2))))));
                var_24 = (((-8972574652062342312 >= -1608448613) ? ((min(38843, 65523))) : ((67 ? (arr_14 [i_1] [i_7 - 1] [i_7 - 2] [i_7]) : var_14))));
                arr_26 [i_1] [i_6] [i_7] [1] |= (-((~(arr_13 [i_1] [i_6] [i_7 - 2] [i_7]))));
                var_25 |= (((((arr_16 [i_1] [i_6] [i_6] [i_7] [i_7]) ? ((~(arr_7 [9] [7] [i_6]))) : ((((arr_17 [i_1] [i_6] [i_1]) & 8087226852881029709))))) - (((((var_0 ? var_6 : 0))) & (arr_6 [0] [i_7])))));
                var_26 = var_0;
            }
            var_27 = (((((((~(arr_25 [i_1]))) & (arr_21 [i_1] [i_6])))) ? (((((~(arr_12 [i_1] [i_1] [i_6] [i_1])))) ? var_2 : -8972574652062342312)) : (~9033398334383194963)));
        }
    }
    var_28 = var_14;
    #pragma endscop
}
