/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((((max(var_5, var_8))) ? (var_11 >= -1936562342) : ((var_12 ? var_6 : var_10))))) ? var_4 : 1581967614));
    var_14 = (!var_6);

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_15 += ((((max(var_0, (arr_3 [i_0 - 1] [i_0] [i_0 + 1])))) ? var_5 : ((-(arr_3 [i_0] [i_0] [i_0 + 1])))));
            arr_7 [6] [i_1] [i_1] = (arr_5 [i_0 - 1]);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_16 = (arr_4 [2] [i_2]);
            var_17 -= (((arr_0 [i_0 - 1]) << 1));
            var_18 ^= ((~(((16 < (arr_1 [i_2]))))));

            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_19 = (((arr_8 [i_2] [i_2] [12]) ^ (arr_17 [i_2] [i_0 - 1] [i_3 + 2] [i_5] [i_4 - 1])));
                            var_20 = ((!(arr_17 [9] [i_5] [10] [i_4 + 1] [i_5])));
                            arr_21 [i_2] [i_4] [i_3] [i_2] [i_2] [i_2] = (((arr_3 [i_4 - 1] [i_5] [i_5]) >= (arr_3 [i_4 + 3] [i_5] [i_5])));
                        }
                    }
                }
                arr_22 [i_2] = (arr_0 [8]);
            }
            for (int i_6 = 4; i_6 < 12;i_6 += 1)
            {
                var_21 = (max(var_21, 134217727));
                var_22 = (((arr_24 [i_0 + 1] [i_2]) ? (arr_23 [i_0] [i_2] [i_6 - 4] [i_0 - 1]) : (arr_5 [i_0 - 1])));
            }
        }

        for (int i_7 = 1; i_7 < 10;i_7 += 1)
        {
            var_23 = (max(3895786094385256484, (((236 >> (288230376151711680 - 288230376151711679))))));
            var_24 &= ((1006632960 && (((arr_3 [i_0 - 1] [i_0 - 1] [i_7 + 3]) != (arr_3 [i_0 - 1] [i_0 + 1] [i_7 + 4])))));
        }

        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            var_25 = ((59 ? -224 : (arr_17 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1])));
            var_26 = (min(var_26, var_9));
        }
        var_27 = ((var_4 ? (arr_31 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : ((((arr_31 [i_0 + 1] [i_0 + 1] [i_0]) > (arr_31 [i_0] [1] [1]))))));
    }
    for (int i_9 = 1; i_9 < 9;i_9 += 1)
    {
        var_28 = (((((((!(arr_31 [i_9] [i_9] [i_9 + 1]))) ? var_10 : 3288334328))) ? (arr_32 [i_9 - 1]) : (arr_34 [i_9 - 1])));
        var_29 ^= (((~var_7) << (((((~8556380160) + 8556380185)) - 23))));
        var_30 = (max(((((((arr_1 [0]) && (arr_5 [i_9])))) << (((arr_6 [i_9 - 1]) + 150)))), (min((~var_3), var_3))));
        var_31 = (min(((max((arr_2 [i_9 - 1]), (arr_2 [i_9 - 1])))), (arr_2 [i_9 + 1])));
        arr_36 [i_9] [i_9] = ((((493996546 && (arr_14 [i_9 - 1] [i_9 - 1] [i_9 + 1]))) ? (((((-8556380160 + 9223372036854775807) << (((arr_3 [i_9] [i_9] [i_9]) - 22483)))) & (3288334327 % -19788))) : (arr_29 [i_9])));
    }
    var_32 -= var_5;
    var_33 = (min(((1 ? var_10 : var_11)), var_5));
    #pragma endscop
}
