/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_18 = ((!(((((18446744073709551599 | (arr_6 [i_0] [i_3] [i_4])))) && (arr_2 [18])))));
                                var_19 -= (min(((((18446744073709551599 % (arr_16 [i_0] [i_1] [6] [i_3]))) | var_6)), ((min((arr_9 [i_0 + 1] [i_4 - 1] [i_4]), -428163480)))));
                                var_20 += max(((428163470 ? 1 : 3923468677)), ((-(arr_5 [i_0 - 2]))));
                                arr_18 [i_4] [i_1] = var_17;
                                var_21 = (((arr_3 [i_3]) ? ((max(32505856, (arr_13 [i_4] [i_4] [i_4 + 1] [i_4] [i_4] [i_4])))) : (min(((var_15 ? 5026743690294258682 : (arr_11 [i_0] [7] [i_2] [9] [i_4 - 1]))), (((var_17 ? 896 : -538341339)))))));
                            }
                        }
                    }
                    arr_19 [i_0] [i_0] [i_1] [i_2] = (((arr_1 [i_1] [i_2]) ? ((max(var_9, (arr_5 [i_1])))) : (max((1080863910568919040 / var_12), (arr_6 [i_0 - 1] [i_0] [i_2])))));
                }
            }
        }
    }

    for (int i_5 = 3; i_5 < 20;i_5 += 1)
    {
        var_22 = ((((((var_15 % (arr_20 [i_5] [i_5]))))) ? (arr_22 [i_5] [i_5]) : (arr_21 [i_5 - 1])));
        var_23 = (min(var_23, ((((((-(max(-8813409617605095255, 16352))))) ? -428163480 : (~428163496))))));
        var_24 = 4294967289;
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                {
                    var_25 = ((((0 ? var_6 : 8813409617605095262))) || ((min((arr_2 [i_7]), var_3))));
                    var_26 = (~(arr_28 [i_6]));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            {
                                var_27 = ((((1551858049 || (((var_13 ? 2736103923 : (arr_29 [i_8] [i_8] [i_8] [i_9]))))))));
                                arr_36 [i_9] [i_9] [i_8] [i_7] [i_8] &= (((((-127 - 1) + 2147483647)) >> (((min(var_5, (min((arr_8 [i_6] [i_6] [i_9] [i_9]), (arr_26 [6]))))) + 1932895668))));
                                var_28 = (min(var_28, (arr_32 [i_6] [i_6] [i_6] [i_6] [4] [i_6])));
                                var_29 = ((-(max((((arr_32 [i_10] [i_9] [i_8] [i_8] [i_7] [i_6]) ? -36 : (arr_22 [i_8] [i_7]))), ((((arr_16 [i_6] [i_7] [i_8] [i_9]) % var_0)))))));
                                var_30 *= (max(75, (-396851444 - var_17)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_31 -= ((-(~1)));
                                var_32 = (arr_33 [i_6] [3] [i_8] [i_11] [i_11]);
                                var_33 = (min(var_33, (((min((((1835008 ? 3957675686 : 1))), var_7)) | 7746767015675533048))));
                                var_34 &= -568405077545580633;
                            }
                        }
                    }
                    arr_43 [i_6] [i_8] [i_8] = 3923468677;
                }
            }
        }
        var_35 &= ((((var_2 ? var_17 : (((-(arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))))) + ((min(((max((arr_11 [i_6] [i_6] [i_6] [i_6] [i_6]), 32505868))), (arr_2 [i_6]))))));
    }
    for (int i_13 = 0; i_13 < 24;i_13 += 1)
    {
        var_36 = 568405077545580634;
        var_37 = (max(var_37, (((var_0 ? ((((min(1, var_10))) | (arr_46 [i_13]))) : (((((arr_45 [20]) % var_7)))))))));
        var_38 = (min(var_38, (((+(max(1460445807343831606, ((min((arr_46 [i_13]), 2))))))))));
    }
    var_39 = (min(var_5, 1));
    var_40 = (max(var_40, (min(var_14, (3 > 1185353203)))));
    #pragma endscop
}
