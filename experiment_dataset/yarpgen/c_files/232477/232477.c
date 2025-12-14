/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 0;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 8;i_3 += 1)
                {
                    {
                        var_21 = (min(var_21, ((((((-(arr_10 [i_0] [i_3 + 2] [i_3] [i_3 - 1] [9])))) ? 10720859322326962304 : (max(5135764611491856783, (arr_8 [i_1] [i_1] [8] [i_3 - 1]))))))));
                        var_22 = (max(var_22, (((~(((((arr_5 [i_0]) ? 5 : var_16)))))))));
                    }
                }
            }
        }
        arr_12 [i_0] [i_0] = var_17;
    }
    var_23 = ((((max(6748784445408585230, -29550))) ? 12994677085421471669 : var_11));

    for (int i_4 = 3; i_4 < 10;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 10;i_6 += 1)
            {
                {
                    var_24 = max(16294, -20);
                    var_25 = var_15;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 11;i_8 += 1)
            {
                {
                    arr_28 [i_8] = ((((min((!var_15), (arr_21 [i_4 + 2] [i_4] [i_7 + 1])))) ? (arr_20 [i_8 + 1] [i_8 - 2] [i_8]) : (min(var_19, ((max(var_0, var_6)))))));

                    for (int i_9 = 1; i_9 < 12;i_9 += 1)
                    {
                        var_26 = 14;
                        var_27 = ((-((min((!var_12), 48187)))));
                    }

                    for (int i_10 = 2; i_10 < 12;i_10 += 1)
                    {
                        var_28 *= 9;
                        var_29 = 23358;
                        arr_34 [i_8] [i_8] [i_8] [i_8] = (+((-5654 * (((arr_25 [i_4] [i_7]) / var_16)))));
                    }
                    arr_35 [i_8] [i_7] [4] [i_8] = (var_14 ? (((((arr_22 [i_4] [i_8 + 2] [i_8 + 2]) >= (~var_15))))) : (((((arr_15 [i_4 - 2] [i_7]) / 15293913816969094033)) * var_5)));
                }
            }
        }
        arr_36 [i_4] = (max(((-((min(4, 643))))), (((-127 - 1) - 10))));
    }
    for (int i_11 = 1; i_11 < 18;i_11 += 1)
    {
        arr_39 [i_11] = (((min(var_5, (((arr_38 [10] [i_11]) ? 179 : var_19)))) >= ((((((arr_38 [17] [i_11]) ? var_3 : var_15)) > (var_10 >= var_15))))));
        var_30 = (min(var_8, (max(var_16, 11))));
    }
    for (int i_12 = 1; i_12 < 17;i_12 += 1)
    {
        var_31 = (min(var_31, ((((2305842940494217216 ? (((min(var_19, var_9)))) : ((var_6 ? var_15 : var_18)))) / (arr_37 [i_12])))));
        var_32 = (((((min((var_19 >= 70368739983360), (arr_40 [i_12] [i_12]))))) ^ (((arr_41 [i_12]) ? ((11379352833131825278 ? var_8 : var_18)) : 31146))));
    }
    #pragma endscop
}
