/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 = ((!(arr_1 [i_0] [i_0])));

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            var_20 = 1;
            var_21 = (var_4 || 1);
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_8 [i_0] [i_0] [5] = (((var_15 % 3) ? 18446744073709551609 : (((((arr_0 [i_2] [i_2]) && 1))))));
            var_22 = (min(var_22, (((arr_3 [i_2] [i_0]) * (arr_2 [i_2])))));
        }
        arr_9 [i_0] = -2147483645;

        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            var_23 |= (arr_1 [i_0] [4]);
            var_24 = (-127 - 1);
            var_25 = 1;
        }
    }
    for (int i_4 = 3; i_4 < 10;i_4 += 1)
    {
        arr_15 [9] = 110;
        arr_16 [i_4] = ((1 ? 1 : 18092935984284065430));
        var_26 = ((((!(arr_3 [1] [i_4 - 1]))) ? (~-113) : var_10));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_27 = ((7 ? 18092935984284065430 : 18092935984284065422));
        var_28 = (min(var_28, (!-8126579525567204209)));
    }
    var_29 = var_2;
    var_30 = (353808089425486208 < -110);
    #pragma endscop
}
