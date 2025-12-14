/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_10 = ((~(~1)));
                arr_4 [i_1] = (min((min((arr_2 [12] [12] [i_0]), ((27299 >> (((arr_2 [i_1] [i_1] [i_0]) + 438188856)))))), ((((var_9 + (arr_1 [i_1]))) >> (var_7 - 64)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 14;i_4 += 1)
            {
                {
                    var_11 *= (+-1344581221802617081);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_12 = ((((max(96340353428435937, (((arr_8 [i_2] [i_2]) % 18446744073709551615))))) ? ((((min((arr_2 [i_2] [i_2] [i_2]), var_3))) ? var_4 : var_1)) : (((~(((arr_7 [i_2]) + var_2)))))));
                                var_13 ^= (arr_5 [i_6 - 1]);
                            }
                        }
                    }
                    arr_17 [i_2] [1] [i_2] = 4294967295;
                    arr_18 [10] [10] [0] [i_2] = (min(((~(arr_15 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 - 1]))), ((var_2 ? var_4 : var_5))));
                }
            }
        }
    }
    #pragma endscop
}
