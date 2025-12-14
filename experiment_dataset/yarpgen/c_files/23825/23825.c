/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((max((var_0 + var_0), (min(var_1, 13794513508091305256)))) * ((min((var_10 / var_12), ((max(-82, 0))))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [8] |= (((var_5 - -62) >> (((((arr_0 [12]) ^ var_7)) - 9800398485886001280))));
        arr_3 [i_0] = (((var_6 | var_6) ^ (4294967295 ^ 3007)));
        var_15 = (((var_12 * 151) / ((1 * (arr_1 [i_0])))));
        arr_4 [i_0] = (((65535 | var_4) < (((((arr_1 [i_0]) < var_3))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            arr_11 [i_1] [i_2] = (min((min((((var_5 >> (var_0 - 31534)))), (((arr_8 [i_1] [i_2 + 1]) ^ (arr_9 [i_1]))))), (min(((((arr_5 [i_1] [i_2]) > 10193684159308412601))), (max(var_6, (arr_9 [i_1])))))));
            var_16 = (min(var_16, ((((((((arr_6 [i_2 - 1] [i_1]) / var_9)) - (min((arr_7 [i_1]), var_2)))) / (((((82 + (arr_9 [i_1]))) / (((arr_5 [i_1] [i_1]) / 23358))))))))));
            arr_12 [19] = (max((((((max(-23358, var_1))) && ((max(var_9, 0)))))), (max((-23368 / var_6), (max(-17545, (arr_6 [i_1] [i_1])))))));
        }
        var_17 = (max((((((arr_8 [i_1] [11]) % var_10)) - (((((arr_5 [i_1] [i_1]) > (arr_6 [i_1] [i_1]))))))), (((max(var_6, (arr_7 [i_1]))) * (((min(0, var_7))))))));
        var_18 = (min(var_18, ((min(((((var_10 || var_6) <= ((var_4 * (arr_6 [i_1] [i_1])))))), (((((var_0 > (arr_6 [i_1] [i_1])))) + (-23358 > 87))))))));
    }
    var_19 = (max((min((max(var_6, 0)), (var_1 && var_8))), (max((var_1 + var_4), (-6334 + -1)))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                var_20 = (min(var_20, (((((min(((min(var_7, (arr_14 [i_3] [i_4])))), (-56 * var_13)))) & (max(((max((arr_16 [17] [i_3]), (arr_14 [i_3] [i_3])))), (min((arr_15 [i_3] [i_3]), var_11)))))))));
                var_21 = (((min(((0 & (arr_18 [i_3] [1] [i_3]))), (min(82, 0)))) - ((((((arr_17 [i_3 + 1]) | (arr_14 [i_3] [i_3]))) & (0 + 1))))));
                arr_20 [i_3] = (max(((((((arr_15 [i_3] [i_4]) | -99))) == (max(5910806641713035590, var_4)))), (-7938120611069464815 < 106)));
            }
        }
    }
    #pragma endscop
}
