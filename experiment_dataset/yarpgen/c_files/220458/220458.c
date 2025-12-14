/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= min((max(((var_0 ? var_6 : var_6)), 0)), ((var_2 + (max(20726, 2147483633)))));
    var_13 = (-1662582321 & var_7);
    var_14 = 4294967290;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = 3;
                    var_16 = (max(((((arr_4 [i_0] [i_1 - 2] [i_2 - 1]) && 28))), (arr_8 [i_1] [21] [i_2])));
                    arr_10 [i_1] [i_1] = 1698915279;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_0] [i_0] [i_1] [i_0] = 2;
                                var_17 = (((((-669099472 ? 1291735882 : 1547272754))) ? ((3919590223 ? (arr_5 [i_3 - 1] [i_2 - 2] [i_1 - 1]) : 4)) : (((arr_5 [i_3 + 2] [i_2 + 2] [i_1 + 1]) ? (arr_5 [i_3 + 1] [i_2 + 1] [i_1 + 3]) : (arr_5 [i_3 - 1] [i_2 - 4] [i_1 - 1])))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [17] = ((((((-2147483647 - 1) - ((8603 ? (arr_13 [i_1] [i_2] [1]) : 112))))) != (((min((arr_1 [i_0]), 255)) & (1022685215 % 80)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
