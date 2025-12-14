/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] [i_0] &= (((min((~4129460771), (~0))) | (((-(178 * 1))))));
        var_10 = ((var_3 ? (((178 << var_6) ? ((67 + (arr_1 [i_0 - 1]))) : (arr_0 [i_0 + 2]))) : 1));
        var_11 = (max(var_11, ((((1 << (((arr_2 [i_0 - 4]) - 6565086253245811910))))))));
    }
    for (int i_1 = 4; i_1 < 13;i_1 += 1)
    {
        var_12 = (((((-(arr_4 [i_1 - 4] [i_1 - 1])))) % ((-(arr_5 [i_1 - 3])))));
        var_13 *= (((arr_7 [i_1] [i_1 - 3]) ? ((~((var_5 ? var_5 : (arr_7 [i_1 - 3] [i_1 - 3]))))) : (~32758)));
        var_14 *= (((((arr_5 [i_1 - 4]) ? (arr_4 [i_1] [i_1]) : (arr_6 [1]))) / (arr_5 [i_1 + 1])));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_10 [i_2] = (arr_9 [i_2] [i_2]);
        arr_11 [i_2] = 25;
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 15;i_5 += 1)
                {
                    {
                        arr_18 [i_3] [i_2] [i_3] [i_4] [i_5 + 2] = ((((arr_15 [i_2] [i_3] [i_3] [i_5 + 2]) >= (arr_9 [i_2] [i_5]))));

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            arr_22 [i_3] [i_3] [i_4] [i_5] [i_6] [i_6] [i_3 + 1] = ((var_3 >> (var_1 - 16487385454123375288)));
                            var_15 = (max(var_15, (((~(((((~(arr_15 [i_3] [i_4] [i_2] [i_6])))) ? (arr_12 [i_2] [i_4 + 2] [i_3 - 1]) : (arr_17 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 + 1]))))))));
                            arr_23 [i_2] [i_3] [i_4] [11] [i_6] = (((((-var_5 ? (((204 ? 4099049758 : (arr_8 [0])))) : 2097151))) || (((18 ? (var_9 & var_8) : (1 * 1))))));
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            arr_26 [i_2] [i_2] [i_3] [i_4 + 1] [i_4] [i_5 + 1] [i_7] &= 1;
                            var_16 = ((4294967295 / (((-(arr_25 [i_2] [i_2] [i_3] [i_3] [i_4 + 1] [i_4 + 1] [i_3]))))));
                            var_17 = ((!((min(2281028317924550734, (((arr_21 [i_3] [i_3 - 1] [i_2] [i_5 + 4] [i_7]) % (arr_16 [i_2] [i_3] [i_4] [i_5]))))))));
                            var_18 = (~(((arr_14 [i_5 + 3] [i_5 + 2] [i_5] [i_5]) ? (arr_14 [i_5 - 2] [i_5 - 1] [i_5] [i_5 + 2]) : var_3)));
                        }
                        arr_27 [i_3 - 1] [i_3] [i_3] = -90;
                        var_19 = -256;
                    }
                }
            }
        }
        var_20 *= ((((~(arr_25 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))) ? (((~(!var_5)))) : ((((arr_17 [i_2] [i_2] [i_2] [i_2]) ? (arr_19 [i_2] [10] [i_2]) : (arr_17 [i_2] [1] [i_2] [i_2])))));
        var_21 *= ((((var_5 || (arr_21 [i_2] [i_2] [i_2] [12] [i_2])))));
    }
    var_22 = (max(var_22, (((((var_1 ? (var_3 / var_2) : (((7 ? var_6 : 2990))))) << (var_1 - 16487385454123375265))))));
    var_23 = 178;
    var_24 = (-127 - 1);
    var_25 = (-1374856739 && -var_9);
    #pragma endscop
}
