/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 3330487104;
    var_19 = ((var_12 ? (min((0 == 4095), ((var_3 ? var_9 : var_17)))) : var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = ((~(var_8 ^ 4078)));
                var_21 = (arr_2 [2] [10] [10]);
                arr_5 [i_0] [7] [8] = ((+((((10891375580104365116 >> (((-32767 - 1) + 32825))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_22 = ((-(((((((arr_6 [i_0] [10] [10]) % -3560)) + 2147483647)) << ((var_1 ? var_3 : (arr_8 [i_1])))))));
                            arr_12 [7] [i_0] = ((3560 > ((((((468218401 & (-32767 - 1)))) >= 788884044)))));
                            var_23 = (arr_1 [i_0]);
                            arr_13 [11] [6] [i_0] [i_3] [0] = (((arr_4 [i_0] [8]) & ((~(min((arr_10 [10] [i_0] [10] [i_0] [i_0]), (arr_2 [11] [0] [2])))))));
                        }
                    }
                }
            }
        }
    }
    var_24 = var_9;
    var_25 = var_6;
    #pragma endscop
}
