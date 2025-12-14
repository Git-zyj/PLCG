/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_10 ^= (((((var_2 ^ ((var_5 ? var_5 : -6743871033812541738))))) ? 6375888662442972622 : 0));
        arr_2 [i_0] = ((-1427077938544130782 ? var_1 : var_7));

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            var_11 -= (((0 || 1427077938544130781) ? (arr_4 [i_0] [i_1 - 1] [i_0]) : ((var_9 ? var_1 : 32512))));
            var_12 = (min(var_12, ((((max((arr_0 [11]), var_6)) + ((1 ? ((var_1 ? var_0 : (arr_0 [i_0]))) : var_1)))))));
            arr_5 [i_0] [i_1] = ((((var_0 ? var_7 : 3076890427048159352)) / 9223372036854775807));
        }
    }
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        var_13 = (min(var_13, (((var_7 ? 1 : (((arr_7 [i_2 - 1]) ? -1427077938544130788 : var_5)))))));

        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            arr_12 [i_3] [i_3] [i_3] = (((!33822867456) ? var_8 : ((2343434169112224703 ? var_0 : 10))));
            arr_13 [i_3] = 10;
            var_14 = ((var_0 ? (arr_7 [i_3 + 2]) : var_5));
            arr_14 [i_3] = ((~(~8)));

            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                var_15 ^= (((((arr_16 [i_2] [0] [1] [10]) - var_3)) + ((((arr_15 [14] [i_2 + 1] [i_2]) ? (arr_8 [i_3] [i_3]) : var_0)))));
                var_16 = arr_8 [i_3] [i_2 + 2];
                var_17 = var_5;
            }
            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                arr_19 [i_3] [i_3] = (((max(var_9, (arr_16 [i_3] [i_3 + 1] [i_3 + 1] [i_3]))) < var_8));

                for (int i_6 = 2; i_6 < 17;i_6 += 1)
                {
                    var_18 = (min(33822867457, 1427077938544130787));
                    var_19 ^= (arr_6 [i_2 + 2]);
                    var_20 = (((1 != 5867596560328681607) ? (((~((28430 ? 1 : 18))))) : 16));
                }
                arr_23 [i_2] [i_3] [i_3] = ((max(((2 ? var_9 : (arr_10 [i_5])), 65526))));
            }
        }
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            arr_26 [i_7] = -1;
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    {
                        arr_31 [i_7] = (((((~((var_2 ? var_7 : -4466283147053139453))))) ? (((arr_17 [i_7] [i_7]) ? 26262 : var_3)) : ((((var_7 >= ((185 ? var_6 : 26736))))))));
                        arr_32 [i_7] = ((!((((arr_10 [i_2 + 1]) ^ var_7)))));
                    }
                }
            }
            var_21 = (max(var_21, (((-(((~6) ? (arr_22 [i_2 + 1] [i_2 - 2] [i_2] [i_2]) : 18446744073709551615)))))));
        }
        for (int i_10 = 3; i_10 < 17;i_10 += 1)
        {
            var_22 = (min(var_22, (((~((~(((!(arr_7 [1])))))))))));
            arr_36 [13] [i_10] = ((!var_2) ? (((((max(-6584011685484694763, var_0))) && 3))) : (!1));
        }
    }
    var_23 = ((var_2 ? (~var_9) : 26));
    var_24 = 16646144;
    #pragma endscop
}
