/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_11 = (arr_5 [i_0] [i_1 - 3] [i_1] [i_2]);
                    arr_8 [i_2] [i_1] [i_2] = ((~(((arr_0 [i_0] [i_1 + 1]) ^ (arr_0 [i_1] [i_1 - 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_12 ^= 1;
                                arr_14 [i_0] [i_0] [i_3] [i_3] [i_2] = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = var_3;
    var_14 = var_7;
    #pragma endscop
}
