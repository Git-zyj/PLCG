/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    var_18 = (((~(104 == var_8))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 ^= -7568179819873165568;
        arr_2 [i_0] = ((+(((!var_2) ? -var_14 : (1497988744 & -1347377831)))));
        var_20 ^= (!var_2);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_8 [10] [i_2] [i_2] = (((3806743381360352671 | var_3) >> (var_13 + 1790604485)));
            arr_9 [i_1] [i_1] [i_2] = ((var_12 < (((1 >> (3806743381360352685 - 3806743381360352677))))));

            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                arr_13 [i_3] = (!189);
                var_21 |= ((var_7 >= (65533 && 189)));
                arr_14 [i_1] [6] = (var_13 | var_10);
                var_22 = (~var_0);
                arr_15 [i_1] [3] [i_3] = (~var_1);
            }
        }

        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                var_23 = (~var_15);
                arr_22 [15] [i_4] [i_5] = (((var_12 % var_4) * var_0));
            }
            var_24 -= (((!var_4) ? (!-1347377828) : var_0));
            var_25 = (var_6 <= var_15);
            arr_23 [i_1] [i_1] [i_1] |= 264241152;
        }
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            arr_27 [i_6] [18] = (65535 || 5364);
            var_26 = (~var_3);
            var_27 = ((!(~var_4)));
            var_28 ^= (((~1) / var_3));
            var_29 = var_14;
        }
        var_30 = (var_6 == var_2);
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        var_31 -= -1347377841;
        arr_30 [i_7] [i_7] = ((!((min(var_8, 13242130410808984943)))));
        var_32 = var_0;
        var_33 = ((-216036693 + 2147483647) << (!1));
    }
    var_34 = var_12;
    #pragma endscop
}
