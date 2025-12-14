/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                {
                    var_13 = (min((((var_11 ? 1 : var_5))), ((((arr_2 [i_2]) ? var_4 : 0)))));
                    var_14 = (arr_1 [4] [4]);
                    arr_8 [3] [i_1] = (min(4259360401553843800, 0));
                }
            }
        }
    }
    var_15 *= (((var_8 ? var_6 : ((var_1 ? 2552431154806360895 : -840703225)))));
    var_16 = ((-(min(var_7, ((var_5 ? 0 : var_10))))));
    var_17 = (~9043996348422468465);
    #pragma endscop
}
