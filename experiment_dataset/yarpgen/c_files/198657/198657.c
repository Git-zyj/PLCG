/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = ((!(((((((arr_0 [i_0]) ^ 3088933206))) ? var_9 : (!var_5))))));

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            var_12 += (max(1478952111, (max(((-7196 ? var_6 : 18301380163336955372)), 9279093080845565003))));
            var_13 = (((var_3 ^ (7936 - var_9))));
            var_14 = (arr_4 [i_1 - 1] [9]);
            var_15 = (var_5 > var_0);
        }
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            var_16 = ((!(((~((var_5 ? (arr_8 [i_2] [i_0]) : 57598)))))));
            var_17 = min(var_11, ((var_8 ? (arr_4 [i_2] [i_0]) : var_8)));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            arr_17 [i_5] = var_5;
                            var_18 = (min(var_18, (((!((((arr_3 [i_0] [i_2] [i_3]) ? (arr_12 [i_2] [1] [i_3] [i_4]) : 7930))))))));
                            var_19 += 7936;
                            var_20 &= (min((min(-6, (arr_5 [7] [i_4]))), var_11));
                            var_21 ^= ((6 ? (arr_16 [i_5] [i_4] [i_2] [i_2 - 1] [2]) : (((arr_16 [i_0] [i_2 + 1] [i_2] [i_5] [i_5]) ? (arr_16 [i_5] [i_2 - 1] [i_2] [i_4] [i_5]) : var_1))));
                        }
                        var_22 = ((20 ? var_9 : ((((max(39154, -4133110761774191658))) / 10573250482641157171))));
                        arr_18 [i_0] [i_2] [i_2] [i_3] [i_4 + 2] = ((min((arr_4 [i_4] [i_2]), ((4294967280 ? (arr_5 [i_2] [8]) : var_2)))));
                    }
                }
            }
            var_23 += 29;
        }
        for (int i_6 = 3; i_6 < 10;i_6 += 1)
        {
            arr_21 [i_0] [i_0] = arr_4 [i_6] [i_6 - 2];
            var_24 += (arr_1 [i_0] [i_0]);

            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                arr_25 [i_7] = (max((((max((arr_20 [i_0] [i_0]), (arr_24 [i_0] [i_0] [i_0] [i_0]))) / 5433672374794134940)), ((((arr_3 [i_7] [i_6 - 2] [i_0]) ? (((max((arr_19 [i_0]), (arr_24 [i_0] [i_6] [i_6] [i_7]))))) : (max(1, 3041084499)))))));
                arr_26 [i_0] [i_6] [i_7] = (arr_22 [i_0] [i_6] [i_7] [i_6]);
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        {
                            arr_31 [i_0] [i_6] = (max((max(((((arr_9 [i_0] [i_7] [i_7] [i_9]) ? var_6 : 29))), (arr_10 [i_7]))), var_8));
                            var_25 = ((((((arr_5 [i_6 - 3] [i_7]) >> (!57599)))) ? (((((max((arr_29 [6] [6] [i_7] [i_8] [i_9]), var_1)))) * (max(8589934591, 44)))) : ((((!(arr_11 [i_8] [i_8] [i_8])))))));
                            arr_32 [i_0] [i_6 - 1] [i_7] [1] [i_6 - 1] [i_9] = (((-(arr_14 [i_6 - 2] [i_6 - 1] [i_6 - 1] [i_0]))));
                            var_26 *= ((-(arr_13 [i_0] [i_6] [i_6] [i_8] [i_8] [i_9])));
                        }
                    }
                }

                for (int i_10 = 3; i_10 < 9;i_10 += 1)
                {
                    var_27 += (max((max((arr_12 [i_0] [i_6] [i_7] [i_10]), (arr_10 [i_6 + 1]))), (((~(arr_13 [2] [i_6 + 1] [i_6 - 1] [i_6 - 2] [i_6] [i_6 + 1]))))));
                    var_28 = ((max((arr_20 [i_10] [i_10 + 1]), 220)) << (var_3 - 24170));
                }
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    var_29 = ((var_6 ? 4255159640002442329 : 60978));
                    var_30 |= (arr_33 [i_6] [i_6] [i_6 + 2] [i_6 - 1] [i_6 - 3]);
                }
            }
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                var_31 += var_0;
                var_32 = ((((+(max((arr_20 [i_12] [7]), var_3)))) & (((((((arr_24 [i_0] [i_6 - 2] [i_12] [i_12]) ? 14 : var_7))) ? (((!(arr_39 [i_12] [i_6] [i_0] [i_0])))) : var_3)))));
            }
            var_33 = (max(var_33, (((var_5 ? (((((var_4 ? (arr_38 [i_0] [i_0] [i_0] [i_0]) : 5922610358376897150)) - (((min(13, (arr_27 [i_0] [i_6] [i_0] [i_0] [i_0])))))))) : ((var_6 ? var_1 : (!var_10))))))));
        }
    }
    var_34 |= 1;
    var_35 = (max(-198792370606076550, (((((var_7 ? var_4 : var_5))) ? var_9 : -var_7))));
    #pragma endscop
}
