/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= ((-35718 - (((min(35718, 11515))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((0 >> (!28361)));
        arr_4 [i_0] = 29817;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_19 += 51200;
        var_20 = 21157;

        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {
            var_21 = var_4;
            var_22 = max(0, 29818);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            arr_12 [i_1] [i_1] [i_1] = -2259;
            arr_13 [i_3] = ((var_1 ? 65535 : (arr_2 [i_1] [i_3])));
            var_23 = arr_5 [i_1];
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            arr_17 [i_1] [i_1] = (((!0) ? ((-(arr_6 [i_4] [i_1]))) : (arr_7 [i_1] [6] [i_4])));
            var_24 = (max(var_24, (((!(arr_1 [i_1]))))));
        }
        var_25 = (min(var_25, (((!((max((arr_7 [i_1] [i_1] [i_1]), (arr_7 [i_1] [2] [i_1])))))))));
    }
    var_26 = var_8;
    var_27 = var_17;
    #pragma endscop
}
