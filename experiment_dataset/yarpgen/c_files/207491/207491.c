/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (((((1 % var_3) | (32750 / var_6))) >= var_5));
    var_16 = ((4221004675 < ((((((-2147483647 - 1) % var_9))) ? var_6 : var_1))));
    var_17 = (((max(103, var_7))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = (((arr_1 [i_1 - 1] [i_1 - 2]) | var_2));
                    arr_9 [0] [i_1] [i_1 + 1] [0] |= (min((max((arr_7 [10] [10]), (arr_7 [8] [8]))), var_6));
                    arr_10 [i_1] [i_0] [i_1] [i_2] = ((arr_0 [5] [i_1]) >= ((((arr_1 [i_1 - 2] [i_1 - 1]) || -81))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 12;i_5 += 1)
            {
                {
                    var_19 = ((((max(-81, (arr_8 [i_5] [i_5]))) > (arr_4 [i_3] [i_3]))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_20 &= (max(var_14, (511 != 12630)));
                                var_21 = (min((max((max(536870911, (arr_18 [i_3] [i_3]))), (arr_1 [i_3] [i_3]))), var_1));
                                var_22 ^= (min(((((arr_19 [i_7 - 2] [i_7] [i_6]) == (arr_7 [i_4 - 2] [i_7])))), (((23134 ? -220271978 : 56)))));
                                var_23 ^= (((min((max(9223372035781033984, 3)), 2147483647)) >= ((((arr_3 [i_6]) ? (!1) : (((arr_11 [i_6]) % (arr_15 [i_5 + 1]))))))));
                                var_24 += (min((min(-0, -536870930)), (+-2)));
                            }
                        }
                    }
                }
            }
        }
        var_25 = ((4590188521275747066 % (((((arr_22 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) == (arr_22 [i_3] [i_3] [1] [10] [i_3] [i_3])))))));
        arr_25 [i_3] [i_3] = (arr_14 [i_3]);
        arr_26 [i_3] = (-2147483647 - 1);
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        var_26 *= ((!(min((32760 >= 14538929158038104260), (((arr_28 [0]) > 1))))));
        var_27 *= ((!(arr_27 [i_8])));
        var_28 = (!14538929158038104252);
        /* LoopNest 2 */
        for (int i_9 = 4; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            {
                                arr_38 [i_12] [i_12] [4] [0] [8] &= min(((max(-1, (arr_27 [i_10])))), ((((((arr_31 [14] [i_11]) + var_3)) < (arr_36 [1] [20] [i_11] [i_10] [i_9 - 4] [20] [1])))));
                                var_29 ^= (-(((!((max(var_12, var_10)))))));
                                arr_39 [i_8] = (min((arr_27 [i_11]), -40));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            {
                                var_30 = (max(var_30, ((((min(3907814915671447364, (arr_33 [i_8] [i_13] [i_8]))) ^ (((arr_41 [i_13] [i_14]) ? var_9 : (arr_42 [i_9 - 2] [i_9 - 4] [i_9]))))))));
                                var_31 ^= (!var_10);
                            }
                        }
                    }
                    var_32 = (((((((min(var_7, var_0))) == (-536870920 % 6842493547775747808)))) == var_1));
                }
            }
        }
    }
    for (int i_15 = 2; i_15 < 18;i_15 += 1)
    {
        arr_48 [i_15] = (((!1056964608) & ((min(((var_7 == (arr_8 [i_15] [i_15]))), (37508 > 979056741))))));
        /* LoopNest 2 */
        for (int i_16 = 2; i_16 < 18;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 20;i_17 += 1)
            {
                {
                    var_33 = (min(var_33, ((((((arr_46 [i_15]) >> (-2128078439 + 2128078463))) != (arr_0 [i_15] [i_15]))))));
                    var_34 ^= ((((arr_3 [i_15]) ? (min(var_6, 3167700464159410211)) : (~11604250525933803822))));
                }
            }
        }
    }
    #pragma endscop
}
