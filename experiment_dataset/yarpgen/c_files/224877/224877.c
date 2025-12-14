/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = (arr_2 [i_0] [i_0]);
                    arr_9 [i_0] = (arr_8 [i_0] [i_0] [i_0]);
                    var_21 = (((arr_7 [i_0] [i_1] [i_2]) ^ (arr_8 [i_0] [i_1] [i_2])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            {
                var_22 ^= (-(arr_14 [i_4] [i_3] [i_3]));
                arr_16 [i_3] = 1;
            }
        }
    }
    var_23 = ((~((var_17 ? 35927 : var_19))));
    #pragma endscop
}
