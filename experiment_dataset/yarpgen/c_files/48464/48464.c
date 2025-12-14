/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 10976;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] = (((((((max(0, var_8))) ? (arr_5 [i_1 + 2] [i_1 + 2]) : ((-1282440793 ? 96 : 2345))))) < 268435200));
                    arr_10 [i_0] [i_1] [i_0] [i_1] = (max(var_14, var_15));
                    arr_11 [i_0] [i_1] [i_1] [i_2] |= arr_6 [i_0] [i_1] [i_2];
                    var_17 = (arr_7 [i_1 + 1] [i_1 - 2] [i_1 - 2]);
                }
            }
        }
    }
    #pragma endscop
}
