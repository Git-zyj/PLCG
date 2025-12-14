/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= 4502942983363801321;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] = 24098;
                arr_6 [i_0] [i_1] [i_1] = ((-(((arr_2 [i_1 - 4] [i_1 - 4] [i_0]) + (arr_2 [i_1 - 4] [i_1 - 4] [i_0])))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] [1] &= -695402777653959382;
                                arr_17 [i_0] [i_1] [i_2 - 2] [i_0] [i_4 + 4] = ((~(((13943801090345750299 | 1) ? (((4502942983363801321 ? (arr_3 [i_0]) : var_2))) : (arr_2 [i_0] [i_1 + 4] [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
