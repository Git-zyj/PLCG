/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_10;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = (max((min((max(var_7, var_3)), (min(var_16, var_8)))), (max(var_16, var_11))));
        var_20 = (max(var_20, ((((max(var_14, var_1)) + (((max(((min(var_2, var_1))), var_6)))))))));
    }
    for (int i_1 = 2; i_1 < 7;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_21 |= ((min(((max(var_3, var_14))), var_3)));
            var_22 += 65535;
            arr_8 [i_1 - 2] [i_1 - 2] &= 0;
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            arr_12 [i_3] |= (min(38100, 27435));
            arr_13 [i_1] |= (min(((min((max(38100, 154)), var_3))), ((((min(var_4, var_14))) + ((max(var_4, var_17)))))));
            var_23 = (min(var_23, (var_11 * var_0)));
            var_24 = (min(var_24, ((min((var_9 - var_6), (min(var_10, var_15)))))));
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 7;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 8;i_6 += 1)
                {
                    {
                        var_25 |= var_13;
                        var_26 = (min(var_26, (((((var_1 * var_15) >= (min(var_17, var_9))))))));
                        var_27 *= (7440167787575429383 & 12312964676739234620);
                        var_28 ^= ((min((var_5 >= var_5), var_2)));
                        var_29 &= var_8;
                    }
                }
            }
            var_30 = var_0;
        }
        var_31 ^= (max((max(((max(var_2, var_10))), (max(var_5, var_16)))), var_12));

        /* vectorizable */
        for (int i_7 = 3; i_7 < 8;i_7 += 1)
        {
            var_32 |= var_3;
            arr_25 [1] &= var_3;

            for (int i_8 = 1; i_8 < 8;i_8 += 1)
            {
                var_33 = (max(var_33, ((((var_0 % var_1) >= var_1)))));
                var_34 = var_6;
                var_35 = (min(var_35, (var_4 & var_15)));
            }
            var_36 = (max(var_36, (var_9 >= var_14)));
            var_37 *= var_16;
        }
        for (int i_9 = 4; i_9 < 8;i_9 += 1) /* same iter space */
        {
            var_38 ^= (((((max(var_9, var_0)) <= var_1))) - (4294967295 | var_10));
            arr_32 [i_1] [i_9 + 1] [i_9] |= ((((min((max(19559, 0)), var_11))) * ((max(var_12, (var_11 < var_10))))));
        }
        for (int i_10 = 4; i_10 < 8;i_10 += 1) /* same iter space */
        {
            var_39 = (min((((min(var_7, var_3)))), (min(var_17, (var_14 - var_8)))));
            var_40 -= (((var_5 && var_7) && ((min(-5, 9223372036854775795)))));
            /* LoopNest 3 */
            for (int i_11 = 2; i_11 < 9;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 9;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        {
                            var_41 = (max(var_41, var_12));
                            var_42 = (min(((max(var_11, var_0))), var_13));
                            var_43 = (max(var_43, ((min((((var_15 >= var_10) < ((max(var_17, var_2))))), ((var_12 && (var_11 <= var_8))))))));
                        }
                    }
                }
            }
        }
        for (int i_14 = 4; i_14 < 8;i_14 += 1) /* same iter space */
        {
            var_44 = (max(var_44, (((var_10 == ((max(var_5, ((max(var_1, var_2)))))))))));
            var_45 -= ((((var_16 << (var_8 + 7036530503057059203)))));
        }
    }
    var_46 &= -2485418693139853798;
    #pragma endscop
}
