/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_3, var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_21 -= (((var_1 ? (127024481 + var_18) : (-79 < var_3))));
                                var_22 = (min(var_22, ((((((((arr_1 [i_4]) - 11340396994097306190)) >> (var_1 - 103)))) ? ((125 ? 718970498 : 0)) : var_5))));
                                var_23 = -2159972000585462777;
                            }
                        }
                    }
                    arr_12 [i_0] [i_0] &= var_14;
                    arr_13 [i_0] = var_2;
                    arr_14 [i_0] [i_0] [i_0] [i_0] = -126;
                }
                var_24 = (max(var_24, ((((((~(4236952033 >= var_19)))) ? (min(-48, 7952112484846811470)) : (((((arr_4 [i_0] [i_0] [i_0]) == (2159972000585462777 < -102))))))))));
                var_25 *= -1;
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_26 = (min(((((arr_9 [i_7] [i_7] [i_7] [i_7 + 1] [i_7 - 3]) ? 25669 : (arr_9 [i_7] [i_7] [i_7 + 1] [i_7 + 1] [i_7])))), (((arr_9 [i_7] [i_7] [i_7 - 1] [i_7 + 1] [i_7]) ? (arr_9 [i_7] [i_7] [i_7] [i_7 + 1] [i_7]) : 2159972000585462777))));
                                arr_22 [i_7] [i_6] [i_5 - 2] [i_7] = 12761588429965018242;
                                var_27 |= ((18446744073709551607 ? ((((!(arr_6 [i_0] [i_0] [i_0]))))) : (arr_21 [i_1] [i_1] [i_5 - 2] [i_0] [i_0] [i_6] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = (min(var_28, ((((((((min(var_17, 163))) * var_3))) ? -126 : (max(((var_6 ? var_12 : 44995)), ((var_18 ? var_12 : var_6)))))))));
    var_29 = var_2;
    var_30 = (max((((~((134152192 ? 65535 : var_2))))), ((var_14 ? var_9 : 55933))));
    #pragma endscop
}
