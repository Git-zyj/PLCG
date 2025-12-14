/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_10 &= ((96 ? ((~(-4973976314288539423 & 255))) : 47));
                    arr_10 [i_0] [i_1] [i_2] = ((((-(max((arr_7 [i_0] [i_1] [i_2]), var_5)))) / (var_5 / 36465)));

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        arr_13 [i_1] [i_2] [i_2] [i_2] [i_2] = (max((arr_12 [i_0 - 3] [i_0 - 2] [i_0 - 4] [14]), ((30 ? var_1 : var_3))));
                        arr_14 [i_0] [i_1] [i_0] [i_3] &= (arr_8 [i_0]);
                        var_11 = (max(var_11, ((((-8174056013259215685 ? var_7 : (~16650662285367633313)))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {

                        for (int i_5 = 4; i_5 < 20;i_5 += 1)
                        {
                            var_12 = (max(var_12, (arr_12 [i_0] [i_0] [i_0] [12])));
                            var_13 = ((36465 - (arr_17 [i_0] [i_0 - 3] [i_0 + 1] [i_0 + 1] [i_1])));
                        }
                        arr_20 [5] [5] [i_4] [i_1] [5] = ((var_0 * (((arr_6 [i_4] [i_1] [i_4]) ? 0 : (arr_18 [i_0])))));
                        arr_21 [i_0] [i_0 - 3] [i_1] = (((~225) ? (((arr_8 [i_0]) ? 2485377974322804195 : var_9)) : 18446744073709551608));
                        var_14 = (-9223372036854775807 - 1);
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 8;i_7 += 1)
        {
            {
                var_15 ^= var_5;

                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        arr_33 [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 1] = (max((((min(53, 30)))), ((~(arr_28 [i_7] [i_7 - 2] [i_9])))));
                        arr_34 [i_6] [i_6] [1] [i_6] [i_6] [1] = (((~(arr_24 [i_6]))));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            {
                                arr_39 [i_6] [i_7] [i_8] [i_10] [i_11] = (max((((max(15961366099386747400, (arr_36 [i_6] [i_6] [i_6 - 1] [i_6] [6]))) | (31 && var_9))), var_3));
                                var_16 = 31;
                                var_17 = 55;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (max(var_18, var_0));
    var_19 = var_1;
    #pragma endscop
}
