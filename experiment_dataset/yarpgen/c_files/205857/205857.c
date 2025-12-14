/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_5));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    var_14 = (min(var_9, (min(1, var_8))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_12 [i_3 + 1] [i_3 - 1] [i_3 + 2] [i_3 + 1] [i_2] [i_3 + 1] = (((0 >> (min(9949493603815666935, var_2)))));
                                var_15 = (max(var_15, (((max(((max(1, 1))), var_6))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_16 ^= ((((((var_3 << (var_10 + 10464))) > -11867)) || 10401989869977869906));
                                var_17 = (max(var_6, 1));
                                arr_20 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2] [i_0 + 1] [i_0 + 1] [i_0 + 1] = var_3;
                            }
                        }
                    }
                }
                var_18 += ((var_4 + (((var_6 < (5604 < 238))))));
                var_19 = 10400;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            {
                arr_29 [i_7 + 2] = 1;
                var_20 = 1906161924;
                var_21 = (min((((min(1, var_6)) == var_7)), (1 != 1)));
            }
        }
    }
    #pragma endscop
}
