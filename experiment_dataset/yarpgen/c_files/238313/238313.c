/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_19 = ((((-(-1 | 1))) <= -1));
        arr_2 [i_0] [i_0] = (~((~(~-10))));
        var_20 = ((((((((2132885216 ^ (-2147483647 - 1)))) || 10))) > 1032464481));
        var_21 = (9837 <= -95);
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_7 [i_1] = ((~(55699 < 1)));
            arr_8 [i_1] [i_2] [i_1] = 1;
        }

        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_22 = (((((!(-2147483647 - 1)))) % (~1)));
            var_23 = (-17 || 1);
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_24 = 55699;
            arr_14 [i_1] = -1;
            var_25 = (1 && 15);
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_26 += -1032464471;
            arr_22 [i_5] [i_5] [i_6] = ((-1032464471 != (~1)));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_27 = (!-1480871013);
            var_28 = (-21 % 15);
            var_29 = (max(var_29, 229623831));
        }

        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            var_30 = (~1032464471);
            var_31 -= (~-10);
        }
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            var_32 = 10;
            var_33 = (((((-127 - 1) | -36)) | -38));
            var_34 = -1229604431;
        }
    }
    for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
    {
        var_35 = (((!-856482034) - (+-1)));
        arr_33 [i_10] = 1032464471;
    }
    var_36 = -1;
    var_37 = var_3;
    var_38 ^= (var_15 && 18886);
    #pragma endscop
}
