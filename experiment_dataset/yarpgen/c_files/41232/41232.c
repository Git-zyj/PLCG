/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [i_0 + 1] [i_0 + 1] [i_2] [i_1] &= (arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [i_3]);
                            var_21 = (((((var_3 ? (arr_10 [i_2] [i_0] [i_0] [i_3] [i_0] [i_1]) : (arr_10 [i_2] [i_1] [i_1] [i_3] [i_2] [6])))) ? (-32767 - 1) : (((arr_10 [i_2] [i_1] [12] [i_0] [i_2] [i_0]) << (var_1 - 2951659695)))));
                            var_22 ^= var_16;
                            var_23 = -255;
                        }
                    }
                }
                var_24 = var_9;

                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    arr_15 [i_0] [11] [i_4] [i_4] = (((~4004254505) ? ((var_6 | (arr_5 [i_1 - 1]))) : ((-31031 ? (arr_5 [i_1 - 3]) : -2147483635))));
                    var_25 = (32 & var_6);
                    var_26 = ((((((arr_12 [i_1 - 1] [i_1 - 3] [i_1 - 4]) * (arr_12 [i_1 - 4] [i_1 - 3] [i_1 + 1])))) ? 0 : var_14));
                }
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    var_27 &= -4294967295;
                    var_28 = (((min(var_17, (arr_4 [i_0 + 1] [i_0]))) - 161));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_29 = (max(var_10, var_6));
                                var_30 = ((~(((-127 - 1) ? 95 : -35))));
                                var_31 &= (63 < 9026);
                                var_32 = (var_5 ? ((min(3, var_14))) : ((var_17 - ((-9011 ? 3815545619 : (arr_2 [i_1]))))));
                            }
                        }
                    }
                }
                for (int i_8 = 1; i_8 < 12;i_8 += 1)
                {
                    var_33 = (max(var_33, ((((var_16 && 479421676) && (((min(1756580155, var_19)))))))));
                    var_34 = ((((min(1264747349, var_6))) != (arr_19 [i_0] [i_0] [i_8])));
                    var_35 = 255;
                }
                var_36 = (max(var_36, (((var_9 ? (arr_19 [i_0] [i_0] [i_1]) : var_13)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 23;i_10 += 1)
        {
            for (int i_11 = 4; i_11 < 23;i_11 += 1)
            {
                {
                    var_37 ^= 1;
                    arr_33 [i_9] = 15100269005265900712;
                    var_38 = -8799116416208700676;
                }
            }
        }
    }
    var_39 -= (((((-var_17 >= (((-29505 ? 1 : 107)))))) * ((var_4 ? (-32767 * var_3) : var_16))));

    for (int i_12 = 2; i_12 < 22;i_12 += 1)
    {
        var_40 = ((((~((198 ? 3661029214514796979 : -1756580146))))) ? var_6 : (((((((32760 ? 6967540989026608449 : var_12))) || var_4)))));
        arr_36 [2] = (var_15 ? var_12 : var_19);
    }
    #pragma endscop
}
