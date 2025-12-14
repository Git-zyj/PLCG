/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_16 = ((((min(7052652440223941554, 206))) ? (arr_5 [12] [1] [i_1] [i_1]) : (204 == var_14)));
                                arr_12 [i_0] [i_1] [9] [i_1] = (min((((arr_8 [17] [16] [17] [i_4]) & (~16757342050417616253))), (((((min(220, 212))) << (arr_7 [18] [i_0] [i_2] [i_0] [i_1] [i_0]))))));
                                var_17 &= var_10;
                                var_18 = 21;
                            }
                        }
                    }
                }
                arr_13 [i_0] [i_0] [i_0] = (((min(29, (arr_4 [i_0] [0] [i_0] [18])))) ? (min((arr_5 [i_0] [i_0] [i_0] [i_0]), (arr_8 [i_0] [15] [2] [2]))) : (arr_8 [i_1] [i_1] [0] [i_0]));
                var_19 -= ((((((var_8 << (var_1 - 52))))) ? var_0 : (((var_7 + 9223372036854775807) << (((max(-1613932946007458553, 204)) - 204))))));
                arr_14 [i_0] [i_0] [17] = (min(((max((arr_10 [i_0]), 194))), (((arr_10 [i_0]) ? 25 : (arr_10 [i_0])))));
                var_20 -= 37;
            }
        }
    }
    var_21 = var_11;
    #pragma endscop
}
