/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 -= -44744;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_1] [i_2] [i_3] [i_4] = (((((min(1, var_11)))) ? var_12 : (~65535)));
                                arr_15 [i_0] [i_4] [i_2] [i_3] [i_4] = (max((((var_17 ? var_5 : (~var_16)))), ((20812 ? var_2 : var_16))));
                                arr_16 [i_3] [i_3] [i_1] [i_1] [i_3] &= ((((var_10 != (((min(var_6, var_14)))))) ? ((20787 ? var_12 : 44744)) : (((var_17 ? var_16 : (max(var_7, 1)))))));
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] [i_0 + 3] = (max(((20792 ? (max(var_18, 18446744073709551615)) : ((max(var_14, -8629514156075978282))))), (max((max(0, var_10)), (min(var_18, var_9))))));
                    var_20 = (min(var_20, 20787));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                    {
                        arr_21 [i_0] [i_0] [i_0] [i_5] = ((~((147 ? -73 : var_17))));
                        var_21 -= ((33205 >> (var_13 >= var_6)));
                        var_22 = 20796;
                        var_23 = ((var_18 ? (var_16 & var_18) : var_5));
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                    {
                        arr_26 [i_0 + 2] [i_6] [i_6] [i_0] [3] = (min((((var_18 & 18709) & ((var_13 ? var_18 : 6265769348090821500)))), (((((min(var_10, var_10))) ? ((var_5 ? var_16 : 65535)) : 12)))));
                        arr_27 [1] [i_6] [i_6] [i_6] = ((~((min(32768, 18709)))));
                        arr_28 [i_6] [i_1] [i_2] [i_6] = ((!(((-11428490719017290608 ? ((var_2 ? var_17 : var_6)) : 7070831248450902056)))));
                    }
                }
            }
        }
    }
    var_24 = -1399642520179343441;
    var_25 -= (((max(var_15, (min(1, 2087677197896671651)))) <= (((-8 ? 44737 : 1)))));
    #pragma endscop
}
