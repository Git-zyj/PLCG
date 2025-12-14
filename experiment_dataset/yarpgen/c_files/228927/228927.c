/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_1));
    var_16 = (min(var_1, -1801384688));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_17 = 1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [9] [i_0] [i_0] [10] [i_0] [9] = (1 / 18446744073709551601);
                                var_18 |= ((~((~(arr_5 [i_4] [i_2] [9] [i_2 - 1])))));
                            }
                        }
                    }
                }
                var_19 = (((14429253398679360769 ^ 1) ^ (arr_0 [i_0])));
            }
        }
    }
    #pragma endscop
}
