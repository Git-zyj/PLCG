/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_6 ^ (max((-1 % 54228), (~var_3)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_11 = var_3;

        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            var_12 -= ((~(((127 < (var_9 * 11307))))));

            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                var_13 ^= (!0);
                arr_6 [i_0] [i_1 - 2] [i_1 - 2] [i_2] |= (((((var_4 - 0) >= (~65535)))) >> (((~18562) + 18584)));
                var_14 = max((var_8 == 32767), (max((min(var_4, var_8)), var_8)));
            }
            for (int i_3 = 3; i_3 < 18;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 4; i_4 < 19;i_4 += 1)
                {
                    arr_13 [i_0] [i_1] [i_3] [i_3 + 2] [i_4] |= (((-var_3 > 2147483647) == (((!((max(var_8, var_0))))))));
                    arr_14 [i_4 - 4] [i_3 - 2] [i_1] [i_0] |= 42039;

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_15 = (min(var_15, (-68 + -4)));
                        arr_18 [i_0] [i_0] [i_3] [i_4] [i_5] [i_5] [i_1] = (((var_3 & var_8) - (-214870210 + 1634177335)));
                    }
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_16 = (!-21);
                        var_17 = (max(var_17, ((+((((var_0 / 2095006218) != (var_9 % -1948024068))))))));
                        var_18 = (max((((2147483647 >= 23) / (var_4 && -68))), (((23 || var_2) & (var_0 - 2852)))));
                        var_19 ^= (1 ^ 65510);
                        var_20 = (-((max(8182, -74))));
                    }
                    arr_21 [i_0] [i_0] [12] [i_0] [i_0] [2] = (((!2147483647) * (max((65532 % var_3), ((((-2147483647 - 1) <= var_4)))))));
                }
                arr_22 [i_1] = ((-23 != (-1415387869 || 0)));
                var_21 = ((-(max(-902341025, var_8))));
            }
            /* vectorizable */
            for (int i_7 = 3; i_7 < 18;i_7 += 1) /* same iter space */
            {
                var_22 = ((6070 < (var_8 != var_8)));
                var_23 = (var_3 | 35);
            }
        }

        /* vectorizable */
        for (int i_8 = 1; i_8 < 20;i_8 += 1)
        {
            var_24 ^= (!-120);
            var_25 = -var_0;

            for (int i_9 = 4; i_9 < 18;i_9 += 1)
            {
                arr_31 [i_0] [i_8] [i_0] [i_9] = (((0 ^ 2147483647) >= (0 ^ var_1)));
                arr_32 [i_9] = -592;
            }
            var_26 = ((var_7 + (3042038981 % var_8)));
        }
        /* vectorizable */
        for (int i_10 = 3; i_10 < 20;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                arr_37 [i_0] [i_0] [i_10] [i_11] = var_7;
                var_27 = (max(var_27, (!-7)));
            }
            var_28 = -4095;
            var_29 = var_0;
        }
        var_30 = ((~((min(54222, 34221)))));
    }
    #pragma endscop
}
