/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0 - 2] [i_1] = (9223372036854775795 <= var_13);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [3] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (~-9223372036854775796);
                                arr_14 [i_0] [4] [i_0 - 1] = ((135 ? 726236700747094244 : (arr_1 [i_0 + 1])));
                                arr_15 [i_0] [i_0] [1] [i_0] [i_2] [i_0] [i_0] |= 2147483647;
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 ^= ((-var_10 | (min(((max(1, -84))), ((-9223372036854775795 ? 7936 : 11))))));
    var_16 ^= var_13;
    var_17 |= var_6;
    #pragma endscop
}
