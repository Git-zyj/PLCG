/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_15 &= (arr_2 [i_0] [i_0]);

        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            var_16 = (min(var_16, ((~(((((max(-7053102783393538823, (arr_1 [i_1])))) || ((max(48205, 1))))))))));
            arr_5 [i_1] = (arr_2 [i_0 + 2] [i_0 + 2]);
            var_17 &= (((4294967286 & var_0) ? (min((arr_3 [i_0 + 2]), 1)) : ((min(var_4, (arr_1 [i_0 - 1]))))));
        }
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            var_18 = ((-(min((((!(arr_2 [i_0] [14])))), (arr_6 [i_0 - 1])))));
            var_19 = var_11;
            var_20 = 1;
        }
        for (int i_3 = 2; i_3 < 14;i_3 += 1)
        {
            var_21 = (((((var_3 == (max(var_3, (arr_4 [i_3])))))) * (max((arr_6 [i_0 - 2]), 128))));
            arr_11 [i_0 + 1] [i_3] = ((((((arr_10 [i_0 - 1]) == (max(var_2, 1))))) > (min((arr_1 [i_0 + 1]), 1))));
            var_22 = (-1 ? (((arr_7 [i_0 - 1] [14] [i_3 - 2]) ? -4998847042147048943 : (arr_7 [i_3 + 1] [i_3 + 1] [i_3 + 1]))) : (((var_6 ? var_4 : var_13))));
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            var_23 = ((max(-18, -2734651331)));
            arr_15 [10] = (max(((4998847042147048943 ? (arr_9 [i_0] [i_4]) : 2590838530)), (min(((((arr_7 [i_0] [5] [i_0]) != 1704128755))), (arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
            var_24 = (((max((arr_3 [i_0 + 2]), var_11)) ^ ((((arr_2 [i_0 + 1] [i_0 + 1]) ? (arr_2 [i_0 - 1] [i_0 - 1]) : 1704128767)))));
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_25 *= (((var_4 % var_2) * (-1376289857 >= 4998847042147048943)));
        /* LoopNest 3 */
        for (int i_6 = 3; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 12;i_8 += 1)
                {
                    {
                        var_26 = 8064;
                        var_27 = (arr_2 [i_5] [i_5]);
                        var_28 = var_5;
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        var_29 = (1 / 2734651331);
        arr_29 [i_9] = 40469215;
        var_30 = ((!((((max(1, 2064384)) / (4611681620380876800 > 0))))));
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        var_31 = var_5;
        arr_33 [i_10] = 1403559235904220231;
        var_32 = 4998847042147048926;
    }

    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                {
                    arr_41 [i_11] [1] [20] = 4998847042147048945;
                    arr_42 [i_11] [i_12] [i_13] |= 1;
                    var_33 = ((-2 | (arr_38 [i_11] [i_11] [14])));
                    var_34 = ((((var_3 > -4998847042147048943) & 562949953421312)));
                }
            }
        }
        arr_43 [i_11] = 5;
    }
    var_35 = ((var_2 ^ (min(-var_0, 2588073685))));
    var_36 = ((((1704128766 ? 2064392 : (min(4358903883867843214, 128)))) != (max((0 ^ 4998847042147048943), var_2))));
    var_37 = var_9;
    #pragma endscop
}
