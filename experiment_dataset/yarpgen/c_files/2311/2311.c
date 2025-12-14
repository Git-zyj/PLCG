/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((var_5 * (-32760 * var_4)))) ? (min(var_6, var_0)) : ((max(83, 257003302))));
    var_14 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_0] = var_4;

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_9 [9] = ((+(((max((arr_6 [i_0] [i_1] [i_2]), (arr_2 [i_0] [i_1]))) + ((min(var_11, 58023)))))));
                    arr_10 [i_0] [i_0] [i_1] [i_2] = 962192689;
                }
                arr_11 [6] [i_1] [i_1] &= (((arr_3 [i_0] [i_0] [i_1]) != (arr_3 [i_0] [i_0] [i_1])));
            }
        }
    }

    for (int i_3 = 1; i_3 < 8;i_3 += 1)
    {
        arr_15 [i_3 - 1] = ((((min((arr_6 [i_3 - 1] [i_3 - 1] [i_3 - 1]), (arr_13 [i_3 + 1])))) ? var_6 : (arr_6 [i_3] [i_3] [i_3 - 1])));

        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                arr_21 [i_3] [i_3] = ((-(arr_0 [i_3 + 1])));
                arr_22 [i_4] &= 257003302;
                arr_23 [i_3] [i_3] [i_5] [i_5] = (max(((((((var_2 ? 295276411 : -8974678725622995066))) != var_3))), 58012));
                arr_24 [i_5] [i_4] [i_3 - 1] = max(7513, ((var_7 ? ((-1 ? (arr_4 [i_4]) : 5336454194443554951)) : var_8)));
            }
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        {
                            arr_32 [i_3 + 2] [i_3] [i_3] [i_8] [i_8] = (arr_20 [i_3] [i_4] [i_6] [i_8]);
                            arr_33 [i_3] [i_3] [i_8] [i_3] = (((((min(-5336454194443554951, 9223372036854775795)))) ? (((-(var_9 - var_6)))) : ((var_11 ? (var_8 + 0) : (var_3 * -5557)))));
                            arr_34 [i_8] = max((arr_16 [i_7] [i_7] [3]), (65535 | 17857314386700937767));
                            arr_35 [i_7] [i_7] [i_7] = ((~(!4322944541723003934)));
                        }
                    }
                }
                arr_36 [i_6] [i_3] = (((((7513 != (!1)))) + (arr_8 [i_3 - 1] [i_3 - 1])));
                arr_37 [i_6] = var_12;
            }
            arr_38 [i_4] [i_4] [i_4] = ((65535 ? (min((arr_13 [i_4]), 6659658911082220915)) : var_12));
            arr_39 [i_4] [i_4] = (!var_7);
            arr_40 [i_4] [4] [4] = min((((0 ? -185504670 : -2090458041990545027))), 295276411);
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    {
                        arr_48 [i_3 - 1] [i_9] [i_10] = ((min((-257003303 | 53), (arr_31 [i_3] [i_9] [i_3] [i_3] [i_3]))));
                        arr_49 [i_9] [i_9] = (((((min(2732511997498857683, 0)) * ((((!(arr_1 [i_3] [5]))))))) + ((1 ? (-9223372036854775807 - 1) : 1053544147))));
                        arr_50 [i_3 - 1] [i_4] [i_4] [i_10] [i_10] &= (0 + 58022);
                    }
                }
            }
        }
        arr_51 [i_3] = 123;
    }
    #pragma endscop
}
