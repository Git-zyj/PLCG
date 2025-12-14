/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_7;

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = var_3;
        var_13 = 1;
        var_14 &= (max(((((-100 ? var_8 : var_9)))), 288230376151711743));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_15 = (~var_9);
            arr_5 [i_1] = 12733;
            var_16 &= ((-83 ? var_10 : ((((-1214188100 + 2147483647) << (var_9 - 910475518))))));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            var_17 &= var_4;
            var_18 = ((((((((arr_7 [2] [i_2] [i_2]) / (arr_3 [i_0] [i_2])))))) >= ((min(-288230376151711744, var_11)))));
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                var_19 &= ((((((var_3 ? 17070753231022476458 : (arr_8 [i_0] [1])))) ? -288230376151711752 : 4225063201)));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            arr_20 [i_0] [2] [i_0] [i_0] [i_0] = ((~(~var_5)));
                            arr_21 [i_0] [2] [i_4] [i_5 - 1] &= (((((-117 / var_9) && 288230376151711743)) ? ((((((arr_3 [i_0] [21]) << (((arr_17 [i_0] [i_4] [i_5] [i_6]) - 24780))))) ? ((var_1 ? var_8 : (arr_10 [15]))) : var_10)) : (((min(26150, var_11)) << (((min(-2021422137, var_4)) + 2021422141))))));
                            arr_22 [i_4] [i_5] [i_4] [i_3] [1] = (min(((-11745 ? var_6 : var_4)), ((-(arr_13 [i_5] [i_5 - 1] [i_5 - 1] [i_5])))));
                        }
                    }
                }
                var_20 = (min(var_20, (((-var_8 ? (((var_1 ? (arr_0 [i_0] [i_3]) : (arr_14 [11] [i_3] [i_3] [i_3] [i_3] [i_3])))) : -5415715593968798606)))));
                var_21 ^= -82;
                var_22 = ((((min(var_2, var_11)) > (var_9 / 32767))));
            }
            var_23 = ((~((~(arr_7 [0] [1] [1])))));
            var_24 = (arr_15 [i_0] [i_0] [1] [i_3]);
            var_25 |= ((-((((min(var_3, var_9))) ? (max(76, (arr_11 [i_0] [i_0] [i_0]))) : 60738))));
            var_26 = (min(var_26, var_3));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_27 = ((!(((-((var_11 ? (arr_10 [12]) : var_4)))))));
            var_28 = (max(var_28, 21801));

            for (int i_8 = 3; i_8 < 20;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    arr_32 [i_9] [i_9] [2] [i_7] [i_9] [i_0] &= ((~(arr_17 [i_7] [i_7] [i_7] [i_7])));
                    var_29 = ((!((((1545 ^ var_2) & (~var_7))))));
                }
                var_30 = (min(var_30, ((((var_10 == var_10) >> ((((-((var_10 ? (arr_25 [i_0] [i_0] [i_8] [i_7]) : var_9)))) - 1010550519)))))));
            }
            var_31 = ((((var_2 ? var_6 : -288230376151711754)) * (47347 / var_2)));

            for (int i_10 = 2; i_10 < 21;i_10 += 1)
            {
                arr_35 [i_7] [i_7] [18] [i_0] |= ((((3710476360944097810 && ((min(var_7, 3888092013786096771))))) ? (max(13031028479740752998, 10447094108328798762)) : ((((!(63512 && var_3)))))));
                var_32 = (arr_26 [i_7]);
                var_33 = (max(((((arr_6 [i_0]) != (var_1 != var_2)))), (min((2198 * var_5), 15699246398997032582))));
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 1;i_13 += 1)
            {
                {
                    var_34 = (max(var_34, (((arr_11 [i_13 - 1] [i_13 - 1] [i_12]) ? var_2 : 13493101070550203717))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 24;i_15 += 1)
                        {
                            {
                                var_35 = (arr_16 [i_12]);
                                arr_49 [i_14] [i_14] [i_15] [i_14] [i_15] [i_14] |= (!189528988);
                                var_36 = (max(var_36, var_4));
                                var_37 = (((arr_17 [19] [i_12] [22] [22]) | var_6));
                            }
                        }
                    }
                    var_38 ^= (((63323 / 63782) ? var_11 : -var_4));
                    var_39 = var_9;
                }
            }
        }
        var_40 = (arr_33 [i_11] [i_11] [i_11] [i_11]);
        var_41 = (min(var_41, 2198));
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 24;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            {
                var_42 = var_0;
                var_43 = (min(var_43, -7920579296854905378));
            }
        }
    }
    var_44 = -26284;
    var_45 = (min(var_45, var_0));
    #pragma endscop
}
