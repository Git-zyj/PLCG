/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 += (min(var_4, ((25029 ? 25029 : 1))));
                arr_5 [i_1] = var_15;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_2] [i_2] [i_3 + 1] [i_2] = (arr_4 [0] [0] [i_2]);
                            arr_12 [1] [i_1] = (min(9534433885522634681, (arr_0 [i_2 + 2])));
                        }
                    }
                }
                var_17 = arr_6 [i_1];
                arr_13 [i_1] [i_1] = (((arr_10 [i_0]) ? ((max(54289, (arr_0 [i_1])))) : (arr_7 [i_1])));
            }
        }
    }
    var_18 ^= var_7;
    #pragma endscop
}
