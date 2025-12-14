/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_10 = (!var_7);

        /* vectorizable */
        for (int i_1 = 1; i_1 < 8;i_1 += 1) /* same iter space */
        {
            var_11 = (max(var_11, (!var_5)));
            var_12 = var_0;
            arr_4 [i_0] |= var_0;
        }
        for (int i_2 = 1; i_2 < 8;i_2 += 1) /* same iter space */
        {
            arr_7 [i_0] = 5955;
            var_13 = ((!((max(var_1, (1721415992 - 4262296490))))));
            arr_8 [i_0 + 1] |= (var_2 ? ((((!(arr_3 [i_2 - 1]))) ? (max((arr_6 [i_0]), (arr_2 [i_0]))) : (arr_1 [3] [i_0]))) : 4294967290);
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 7;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 7;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 7;i_5 += 1)
                    {
                        {
                            var_14 = (min(2097152, 13046));
                            var_15 = (((~var_9) ? ((4292870162 ? var_6 : (arr_16 [i_0 + 1] [i_0] [i_2 + 2] [i_4 - 2] [i_4]))) : (((arr_16 [i_0 - 2] [i_0] [i_2 - 1] [i_4 + 2] [9]) ? (arr_16 [i_0 - 2] [i_2 - 1] [i_2 + 2] [i_4 + 1] [i_0 - 2]) : var_3))));
                        }
                    }
                }
            }
        }
        var_16 -= -1649244472;
        var_17 += (((((((arr_16 [i_0 - 2] [i_0] [i_0] [i_0 - 1] [9]) >> (var_9 - 354538675))))) & var_5));
        arr_18 [8] [i_0] = ((!var_0) ? (arr_6 [i_0 - 1]) : (min(var_3, (arr_1 [i_0] [i_0]))));
    }

    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        var_18 = (min((min((arr_20 [i_6]), (arr_20 [4]))), (arr_19 [i_6])));
        arr_21 [0] = ((5 ? ((3281899652 ? 4262296490 : (arr_19 [i_6]))) : 1721415992));
        var_19 = (min(var_19, var_7));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    {

                        for (int i_10 = 2; i_10 < 10;i_10 += 1)
                        {
                            var_20 = (max(var_20, (((!(arr_32 [6] [i_10] [i_10] [i_10] [i_10 + 2] [10]))))));
                            var_21 ^= (((((var_4 ? (((arr_23 [8]) ? var_0 : (arr_30 [0] [i_7] [11] [i_9] [i_10 + 1] [i_10 + 2]))) : -45))) % -var_2));
                            var_22 = (min(var_22, ((min((((arr_26 [i_10 + 3]) ? 790088689 : (arr_26 [i_10 + 1]))), ((((arr_29 [i_7] [i_7] [i_6]) && (((-1721415991 ? 0 : 4294967279)))))))))));
                            var_23 = ((((min(46, 4400))) != ((((arr_30 [i_9] [i_10 + 1] [i_10] [i_10] [i_10 - 2] [i_10 - 2]) != (arr_30 [i_7] [i_10 + 1] [i_10 + 1] [i_10] [i_10] [i_10 - 1]))))));
                        }
                        var_24 = ((-1 ? 1721415992 : 0));
                    }
                }
            }
        }
        var_25 -= (arr_26 [i_6]);
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                {
                    var_26 = ((arr_33 [i_13]) ^ var_5);
                    arr_42 [i_11] = (((~var_1) + (((var_7 / (arr_35 [i_11] [10]))))));
                    var_27 = (((arr_35 [i_11] [i_12]) && var_3));
                    arr_43 [i_11] [10] [i_13] = -785581524;
                }
            }
        }
        var_28 = (min(var_28, 2741242221));
    }
    #pragma endscop
}
