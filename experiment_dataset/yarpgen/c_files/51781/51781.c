/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_11 = (((((((~-9223372036854775799) != 1901456448)))) * (((arr_10 [17] [18] [i_1] [i_2] [i_2] [i_2] [i_4]) + (((var_8 ? 4294967286 : 90)))))));
                                arr_12 [i_0] [i_2] = ((-(arr_1 [i_0 + 1])));
                                var_12 |= 2214678954256498954;
                                arr_13 [i_2] = (min((arr_11 [i_4] [i_4] [i_3] [i_3] [i_2] [13] [6]), (arr_1 [i_0])));
                            }
                        }
                    }
                    arr_14 [i_0] [i_2] [i_0] = (~-var_9);
                }
            }
        }
    }
    var_13 = (((-2484622771896621768 > 18446744073709551611) % ((((var_4 ? var_2 : 182)) - (((min(11, 5))))))));
    var_14 = (min(var_14, (-26995 != var_1)));
    var_15 = var_8;
    #pragma endscop
}
