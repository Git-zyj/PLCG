/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (max(var_17, (((16 | (~var_12))))));
    var_21 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_2] = ((((((max((arr_3 [i_0] [i_0] [8]), var_6))) < (arr_0 [i_0] [i_0]))) ? (arr_3 [i_0] [i_0] [i_0]) : (max(18, (arr_5 [i_0] [i_1])))));
                    arr_8 [i_0] [i_2] [i_0] [6] = var_9;
                }
            }
        }
    }
    var_22 &= var_0;
    var_23 = 3;
    #pragma endscop
}
