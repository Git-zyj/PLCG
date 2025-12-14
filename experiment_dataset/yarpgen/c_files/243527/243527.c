/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                var_11 ^= (((arr_2 [i_0] [i_0 + 4]) == (((18446744073709551604 == ((18446744073709551604 - (arr_2 [i_0] [i_1]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1] [i_2] [i_3] = (((((max((1452079130 >= 1452079130), var_8)))) * (min((arr_2 [i_1 - 2] [i_0 + 3]), 0))));
                            arr_10 [i_2] = 91;
                        }
                    }
                }
                arr_11 [i_0] [3] [i_1] |= ((var_7 < ((18446744073709551604 ? (arr_8 [i_1 - 4]) : 1025788243))));
            }
        }
    }
    var_12 = ((-(var_4 & var_3)));
    #pragma endscop
}
