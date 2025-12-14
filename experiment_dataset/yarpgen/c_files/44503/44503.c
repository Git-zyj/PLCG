/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 ^= (((!-119) ? (-7653720857547689557 <= -1158885342) : var_8));
        arr_4 [i_0] = (((-1158885342 ^ 447517056273426662) ? (max((arr_3 [i_0]), 17999227017436124954)) : -var_3));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        var_14 = (max(var_14, 447517056273426662));

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                arr_11 [i_2] [i_1] = (((arr_10 [i_1 + 2] [i_1 + 3] [i_1 + 1]) >= var_4));
                var_15 = var_3;
                arr_12 [i_1] [i_2] [i_2] [i_3] &= (arr_8 [i_1 - 1]);
            }

            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                var_16 = ((-var_2 ? (arr_14 [i_1 + 3] [i_1 - 1]) : -var_4));
                var_17 -= ((var_1 ? var_3 : var_11));
            }
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                var_18 *= var_7;
                arr_17 [i_1] [i_2] [i_1] = 17999227017436124954;
                var_19 = (max(var_19, (((~(arr_14 [i_1 - 1] [i_1 + 1]))))));
                var_20 = (!18446744073709551615);
                arr_18 [i_1] [i_1] [i_5] = ((-((-(arr_7 [i_1])))));
            }
        }

        for (int i_6 = 1; i_6 < 9;i_6 += 1)
        {
            var_21 = 0;
            var_22 |= 1;
            var_23 = (max(var_23, (arr_5 [i_1 - 1])));
            var_24 ^= (~9223372036854775807);
        }
    }
    var_25 = (max(var_25, 237));
    var_26 = ((var_0 ? ((((max(var_2, var_3))) ? ((min(-1158885347, var_8))) : 2282895416)) : ((((((var_7 ? -1158885347 : 12296144452652153648)) <= (127 < 18446744073709551606)))))));
    var_27 = var_1;
    #pragma endscop
}
