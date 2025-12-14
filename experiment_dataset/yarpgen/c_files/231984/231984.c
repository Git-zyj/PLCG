/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((min(65521, (max(-692556119, var_5)))), ((((var_11 < -15398) / ((max(65535, 65521))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [5] [i_0 + 1] [i_1] [1] = ((-760663235 > (((!((max((arr_0 [i_1]), 26043))))))));
                    arr_10 [i_0] [i_2] = (((!(arr_6 [i_0 - 1] [i_0 - 1] [i_0]))) || ((!((min((arr_5 [i_0 + 1] [0]), 14))))));
                    arr_11 [i_1] [i_1] = 0;
                }
            }
        }
    }
    #pragma endscop
}
