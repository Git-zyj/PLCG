/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~var_3);
    var_11 = ((112 == (max((((65512 ? -24359 : var_9))), var_2))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1] = (~47865);
                    var_12 = 17663;
                    var_13 = var_4;
                    var_14 = (((arr_8 [i_0] [i_1] [i_0] [i_2]) ^ 0));
                    arr_12 [i_0] [i_1] [i_0] [i_2] = 47873;
                }
            }
        }
    }
    #pragma endscop
}
