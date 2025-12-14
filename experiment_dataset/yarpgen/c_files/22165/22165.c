/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 = ((254 > (((arr_4 [i_0]) ? var_9 : 129))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_0] [i_0] [9] [i_4] = ((~((~(arr_4 [i_0])))));
                                arr_15 [i_0] [9] [i_1] [2] [i_0] [i_3] [i_4 + 1] = ((-8 ? (var_15 + var_12) : (arr_13 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] [i_4])));
                            }
                        }
                    }
                    var_18 ^= (arr_6 [i_0] [i_1] [i_2]);
                }
            }
        }
    }
    var_19 = ((var_2 ? 192 : (min((var_8 % var_4), 16011))));
    #pragma endscop
}
