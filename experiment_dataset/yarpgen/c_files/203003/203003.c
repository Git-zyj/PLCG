/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_11 = (((arr_1 [i_1] [i_1]) - (((min(1023, 55085)) / -1023))));
                    var_12 -= ((-((~(arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2 + 1])))));
                }
            }
        }
    }
    var_13 = var_9;
    #pragma endscop
}
