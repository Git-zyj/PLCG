/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, 15));
    var_11 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (max(-var_7, (((((39463 ? 6 : 26))) ? (min(0, 13451685076377132509)) : (arr_2 [i_0])))));
                arr_4 [i_0] [i_1] = var_6;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2 + 2] [i_3] [i_3] = max((((arr_1 [i_1] [i_0]) ^ ((16 ? 8 : -76)))), ((((arr_8 [i_2 - 3] [i_1] [i_1] [i_3]) / ((min((arr_0 [i_0]), (arr_0 [i_0]))))))));
                            arr_12 [i_0] [i_1] [i_0] [i_1] [i_2 + 2] [i_3] = (max(((var_0 ? (min((arr_2 [i_0]), 1508000118899177447)) : (var_3 - 16913))), ((((((162 << (86 - 73)))) <= ((13451685076377132509 ? 0 : var_6)))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_13 = ((((((~(arr_16 [i_6] [i_6] [i_6] [i_6 - 1]))) + 2147483647)) << ((((((min(122, 883537231))) ? 232 : (arr_2 [i_0]))) - 232))));
                                var_14 = var_2;
                                var_15 = ((((!(arr_21 [i_6 - 2] [i_6 - 1] [i_6 - 2] [i_6] [i_6] [i_6 - 1] [i_6 + 1]))) ? (~3657070099) : 3657070099));
                            }
                        }
                    }
                }
                var_16 = ((~((max((arr_21 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]), 1)))));
            }
        }
    }
    var_17 = ((var_8 || ((max(3750568433246545057, 229)))));
    #pragma endscop
}
