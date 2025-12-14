/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_11 = (max(var_11, (((((min(var_4, var_2))) != (!var_8))))));
        var_12 = ((-22814 - (min(var_5, var_1))));
    }
    for (int i_1 = 4; i_1 < 13;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_13 = -var_2;

            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                var_14 = -var_6;
                var_15 = (!var_9);
                var_16 -= ((var_9 && ((var_0 <= (var_6 - var_5)))));
            }

            for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
            {
                var_17 = ((((var_1 + (var_2 + var_4))) + var_5));

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    arr_18 [i_1] [i_4] [i_1] = var_9;
                    arr_19 [i_1] [i_4] [i_2] [i_1] = ((!(var_6 - var_9)));
                }
                arr_20 [i_4] [i_4] [i_1] = (max(((~(26116 < -39))), (((((min(var_8, var_1))) && (~var_6))))));
                var_18 = var_6;
                var_19 = ((var_6 ^ (min(var_7, (~var_3)))));
            }
            for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
            {
                var_20 = ((-var_1 != (var_8 & var_2)));
                var_21 = (var_0 > var_7);
                var_22 = (((!var_5) / (-8619 != -106)));
                arr_23 [i_1] [i_2] = ((var_5 == (((var_8 - var_9) + var_3))));
            }
        }
        arr_24 [i_1] = (((var_8 + var_9) > (var_5 >= var_5)));
    }
    var_23 = (max((var_5 / var_1), (var_9 / var_5)));
    var_24 = min(((((max(var_9, var_1))) >> (var_9 - 15027))), var_0);
    var_25 = (var_7 * var_1);
    var_26 = (max(var_26, (((max(var_2, (var_1 / var_1)))))));
    #pragma endscop
}
