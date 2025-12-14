/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_16;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_21 = (((max(65535, (arr_0 [i_0 - 4] [i_0 - 4]))) >= (max((arr_3 [i_0 - 1]), (arr_0 [i_0 + 1] [1])))));
                    arr_8 [0] [0] [i_2] = var_15;
                    var_22 = ((var_9 ? (arr_3 [i_0 - 1]) : (arr_6 [i_2])));
                    arr_9 [i_2] [i_0] [i_0] [i_0] = (arr_0 [i_2] [i_1]);
                }
            }
        }
    }
    var_23 *= var_15;
    var_24 = ((!(var_4 >= var_6)));
    #pragma endscop
}
