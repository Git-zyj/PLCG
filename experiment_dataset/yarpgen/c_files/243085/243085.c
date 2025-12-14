/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_12 [16] [i_1] [i_1] [i_1] [i_2] [i_3] [i_4] = ((0 ? ((var_2 ? (arr_9 [i_1] [i_1] [i_1] [i_1]) : -103)) : (arr_11 [i_1] [i_4])));
                                arr_13 [i_0] [i_1] [i_0] = var_3;
                                arr_14 [i_0] [i_1] = (((var_1 || 3444358041) >> ((((var_4 ? (arr_8 [i_0]) : (arr_10 [i_0] [i_1] [i_2] [i_1] [11]))) - 201754924989533196))));
                            }
                        }
                    }
                    var_10 = ((var_2 ? (arr_7 [i_0 - 1] [i_0 - 1]) : (arr_7 [i_0 - 1] [i_0 - 1])));
                }
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    var_11 = (((((-17574 ? (arr_1 [i_0 - 2]) : -32257))) % var_2));
                    arr_17 [i_1] [i_1] [i_1] = ((~(((((min(3444358041, -32257))) <= 15612214318673786866)))));
                }
                var_12 = ((((((205 - 128) ? 1554926395 : 15612214318673786878))) ? (-32257 / 28024) : (max((min(var_3, (arr_8 [i_0]))), ((max(849756873, 3095040428)))))));
            }
        }
    }
    var_13 = (min(var_13, var_6));
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                {
                    arr_24 [i_8] [i_7] = (((((var_2 >> (-var_1 - 3813397155341055317)))) ? (max(var_0, (arr_18 [i_8]))) : ((((0 || (((53834 ? -9 : (arr_3 [i_6]))))))))));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 14;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_14 = (min(var_14, -753822325753688875));
                                var_15 = (((max(var_2, (arr_26 [i_9] [i_9 - 1] [i_9 + 1] [i_9 + 1] [i_8] [i_6]))) ^ ((min((arr_26 [i_9] [i_9 - 1] [i_9 + 1] [i_9 - 1] [i_8] [i_8]), var_5)))));
                                arr_29 [i_6] [i_6] [i_6] [i_6] &= 1983;
                            }
                        }
                    }
                    var_16 = (-((var_0 ? (2834529755035764750 + 1465984813) : (((10 ? 14877 : var_3))))));
                    arr_30 [i_8] = (((((-((32267 ? (arr_0 [14] [i_7]) : var_7))))) ? -15903850653116844590 : ((((8 > 32272) + 32266)))));
                }
            }
        }
    }
    #pragma endscop
}
