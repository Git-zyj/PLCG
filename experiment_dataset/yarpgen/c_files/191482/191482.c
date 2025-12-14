/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = ((!((((arr_8 [i_2 - 1] [1] [i_3] [i_4]) ? 7 : 2088326909438772563)))));
                                arr_12 [i_0] [i_0] [1] [i_0] [i_0] [i_0] = (arr_3 [i_3] [0]);
                            }
                        }
                    }
                    arr_13 [0] = ((!(!var_3)));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 7;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_15 = ((!((((((var_6 >> (var_3 - 5607000387153788318)))) | (arr_11 [i_5] [i_1] [i_1]))))));
                                var_16 += var_11;
                            }
                        }
                    }
                    var_17 = (arr_16 [0] [i_1] [5] [i_0] [i_1] [5]);
                }
            }
        }
    }
    var_18 |= var_8;
    var_19 &= 2088326909438772563;
    var_20 = var_7;
    var_21 = (min(((~(var_0 ^ 16358417164270779053))), ((((var_1 + 9223372036854775807) >> (3440800292 - 3440800290))))));
    #pragma endscop
}
