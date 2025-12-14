/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_0;
    var_17 = 544932460832185757;

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_12 [11] [i_1] [i_2 + 1] [i_0] = (1245917272 <= 3049050015);
                        var_18 = (((max(var_1, var_15)) / var_1));
                    }
                }
            }
            var_19 = var_15;
            arr_13 [i_0] [i_1] = (max((max((arr_5 [i_0 + 2] [i_0]), (arr_5 [i_0 + 2] [i_0]))), (((!(arr_5 [i_0 + 1] [i_0]))))));
        }
        arr_14 [i_0] = (!176);
        arr_15 [i_0] = ((((max(72, (((arr_3 [10] [2]) + 2797969227))))) ? (((var_14 ? var_14 : (~172)))) : ((~(4 & var_9)))));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 15;i_4 += 1)
    {
        arr_18 [8] &= (2285490913431308636 & -2107121279);
        var_20 = ((var_4 % (arr_16 [i_4 + 2])));

        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_21 = var_10;
            var_22 = (arr_20 [i_4 - 1] [i_5] [i_4]);

            for (int i_6 = 3; i_6 < 14;i_6 += 1)
            {
                arr_24 [i_4] = (((var_11 ? var_9 : (arr_21 [i_4] [i_4] [i_4] [i_4]))));
                var_23 = var_1;

                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    arr_28 [i_4] [i_5] [i_5] [i_4] [i_7] [i_4] = ((var_13 ? -4 : 65533));
                    var_24 = var_7;
                    arr_29 [i_4] [i_5] [i_7] = (((1 - 1) ? (arr_26 [i_4] [i_5] [i_4]) : var_11));
                }
            }
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            var_25 = (min(var_25, 37117));
            var_26 = var_1;
            var_27 = ((~(3977465240 | 15546094894520935664)));
            arr_32 [i_4] [i_4] = ((var_11 ? (arr_25 [i_4 + 1] [i_4] [i_4 + 2] [i_4]) : (arr_19 [i_4])));
        }
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            arr_36 [i_4] [i_9] [i_4] = (i_4 % 2 == zero) ? (((2464348232 >> (((arr_33 [i_4 - 1] [i_4]) - 13088509349817275501))))) : (((2464348232 >> (((((arr_33 [i_4 - 1] [i_4]) - 13088509349817275501)) - 14729087535966596793)))));
            arr_37 [i_4] = ((var_8 & (var_8 == 56)));
            var_28 = ((var_14 && ((((arr_33 [i_4] [i_4]) ^ var_0)))));
            arr_38 [i_4] [0] [i_9] = (arr_21 [i_4] [i_4 - 1] [i_4 + 1] [i_4 + 2]);
        }
    }
    #pragma endscop
}
