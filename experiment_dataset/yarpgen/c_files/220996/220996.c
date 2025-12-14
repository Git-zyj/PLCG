/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (118 != 2147483646);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, 6));
                                var_14 = (arr_2 [i_1] [i_1]);
                                var_15 = (max(var_15, (arr_5 [i_0])));
                            }
                        }
                    }
                }
                arr_14 [6] [i_1] [i_0] = 1;
                var_16 = 2147483646;
                arr_15 [4] |= var_6;
            }
        }
    }
    var_17 = ((18446744073709551609 ? var_2 : (min((2147483646 / 4972), 18446744073709551614))));
    #pragma endscop
}
