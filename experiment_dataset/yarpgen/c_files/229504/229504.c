/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 7;i_2 += 1)
            {
                {
                    var_20 = (-(((arr_1 [i_1]) ? ((3932160 ? 288230376151711728 : 114)) : var_18)));
                    var_21 = (~-24);
                    arr_7 [i_0 + 2] [i_0 - 1] [i_1] [i_2] = ((-115 >= (min((var_7 / var_4), (min(var_13, 25))))));
                }
            }
        }
        var_22 = (max(var_22, ((max(var_18, ((~(arr_3 [4]))))))));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
            {
                var_23 = ((24 ? 3124252204237142641 : 25));

                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    arr_18 [i_3] [i_4] [i_3] [i_6] [i_3] = var_5;
                    var_24 = (min(var_24, (((var_11 | ((17942 << (((arr_16 [i_3] [i_4] [i_3] [i_6]) - 13525823516281497442)))))))));
                    var_25 += (((~var_0) <= (((491828341 << (((var_6 + 3265390251274553460) - 3)))))));
                }
                for (int i_7 = 3; i_7 < 16;i_7 += 1)
                {
                    arr_22 [i_3] [i_7] [1] [i_4] [i_3] = ((5833757045437173141 + (arr_13 [i_7 + 1] [i_7 - 2] [i_7 - 3])));
                    var_26 = (arr_21 [i_7 - 1] [i_3] [i_7] [16]);
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 17;i_9 += 1)
                    {
                        {
                            var_27 = ((((24 ? var_13 : var_18)) > (arr_10 [i_9 - 1])));
                            arr_27 [i_3] [i_3] [i_3] [i_3] = (((arr_16 [i_3] [i_4] [i_5] [i_8]) && (arr_16 [i_5] [i_8] [i_5] [i_8])));
                            var_28 |= -6807231488463302147;
                        }
                    }
                }
            }
            for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
            {
                arr_31 [i_3] [i_3] [i_3] [i_3] = (!-24);
                var_29 = (((((6 ^ var_9) + 9223372036854775807)) >> (-849680948 && var_12)));
            }
            arr_32 [i_3] = var_1;
            var_30 = ((((var_8 ? (arr_11 [i_3] [i_3] [i_3]) : 288230376151711720)) + var_15));
        }
        for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
        {
            var_31 = (((~var_12) | (((((-1399135716 ? 65 : -17))) ? (arr_21 [i_3] [i_3] [i_3] [i_3]) : (var_16 && 123)))));
            var_32 -= 16777215;
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
        {
            var_33 = 2147483647;
            arr_39 [i_3] [i_3] = ((!(~-1037590036)));
        }
        var_34 = (arr_29 [i_3] [i_3]);
        var_35 = (max((978320731 == -1), ((10480220116713995810 ? var_10 : ((-849680948 ? var_19 : var_0))))));
    }
    for (int i_13 = 0; i_13 < 17;i_13 += 1) /* same iter space */
    {
        var_36 = ((!(var_17 / -var_16)));
        var_37 = (min(var_37, (((((288230376151711728 * ((((44 <= (arr_23 [i_13] [1] [i_13] [i_13]))))))) ^ 884740943184785196)))));
        var_38 += (~var_8);
    }
    for (int i_14 = 0; i_14 < 17;i_14 += 1) /* same iter space */
    {
        arr_46 [i_14] [i_14] = 254;
        var_39 -= 48;
    }
    var_40 = ((var_7 + 9223372036854775807) >> (((((25 ? -288230376151711721 : 5833757045437173155)) < -288230376151711720))));
    var_41 = 99;
    var_42 = ((5833757045437173156 ? (((var_16 != var_1) ? 25 : ((-6112342114928900937 ? var_5 : var_1)))) : var_3));
    #pragma endscop
}
