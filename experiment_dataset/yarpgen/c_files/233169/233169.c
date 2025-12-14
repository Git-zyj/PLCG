/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 -= 65535;
                    arr_11 [i_0] [i_1] [i_0] [i_1] = ((-(((((0 ? var_11 : -58))) ? 14952 : 0))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_1] = ((~((25 ? (-127 - 1) : 2330))));
                                var_18 |= (min(-15984, -2331));
                                var_19 -= ((25 ? ((2337 ? var_11 : ((min(2310, var_1))))) : (((arr_4 [i_4]) ? (arr_4 [i_4]) : 25432))));
                                var_20 = (((((13499379162369964048 ? ((~(arr_13 [i_4] [i_1 - 2] [i_1 - 2] [i_1 - 2]))) : -32764))) ? 1 : ((max(var_9, (max((arr_8 [i_1] [i_2]), (arr_1 [i_0] [i_1]))))))));
                                var_21 *= (min(((~((var_3 ? var_11 : var_8)))), ((((!8483) && 1)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            {
                var_22 ^= ((((((~108) ^ (((arr_21 [i_5]) ? var_10 : 8483))))) ? (~-2009571652) : ((-(arr_23 [i_5] [i_6] [i_6 - 1])))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_23 = (((((1 ? var_9 : ((13499379162369964048 ? 2302531136 : -2355))))) || (((-45 ? 2009571670 : 255)))));
                            arr_28 [i_5] [i_6 - 1] [i_7] [i_8] |= -3062769973799877155;
                            var_24 = (min(var_24, (((((((((16923497977060896491 ? 132 : -39))) ? var_0 : (arr_27 [i_6] [i_8])))) ? (max((((arr_20 [i_5]) * 2302531136)), 251)) : (arr_20 [i_7]))))));
                            arr_29 [i_8] = ((16900 ? 16380 : -117));
                        }
                    }
                }
                var_25 = 2952323460708079042;
            }
        }
    }
    #pragma endscop
}
