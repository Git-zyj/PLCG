/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, (((max(83, ((var_14 ? var_7 : var_0))))))));
                                arr_14 [i_0 + 2] [i_1] [i_0] = ((((var_8 ? var_16 : (((arr_12 [i_0] [9] [i_2] [i_3] [i_0]) + (-32767 - 1))))) ^ ((-(arr_13 [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3] [i_3] [i_3] [i_3])))));
                                var_19 -= var_9;
                            }
                        }
                    }
                    var_20 = ((((max((arr_9 [3] [i_0] [i_0] [i_0] [i_0]), (arr_7 [i_0 + 2])))) ? (((((arr_9 [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_0]) != 18446744073709551598)))) : (arr_7 [i_2])));
                }
            }
        }
    }
    var_21 &= (max(var_3, (min(var_8, (min(18446744073709551613, 172))))));
    var_22 ^= ((-(((((min(0, 18446744073709551598))) && var_8)))));
    #pragma endscop
}
