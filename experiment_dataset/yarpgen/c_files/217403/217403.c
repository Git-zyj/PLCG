/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((((~(max(var_6, var_14))))), ((((max(var_14, var_10))) ? var_12 : var_1))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 += arr_0 [i_0] [i_0];
        var_18 |= arr_2 [i_0];
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_19 = ((var_14 ? ((((max(1, (arr_5 [i_1] [i_1])))) ? ((((arr_5 [i_1] [i_1]) >= (arr_4 [i_1])))) : ((min((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1])))))) : (arr_4 [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        var_20 = (((!-67) ? (((((arr_8 [i_1] [i_3] [i_3] [i_3]) < ((var_13 ? (arr_10 [i_1] [i_2] [i_3]) : (arr_9 [i_1] [i_2] [i_3]))))))) : ((((var_14 ^ (arr_10 [i_1] [i_2] [i_3]))) % (arr_9 [i_1] [i_3] [i_3])))));
                        var_21 = (max((max(1083373542, 0)), (max((arr_11 [i_3] [i_4]), -1))));

                        for (int i_5 = 1; i_5 < 9;i_5 += 1)
                        {
                            arr_18 [i_1] [i_1] [i_1] [1] [i_1] [i_3] = (arr_14 [i_2] [i_2] [i_4] [i_3] [i_2] [2]);
                            var_22 ^= (arr_17 [i_1] [i_1] [i_1] [i_1] [i_5 - 1]);
                            arr_19 [i_1] [i_2] [i_3] [i_1] [i_1] = ((var_12 ? (((arr_15 [i_1] [i_1] [i_1] [i_3] [i_3] [i_4] [i_1]) ? (max(var_15, (arr_16 [i_3]))) : (arr_7 [i_2]))) : (arr_14 [i_1] [i_2] [i_3] [i_3] [i_4] [i_5 - 1])));
                            var_23 = (max(var_23, (((~((((0 ? var_3 : (arr_9 [i_2] [i_2] [i_2]))))))))));
                        }
                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            arr_24 [i_2] [i_2] [i_3] [i_2] [i_6 + 1] [i_6 + 1] [i_3] = (arr_22 [i_3] [6] [i_3] [i_3] [6]);
                            arr_25 [i_1] [8] [i_3] [i_2] [i_3] [i_4] [i_1] = (((((((arr_15 [i_6] [i_6] [i_6 - 2] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6]) > (((arr_17 [i_1] [3] [i_1] [i_1] [i_1]) | (arr_15 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))))))) > (((!(arr_10 [i_1] [i_2] [i_3]))))));
                            arr_26 [i_1] [i_1] [i_3] [i_1] [i_1] = 1015808;
                            var_24 = (((((arr_8 [10] [i_3] [i_2] [i_2]) ? (arr_8 [i_1] [i_3] [i_4] [i_6]) : (arr_6 [i_4])))) ? (~9007199221186560) : 255);
                        }
                        for (int i_7 = 4; i_7 < 10;i_7 += 1)
                        {
                            var_25 = (i_3 % 2 == zero) ? (((((((arr_20 [i_2] [i_3] [4] [1] [i_7 - 3]) >> (((arr_20 [i_3] [i_3] [i_3] [i_4] [i_7 - 3]) - 44))))) ? ((max((arr_20 [i_7] [i_3] [i_3] [i_4] [i_7 + 1]), (arr_20 [i_2] [i_3] [i_3] [i_7] [i_7 - 2])))) : (arr_20 [i_1] [i_3] [i_4] [i_4] [i_7 - 4])))) : (((((((arr_20 [i_2] [i_3] [4] [1] [i_7 - 3]) >> (((((arr_20 [i_3] [i_3] [i_3] [i_4] [i_7 - 3]) - 44)) - 37))))) ? ((max((arr_20 [i_7] [i_3] [i_3] [i_4] [i_7 + 1]), (arr_20 [i_2] [i_3] [i_3] [i_7] [i_7 - 2])))) : (arr_20 [i_1] [i_3] [i_4] [i_4] [i_7 - 4]))));
                            var_26 *= (max(32605, (arr_21 [i_1] [i_1] [i_1] [i_1] [i_4])));
                            var_27 = (arr_13 [3] [3] [i_2] [i_4]);
                        }
                        arr_30 [i_3] [i_4] [i_3] [i_4] [i_3] |= (min(((min((arr_5 [i_3] [i_3]), (arr_12 [i_1] [i_2] [i_2] [i_3] [i_2] [i_2])))), var_9));
                    }
                }
            }
        }
    }
    var_28 = 32;
    var_29 = (max(var_29, ((min(1, (min(32767, 4161536)))))));
    var_30 |= (max(((var_3 | ((1689686495 ? 588132070 : var_15)))), var_6));
    #pragma endscop
}
