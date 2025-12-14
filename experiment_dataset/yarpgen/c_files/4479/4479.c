/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((max((((var_5 + 2147483647) >> var_8)), var_2)) << ((((-(max(4089313286, 205654010)))) - 205654009))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (max((((min(3671230937, 65535)) | ((29238 ? var_5 : (arr_0 [i_0] [i_0]))))), ((((min(4294967272, 1))) ? 4089313290 : 0))));
        var_13 = (-(!26598));
        var_14 ^= ((!((((arr_0 [i_0] [i_0]) << var_6)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 = ((1 ? (-32767 - 1) : 4227858432));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_16 = ((!(((1 ? 0 : 0)))));
                                var_17 = ((~((min(0, 1)))));
                                var_18 = (var_9 | var_8);
                                var_19 = ((((((var_1 ? (arr_8 [i_2]) : var_7))) % 4294967289)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            {
                var_20 = var_6;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        {
                            var_21 = var_6;
                            var_22 = (var_1 ^ 205654009);
                            var_23 ^= ((((4089313286 >= (((min(160, 253)))))) ? (((((73 ? (arr_21 [i_5] [i_6] [i_7] [i_8] [i_5]) : var_2)) != var_6))) : (max((((arr_13 [i_5] [i_8]) << (var_1 + 8050993642220125765))), (var_9 == -2147483632)))));
                            var_24 = 16383;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_9 = 3; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 16;i_11 += 1)
                        {
                            {
                                var_25 += ((min(((min(var_7, (arr_28 [1] [0] [i_9])))), (((arr_29 [i_6] [17]) ? (arr_28 [i_5] [14] [i_5]) : var_1)))));
                                var_26 = (min(var_26, (!4227858432)));
                                var_27 = (~var_8);
                            }
                        }
                    }
                }
                var_28 = var_9;
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        {
                            var_29 = ((16384 << (4294967288 - 4294967273)));
                            var_30 = ((((((var_1 == (min(var_1, var_5)))))) != var_2));
                            var_31 ^= var_2;
                        }
                    }
                }
            }
        }
    }
    var_32 = var_3;
    #pragma endscop
}
