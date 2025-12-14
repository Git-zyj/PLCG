/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_7 || (!var_16)));

    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_20 = (max(-553823574065443174, (!-var_18)));

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            var_21 = (max(var_18, ((-(16384 % var_15)))));
            var_22 = (min(var_22, ((max((((arr_3 [1]) / 6)), (((!(~80)))))))));
            var_23 = ((~((-1 ? -354169886 : (var_15 * -5703)))));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_24 = (max(((((((-354169864 ? var_2 : -23393))) ? (arr_6 [i_0]) : var_8))), (((max(var_15, var_2)) * ((min(354169886, var_7)))))));
            var_25 = (!var_5);
            var_26 = ((((min((min(5703, (arr_2 [i_0] [i_0] [i_0]))), (arr_0 [i_0])))) ? (((((max((arr_6 [i_0]), -1))) ? (var_15 & 0) : (arr_6 [i_0])))) : (min(-5714, 144115188075855808))));
        }
    }
    for (int i_3 = 1; i_3 < 11;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 12;i_5 += 1)
            {
                {
                    arr_16 [10] [i_3] [i_4] [i_5] = ((!((max((arr_4 [i_5 - 2]), 1518284173)))));
                    arr_17 [i_3] [i_4] [i_5] [i_3] = (max((795479290 + 239), ((-((1207483004 ? var_7 : 3584))))));
                    arr_18 [i_3] [i_4] [i_5] = var_9;
                    var_27 = (((max((((var_13 ? 54759 : var_3))), (max(-11, var_5))))) ? var_1 : -var_2);
                    var_28 = (max(var_28, ((min((-18 * -178), var_16)))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    {
                        var_29 = (arr_22 [i_3] [i_7] [i_3]);
                        arr_27 [i_3 + 1] [10] [i_3] [i_3] = ((((((16 ? 173 : 1761550485)) >> ((((max(var_16, (arr_26 [i_3] [i_3] [i_6] [i_6] [i_7] [i_8])))) - 132))))) ^ (min(-99, (max(30, var_15)))));
                        arr_28 [2] [i_6] [i_3] [i_6] [i_8] = (max((((884354986 * 10) ^ ((11126 ? 354169892 : 18076877655087863411)))), ((((((-354169892 ? var_16 : var_4))) ? -0 : var_4)))));
                    }
                }
            }
        }
        arr_29 [i_3] = ((5 * ((((min((arr_13 [i_3] [i_3]), -11))) - -var_4))));
        arr_30 [i_3] = ((((((!(arr_11 [i_3 + 1]))))) + (max(1055531162664960, 26))));
    }
    for (int i_9 = 1; i_9 < 24;i_9 += 1) /* same iter space */
    {
        arr_34 [i_9] = (max((max(((((-9 + 2147483647) >> 10))), 3637556424)), (((~(~0))))));
        arr_35 [i_9] = (((((max(var_11, 1152921504606846968)))) ? (arr_32 [i_9 - 1]) : (((0 ? 29 : 15)))));
        var_30 = ((((((~(arr_31 [i_9]))) >= (!var_6))) ? (max(((max(var_3, (arr_33 [i_9])))), (max(8180876270105446491, 536870912)))) : ((((((var_2 ? var_10 : var_4)) == 32))))));
    }
    for (int i_10 = 1; i_10 < 24;i_10 += 1) /* same iter space */
    {
        var_31 = (max(var_31, (((+((max((arr_37 [i_10 + 1]), (arr_37 [i_10 + 1])))))))));
        arr_40 [i_10] = ((!(354169886 < -2045253786)));
        var_32 = (((((((max(-1404613465, var_0))) ? (min(1517840853859753522, var_2)) : 35))) ? ((-354169886 % (min(16760020061200040033, var_17)))) : (max(((2126755117 ? var_8 : 12288)), (((var_8 ? 2629435197 : (arr_37 [i_10]))))))));
    }
    var_33 ^= var_7;
    #pragma endscop
}
